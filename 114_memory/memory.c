/*
114. The screen is divided into 25 rows and 80 columns. The characters that are displayed on the 
screen are stored in a special memory called VDU memory (not to be confused with ordinary memory). 
Each character displayed on the screen occupies two bytes in VDU memory. 
The first of these bytes contains the ASCII value of the character being displayed, whereas, the second byte
contains the colour in which the character is displayed. For example, the ASCII value of the character 
present on zeroth row and zeroth column on the screen is stored atlocation number 0xB8000000. 
Therefore the colour of this character would be present at location number 0xB8000000 + 1. 
Similarly ASCII value of character in row 0, col 1 will be at location 0xB8000000 + 2, and its
colour at 0xB8000000 + 3. With this knowledge write a program to print any string of your chice with 
attribute of your choice .(Without printf()!!!!!!!!!)

attribute bits are as follows

WXXXYZZZ
W      Foreground Blink or (alternate) Background bright 
X      Background color 
Y      Foreground Bright or (alternate) Alternate character set 
Z      Foreground color
*/