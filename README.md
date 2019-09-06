# Ass-Font-Changer
Font changer for Ass subtitle files. C++ code which simply reads file, do some string manipulations, write result to same file.

# Usage
This program accepts command line arguments. No, one or two arguments for the execution.

No argument will mean to use file 'subtitle.ass' and change the font to Arial. Like:
changeAssFont

1st argument is file name, the font of that subtitle will be set to Arial. Like:
changeAssFont english.ass

2.d argument is the font name to be set to/ Example
changeAssFont english.ass Algerian

# Example of changes
![alt text](https://i.imgur.com/ssQiMYz.png)
# Before:
```
[Script Info]...
[V4+ Styles]
Format: Name, Fontname, Fontsize, PrimaryColour, SecondaryColour, OutlineColour, BackColour, Bold, Italic, Underline, StrikeOut, ScaleX, ScaleY, Spacing, Angle, BorderStyle, Outline, Shadow, Alignment, MarginL, MarginR, MarginV, Encoding
Style: Default,Arial,20,&H00FFFFFF,&H000000FF,&H00000000,&H00000000,0,0,0,0,100,100,0,0,1,2,2,2,10,10,10,1
Style: EpDBZ,Arial,36,&H00D5DDDC,&H000000FF,&HEB000000,&H55000000,-1,0,0,0,100,100,0,0,1,1,0,2,10,10,10,1
Style: GolpeDown,20 CENTS MARKER,42,&H00C5F7F0,&H00040405,&H001104D9,&H00000000,-1,-1,0,0,100,100,0,0,1,2,0,2,10,10,10,1
Style: GolpeUp,Myriad Pro Cond,34,&H00FFFFFF,&H00040405,&H00801722,&H00000000,-1,-1,0,0,100,100,0,0,1,2,0,8,10,10,10,1
Style: Karaoke,Another,28,&H00169F19,&H000000FF,&H00FFFFFF,&H00000000,0,0,0,0,100,100,0,0,1,2,1,8,10,10,4,1
Style: Karaoke02,Kronika,28,&H00F6F5F3,&H00000000,&H00000000,&H00000000,-1,0,0,0,100,100,0,0,1,0,0,2,10,10,5,1
Style: Karaoke03,20 CENTS MARKER,34,&H00C3EEBB,&H000000FF,&H000B0909,&H00000000,-1,0,0,0,100,100,0,0,1,3,0,7,10,10,5,1
Style: Karaoke04,GosmickSans,30,&H00FFFFFF,&H000000FF,&H000B0909,&H00000000,-1,0,0,0,100,100,0,0,1,1,0,3,10,10,5,1
Style: narrador,Monotype Corsiva,34,&H00FFFFFF,&H000000FF,&H00171D04,&H00000000,-1,0,0,0,100,100,0,0,1,2,0,2,10,10,5,1
Style: Nota,GosmickSans,28,&H00FFFFFF,&H000000FF,&H003E529A,&H00000000,-1,0,0,0,100,100,0,0,1,0,0,8,10,10,10,1
Style: padrao,Myriad Pro Cond,39,&H00FFFFFF,&H00000000,&H64000000,&H00000041,-1,0,0,0,100,100,0,0,1,2,0,2,10,10,10,1
Style: preview,Myriad Pro Cond,39,&H00FFFFFF,&H00040405,&H00376530,&H00000000,-1,-1,0,0,100,100,0,0,1,2,0,2,10,10,10,1
Style: Titulo,Arial,28,&H00BDB8B8,&H00040405,&HD3040405,&H78000000,-1,0,0,0,100,100,0,0,1,0,0,2,10,10,10,1
[Events]...
```
# After using Ass Font Changer:
```
[Script Info]...
Format: Name, Fontname, Fontsize, PrimaryColour, SecondaryColour, OutlineColour, BackColour, Bold, Italic, Underline, StrikeOut, ScaleX, ScaleY, Spacing, Angle, BorderStyle, Outline, Shadow, Alignment, MarginL, MarginR, MarginV, Encoding
Style: Default,Arial,20,&H00FFFFFF,&H000000FF,&H00000000,&H00000000,0,0,0,0,100,100,0,0,1,2,2,2,10,10,10,1
Style: EpDBZ,Arial,36,&H00D5DDDC,&H000000FF,&HEB000000,&H55000000,-1,0,0,0,100,100,0,0,1,1,0,2,10,10,10,1
Style: GolpeDown,Arial,42,&H00C5F7F0,&H00040405,&H001104D9,&H00000000,-1,-1,0,0,100,100,0,0,1,2,0,2,10,10,10,1
Style: GolpeUp,Arial,34,&H00FFFFFF,&H00040405,&H00801722,&H00000000,-1,-1,0,0,100,100,0,0,1,2,0,8,10,10,10,1
Style: Karaoke,Arial,28,&H00169F19,&H000000FF,&H00FFFFFF,&H00000000,0,0,0,0,100,100,0,0,1,2,1,8,10,10,4,1
Style: Karaoke02,Arial,28,&H00F6F5F3,&H00000000,&H00000000,&H00000000,-1,0,0,0,100,100,0,0,1,0,0,2,10,10,5,1
Style: Karaoke03,Arial,34,&H00C3EEBB,&H000000FF,&H000B0909,&H00000000,-1,0,0,0,100,100,0,0,1,3,0,7,10,10,5,1
Style: Karaoke04,Arial,30,&H00FFFFFF,&H000000FF,&H000B0909,&H00000000,-1,0,0,0,100,100,0,0,1,1,0,3,10,10,5,1
Style: narrador,Arial,34,&H00FFFFFF,&H000000FF,&H00171D04,&H00000000,-1,0,0,0,100,100,0,0,1,2,0,2,10,10,5,1
Style: Nota,Arial,28,&H00FFFFFF,&H000000FF,&H003E529A,&H00000000,-1,0,0,0,100,100,0,0,1,0,0,8,10,10,10,1
Style: padrao,Arial,39,&H00FFFFFF,&H00000000,&H64000000,&H00000041,-1,0,0,0,100,100,0,0,1,2,0,2,10,10,10,1
Style: preview,Arial,39,&H00FFFFFF,&H00040405,&H00376530,&H00000000,-1,-1,0,0,100,100,0,0,1,2,0,2,10,10,10,1
Style: Titulo,Arial,28,&H00BDB8B8,&H00040405,&HD3040405,&H78000000,-1,0,0,0,100,100,0,0,1,0,0,2,10,10,10,1
[Events]...
```
