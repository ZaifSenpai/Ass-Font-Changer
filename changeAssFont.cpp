#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <string.h>

using namespace std;

int getFontPlace(string line);

int main(int argc, char *argv[]) {
	int start, end, i, j, place, _place = 0, oldFontLength = 0, oldFontStart = 0, sizeB4Font = 0;
	bool inc = false, startRec = false;
	string filename = "", dummy = "", fontToAdd = "";
	vector<string> filecontent;
	if (argc > 1) filename = argv[1];
	else filename = "subtitle.ass";
	// Reading whole file
	cout << "Reading from file...\n";
	ifstream filein(filename);
	if (filein == NULL) {
		cout << "Error opening file " << filename << endl;
		exit(1);
	}
	for (string ch; getline(filein, ch); filecontent.push_back(ch));
	filein.close();
	
	cout << "Looking for Styles...\n";
	for (i = 0; i < filecontent.size(); i++) {
		if (filecontent[i].find("[V4+ Styles]") != string::npos) {
			start = i+1;
		}
		if (filecontent[i].find("[Events]") != string::npos) {
			end = i-2;
		}
	}
	
	place = getFontPlace(filecontent[start]);
	// So "Fontname" is now written after Place`th coma
	if (argc == 3) fontToAdd = argv[2];
	else fontToAdd = "Arial";
	// Doing the work now
	cout << "Computing...\n";
	for (i = start+1; i <= end; i++) {
		for (j = 0; j < filecontent[i].length(); j++) {
			if (filecontent[i][j] == ',' && inc == true) break;
			if (filecontent[i][j] == ',' && inc == false) {
				_place++;
				inc = true;
				startRec = true;
			}
			if (inc == true && startRec == true) {
				oldFontLength++;
			}
		}
		oldFontStart = j - oldFontLength + 1;
		oldFontLength--;
		
		dummy = filecontent[i].substr(0,  oldFontStart);
		sizeB4Font = dummy.length();
		dummy = dummy + fontToAdd;
		dummy = dummy + filecontent[i].substr(oldFontStart + oldFontLength, filecontent[i].length() - sizeB4Font);
		filecontent[i] = dummy;
		
		// Resetting variables for next iteration
		oldFontLength = 0;
		inc = false;
		startRec = false;
		_place = 0;
		dummy = "";
	}
	
	// Writting output to file
	cout << "Writting output to "<< filename << " ...\n";
	ofstream fileout(filename);
	for (i = 0; i < filecontent.size(); i++) fileout << filecontent[i] << endl;
	fileout.close();
	
	cout << "Done!\n\n";
	return 0;
}

int getFontPlace(string line) {
	int i, pos = 0;
	for (i = 0; i < line.length(); i++) {
		if (line[i] == ',') pos++;
		if (!strcmp(line.substr(i, 8).c_str(), "Fontname")) break;
	}
	
	return pos;
}

















