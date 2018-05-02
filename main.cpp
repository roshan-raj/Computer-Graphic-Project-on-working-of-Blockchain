#include <windows.h>
#include<GL/glut.h>
#include<GL/glu.h>
#include<stdio.h>
#include<math.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
#define DEG2RAD 3.14159/180.0

char str1[] = "MANGALORE INSTITUTE OF TECHNOLOGY & ENGINEERING";
char str2[] = "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
char str3[] = "COMPUTER GRAPHICS AND VISUALIZATION LABORATORY";
char str4[] = "A MINI PROJECT";
char str5[] = "ON";
char str6[] = "WORKING OF BLOCKCHAIN";
char str7[] = "Submitted By:";
char str8[] = "ROSHAN RAJ - 4MT15CS117";
char str9[] = "SURESH PRABHU - 4MT15CS107";
char str10[] = "Submitted To:";
char str11[] = "MR. SUNIL KUMAR S";
char str12[] = "MR. PRASHANTH B.S";
char str13[] = "********************************************* MENU *********************************************";
char str14[] = "Press (1) : Create a Block";
char str15[] = "Press (2) : Tamper with a Block";
char str16[] = "Press (3) : Distribution of a Block";
char str17[] = "Press (4) : Display a Block Chain";
char str18[] = "Press 'ESC' to Exit.";
char str19[] = "************************************************************************************************";
char str20[] = "Thank You!";
char str21[] = "CREATION OF A BLOCK";
char str22[] = "Cryptographic Hash of the previous block";
char str23[] = "A Time stamp";
char str24[] = "Transaction Data";
char str25[] = "A block records some or all of the most recent Bitcoin transactions that have not yet entered any prior blocks. Thus a block";
char str26[] = "is like a page of a ledger or record book. Each time a block is 'completed', it gives way to the next block in the blockchain.";
char str27[] = "------------->";
char str28[] = "( Press ENTER to continue )";
char str29[] = "TAMPER WITH A BLOCK";
char str30[] = "Hash: ";
char str31[] = "Previous Hash: ";
char str32[] = "1Z8F";
char str33[] = "0000";
char str34[] = "6BQ1";
char str35[] = "3H4Q";
char str36[] = "H62Y";
char str37[] = "Uh thats not right??!";
char str38[] = "Here we have a chain of 3 blocks. As you can see, each block has a hash and hash of the previous block.";
char str39[] = "So, block number 3 points to block number 2, and number 2 points to number 1.";
char str40[] = "1st block is special. It cannot point to previous block because it's the first one. We call this block, `The Genesis Block`.";
char str41[] = "1";
char str42[] = "2";
char str43[] = "3";
char *str44 = "Now lets say that you tamper with the 2nd block, this causes the hash of the block to change as well.";
char *str45 = "In turn, that will make block 3 and all following block invalid because they no longer store a valid hash of the previous block.";
char *str46 = "So changing a single block will make all following blocks invalid.";
char *str47 = "DISTRIBUTION OF A BLOCK";
void *font = GLUT_BITMAP_HELVETICA_18;
void myKey(unsigned char key, int x, int y);

void display1();
void display2();
void display3();
void display4();
void display5();
void display4intermediate();

void DrawEllipse(float x, float y, float radiusX, float radiusY) {
	int i;
	glTranslatef(x,y,0.0f);
	glBegin(GL_LINE_LOOP);
	for (i = 0;i < 360;i++)
	{
		float rad = i*DEG2RAD;
		glVertex2f(cos(rad)*radiusX, sin(rad)*radiusY);
	}
	glEnd();
}
int i;

void display1() //Font Screen
{
	glClearColor(0, 0, 0, 0); //background color
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glColor3f(1, 1, 1); // foreground color

	glRasterPos2f(-5.06, 7);
	for (i = 0;i < strlen(str1);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str1[i]); //MITE

	glRasterPos2f(-5, 6);
	for (i = 0;i<strlen(str2);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str2[i]); //DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING
	glRasterPos2f(-5, 3);
	for (i = 0;i<strlen(str3);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str3[i]); //COMPUTER GRAPHICS AND VISUALIZATION LABORATORY
	glRasterPos2f(-1.5, 1);
	for (i = 0;i<strlen(str4);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str4[i]); //A MINI PROJECT
	glRasterPos2f(-0.5, 0);
	for (i = 0;i<strlen(str5);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str5[i]); //ON
	glRasterPos2f(-2.5, -1);
	for (i = 0;i<strlen(str6);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str6[i]); //WORKING OF BLOCKCHAIN
	glRasterPos2f(-9, -5);
	for (i = 0;i<strlen(str7);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str7[i]); //DESIGNED BY:
	glRasterPos2f(-8.5, -6);
	for (i = 0;i<strlen(str8);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str8[i]);
	glRasterPos2f(-8.5, -7);
	for (i = 0;i<strlen(str9);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str9[i]);
	glRasterPos2f(5, -5);
	for (i = 0;i<strlen(str10);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str10[i]);
	glRasterPos2f(5.5, -6);
	for (i = 0;i<strlen(str11);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str11[i]);
	glRasterPos2f(5.5, -7);
	for (i = 0;i<strlen(str12);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str12[i]);
    glColor3f(1.0,0.0,0.0);
    glRasterPos2f(-1.75,-9);
    for (i = 0;i<strlen(str28);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str28[i]);
	glutKeyboardFunc(myKey);
	glFlush();

}
void display2() //Menu Screen
{
	glClearColor(1, 1, 1, 0); //background color
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glColor3f(0, 0, 0); // foreground color
	glRasterPos2f(-8.5, 7);
	for (i = 0;i<strlen(str13);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str13[i]);
	glRasterPos2f(-3, 4);
	for (i = 0;i<strlen(str14);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str14[i]);
	glRasterPos2f(-3, 2);
	for (i = 0;i<strlen(str15);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str15[i]);
	glRasterPos2f(-3, 0);
	for (i = 0;i<strlen(str16);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str16[i]);
	glRasterPos2f(-3, -2);
	for (i = 0;i<strlen(str17);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str17[i]);
	glRasterPos2f(-3, -4);
	for (i = 0;i<strlen(str18);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str18[i]);
	glRasterPos2f(-8.5, -7);
	for (i = 0;i<strlen(str19);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str19[i]);
	glutKeyboardFunc(myKey); //Take user input for the menu
	glFlush();
}

void myKey(unsigned char key, int x, int y) {
	if (key == (char)13) //Goes to Menu Page
	{
		glutDisplayFunc(display2);
		display2();
		glEnd();
		glFlush();
	}
	if (key == '1') //option 1 is chosen from the Menu
	{
		glutDisplayFunc(display3);
		display3();
		glEnd();
		glFlush();
	}
    if (key == '2') { //option 2 is chosen from the Menu
		glutDisplayFunc(display4);
		display4();
		glEnd();
		glFlush();
	}
	if (key == '3') {
        glutDisplayFunc(display5);
        display5();
        glEnd();
        glFlush();
	}
	if (key == (char)27) //Exit the Project
	{

		glClearColor(1, 1, 1, 0); //background color
		glClear(GL_COLOR_BUFFER_BIT);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluOrtho2D(-10, 10, -10, 10);
		glColor3f(0, 0, 0); // foreground color
		glRasterPos2f(-1, 0);
		for (i = 0;i<strlen(str20);i++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str20[i]); //Thank You!
		glFlush();
		for (int i = 0; i < 20000; i++) for (int j = 0; j < 20000; j++); //delay
		exit(0); //quit
	}
}


void ProcessMenu(int id) {
    if(id == 1)
        display4intermediate();
}

void MouseMenu() {
    int menu = glutCreateMenu(ProcessMenu);
    glutAddMenuEntry("Tamper Block",1);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
}

// Option 1 screen
void display3() {
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glClearColor(1, 1, 1, 1); //background color of the screen
	glClear(GL_COLOR_BUFFER_BIT);
	glRasterPos2f(-8.5, 7);
	for (i = 0;i<strlen(str19);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str19[i]); //
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay

	glRasterPos2f(-2, 8);
	for (i = 0;i<strlen(str21);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str21[i]); //CREATION OF A BLOCK
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 15000; j++); //delay

//hollow cube display begin
	glBegin(GL_LINES);
	glVertex2f(3, -2);
	glVertex2f(5, -3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(5, -3);
	glVertex2f(7, -2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(3, -2);
	glVertex2f(3, 2);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(5, -3);
	glVertex2f(5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7, -2);
	glVertex2f(7, 2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(3, 2);
	glVertex2f(5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(5, 1);
	glVertex2f(7, 2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(3, 2);
	glVertex2f(5, 3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(5, 3);
	glVertex2f(7, 2);
	glEnd();
	glFlush();
	//hollow cube display end

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 20000; j++); //delay

	glRasterPos2f(-8, 2);
	for (i = 0;i<strlen(str22);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str22[i]); //Cryptographic Hash of the previous block
	glFlush();
	for (int i = 0; i < 20000; i++) for (int j = 0; j < 15000; j++); //delay
	glRasterPos2f(-8, 0);
	for (i = 0;i<strlen(str23);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str23[i]); //A Timestamp
	glFlush();
	for (int i = 0; i < 20000; i++) for (int j = 0; j < 15000; j++); //delay
	glRasterPos2f(-8, -2);
	for (i = 0;i<strlen(str24);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str24[i]); //Transaction Data
	glFlush();
	for (int i = 0; i < 20000; i++) for (int j = 0; j < 15000; j++); //delay

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 15000; j++); //delay
	glRasterPos2f(-1.5, 2);
	for (i = 0;i<strlen(str27);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str27[i]); //arrow1
	glFlush();
	for (int i = 0; i < 20000; i++) for (int j = 0; j < 15000; j++); //delay
	glRasterPos2f(-1.5, 0);
	for (i = 0;i<strlen(str27);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str27[i]); //arrow2
	glFlush();
	for (int i = 0; i < 20000; i++) for (int j = 0; j < 15000; j++); //delay
	glRasterPos2f(-1.5, -2);
	for (i = 0;i<strlen(str27);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str27[i]); //arrow3
	glFlush();
	for (int i = 0; i < 20000; i++) for (int j = 0; j < 15000; j++); //delay

//filled cube display begin
	//left
	glBegin(GL_QUADS);
	glColor3f(0,1,0);//green
	glVertex2f(3,-2);
	glVertex2f(5,-3);
	glVertex2f(5,1);
	glVertex2f(3,2);
	glEnd();

	//right
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);//green
	glVertex2f(5, -3);
	glVertex2f(7,-2);
	glVertex2f(7,2);
	glVertex2f(5,1);
	glEnd();

	//top
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);//green
	glVertex2f(3,2);
	glVertex2f(5,1);
	glVertex2f(7, 2);
	glVertex2f(5,3);
	glEnd();
	glFlush();

	glColor3f(0, 0, 0);//black
	//border
	glBegin(GL_LINES);
	glVertex2f(3, -2);
	glVertex2f(5, -3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(5, -3);
	glVertex2f(7, -2);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glVertex2f(3, -2);
	glVertex2f(3, 2);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(5, -3);
	glVertex2f(5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7, -2);
	glVertex2f(7, 2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(3, 2);
	glVertex2f(5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(5, 1);
	glVertex2f(7, 2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(3, 2);
	glVertex2f(5, 3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(5, 3);
	glVertex2f(7, 2);
	glEnd();
	glFlush();

//filled cube display end

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay
	for (int i = 0; i < 20000; i++) for (int j = 0; j < 30000; j++); //delay

	glRasterPos2f(-9, -6);
	for (i = 0;i<strlen(str25);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str25[i]); //
	glRasterPos2f(-9, -7);
	for (i = 0;i<strlen(str26);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str26[i]); //
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 20000; j++); //delay

	glRasterPos2f(-2.5, -9);
	for (i = 0;i<strlen(str28);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str28[i]); // ( Press `ENTER` to continue )
	glutKeyboardFunc(myKey);
	glFlush();
	glutKeyboardFunc(myKey);
}

void display4()
{
     glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glClearColor(1, 1, 1, 1); //background color of the screen
	glClear(GL_COLOR_BUFFER_BIT);
	glRasterPos2f(-8.5, 7);
	for (i = 0;i<strlen(str19);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str19[i]); //
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay

	glRasterPos2f(-2, 8);
	for (i = 0;i<strlen(str29);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str29[i]); //TAMPER WITH A BLOCK
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 15000; j++); //delay

//1st block
//Left-side
	glBegin(GL_QUADS);
	glColor3f(0.196078, 0.6, 0.8);//skyblue
	glVertex2f(-8.5, 1);
	glVertex2f(-7, 0);
	glVertex2f(-7, 3);
	glVertex2f(-8.5, 4);
	glEnd();
//Top-side
	glBegin(GL_QUADS);
	glColor3f(0.196078, 0.6, 0.8);//skyblue
	glVertex2f(-8.5, 4);
	glVertex2f(-7, 3);
	glVertex2f(-5.5, 4);
	glVertex2f(-7, 5);
	glEnd();
//Right-side
	glBegin(GL_QUADS);
	glColor3f(0.196078, 0.6, 0.8);//skyblue
	glVertex2f(-7, 0);
	glVertex2f(-5.5, 1);
	glVertex2f(-5.5, 4);
	glVertex2f(-7, 3);
	glEnd();
//Cube border
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(-8.5, 4);
	glVertex2f(-8.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-7, 3);
	glVertex2f(-7, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-5.5, 4);
	glVertex2f(-5.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-8.5, 1);
	glVertex2f(-7, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-7, 0);
	glVertex2f(-5.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-8.5, 4);
	glVertex2f(-7, 3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-7, 3);
	glVertex2f(-5.5, 4);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-8.5, 4);
	glVertex2f(-7, 5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-7, 5);
	glVertex2f(-5.5, 4);
	glEnd();

	glRasterPos2f(-7, 4);
	for (i = 0;i<strlen(str41);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str41[i]); //1
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 15000; j++); //delay

//2nd block
//Left-side
	glBegin(GL_QUADS);
	glColor3f(0.96, 0.80, 0.69);//flesh
	glVertex2f(-1.5, 1);
	glVertex2f(0, 0);
	glVertex2f(0, 3);
	glVertex2f(-1.5, 4);
	glEnd();
//Top-side
	glBegin(GL_QUADS);
	glColor3f(0.96, 0.80, 0.69);//flesh
	glVertex2f(-1.5, 4);
	glVertex2f(0, 3);
	glVertex2f(1.5, 4);
	glVertex2f(0, 5);
	glEnd();
//Right-side
	glBegin(GL_QUADS);
	glColor3f(0.96, 0.80, 0.69);//flesh
	glVertex2f(0, 0);
	glVertex2f(1.5, 1);
	glVertex2f(1.5, 4);
	glVertex2f(0, 3);
	glEnd();
//Cube border
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(-1.5, 4);
	glVertex2f(-1.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0, 3);
	glVertex2f(0, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(1.5, 4);
	glVertex2f(1.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-1.5, 1);
	glVertex2f(0, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0, 0);
	glVertex2f(1.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-1.5, 4);
	glVertex2f(0, 3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0, 3);
	glVertex2f(1.5, 4);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-1.5, 4);
	glVertex2f(0, 5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0, 5);
	glVertex2f(1.5, 4);
	glEnd();

	glRasterPos2f(0, 4);
	for (i = 0;i<strlen(str42);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str42[i]); //2
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 15000; j++); //delay

//3rd block
//Left-side
	glBegin(GL_QUADS);
	glColor3f(1, 0.5, 0);//orange
	glVertex2f(8.5, 1);
	glVertex2f(7, 0);
	glVertex2f(7, 3);
	glVertex2f(8.5, 4);
	glEnd();
//Top-side
	glBegin(GL_QUADS);
	glColor3f(1, 0.5, 0);//orange
	glVertex2f(8.5, 4);
	glVertex2f(7, 3);
	glVertex2f(5.5, 4);
	glVertex2f(7, 5);
	glEnd();
//Right-side
	glBegin(GL_QUADS);
	glColor3f(1, 0.5, 0);//orange
	glVertex2f(7, 0);
	glVertex2f(5.5, 1);
	glVertex2f(5.5, 4);
	glVertex2f(7, 3);
	glEnd();
//Cube border
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(8.5, 4);
	glVertex2f(8.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7, 3);
	glVertex2f(7, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(5.5, 4);
	glVertex2f(5.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(8.5, 1);
	glVertex2f(7, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7, 0);
	glVertex2f(5.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(8.5, 4);
	glVertex2f(7, 3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7, 3);
	glVertex2f(5.5, 4);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(8.5, 4);
	glVertex2f(7, 5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7, 5);
	glVertex2f(5.5, 4);
	glEnd();

	glRasterPos2f(7, 4);
	for (i = 0;i<strlen(str43);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str43[i]); //3
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 15000; j++); //delay

//Chain line
	glBegin(GL_LINES);
	glVertex2f(-5.5, 2.5);
	glVertex2f(-1.5, 2.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(1.5, 2.5);
	glVertex2f(5.5, 2.5);
	glEnd();
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 15000; j++); //delay

	//line-divider
	glBegin(GL_LINES);
	glVertex2f(-3.5, -1);
	glVertex2f(-3.5, -5);
	glEnd();

	//line-divider
	glBegin(GL_LINES);
	glVertex2f(3.5, -1);
	glVertex2f(3.5, -5);
	glEnd();

	glFlush();

	glRasterPos2f(-8.5, -2);
	for (i = 0;i<strlen(str30);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str30[i]); //Hash:
	glFlush();

	glRasterPos2f(-8.5, -4);
	for (i = 0;i<strlen(str31);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str31[i]); //Previous Hash:
	glFlush();

	glRasterPos2f(-2.5, -2);
	for (i = 0;i<strlen(str30);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str30[i]); //Hash:
	glFlush();

	glRasterPos2f(-2.5, -4);
	for (i = 0;i<strlen(str31);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str31[i]); //Previous Hash:
	glFlush();

	glRasterPos2f(4.5, -2);
	for (i = 0;i<strlen(str30);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str30[i]); //Hash:
	glFlush();

	glRasterPos2f(4.5, -4);
	for (i = 0;i<strlen(str31);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str31[i]); //Previous Hash:
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 15000; j++); //delay

	glRasterPos2f(-5.5, -2);
	for (i = 0;i<strlen(str32);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str32[i]); //1Z8F
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay

	glRasterPos2f(-5.5, -4);
	for (i = 0;i<strlen(str33);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str33[i]); //0000
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay

	glRasterPos2f(1.5, -2);
	for (i = 0;i<strlen(str35);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str35[i]); //6BQ1
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay

	glRasterPos2f(1.5, -4);
	for (i = 0;i<strlen(str32);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str32[i]); //1Z8F
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay

	glRasterPos2f(7.5, -2);
	for (i = 0;i<strlen(str36);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str36[i]); //H62Y
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay

	glRasterPos2f(7.5, -4);
	for (i = 0;i<strlen(str35);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str35[i]); //6BQ1
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay


	glRasterPos2f(-8.5, -7);
	for (i = 0;i<strlen(str38);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str38[i]); //Here we have a chain of 3 blocks...
	glFlush();
	for (int i = 0; i < 20000; i++) for (int j = 0; j < 20000; j++); //delay

	DrawEllipse(8, -4, 1, 0.75); //3rd block hash circle
	glFlush();for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay
	DrawEllipse(-6, 2, 1, 0.75); //2nd block hash circle
	glFlush();for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay
	//3rd to 2nd arrow
	glBegin(GL_LINES);
	glVertex2f(5, -2);
	glVertex2f(1, 0);
	glEnd();
	glFlush();for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay

	glRasterPos2f(-10.5, -6);
	for (i = 0;i<strlen(str39);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str39[i]); //So, block number 3 points to block number 2, and number 2 points to number 1.
	glFlush();for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay

	DrawEllipse(0, -2, 1, 0.75); //2nd block previous hash circle
	glFlush();for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay

	DrawEllipse(-7, 2, 1, 0.75); //1st block previous hash circle
	glFlush();for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay

	//3rd to 2nd arrow
	glBegin(GL_LINES);
	glVertex2f(6, -2);
	glVertex2f(1, 0);
	glEnd();

	glFlush();for (int i = 0; i < 20000; i++) for (int j = 0; j < 15000; j++); //delay

	glRasterPos2f(-3.5, -7);
	for (i = 0;i<strlen(str40);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str40[i]); //1st block is special. It cannot point to previous block because it's the first one. We call this block, `The Genesis Block`.
	glFlush();

	//underline
	glBegin(GL_LINES);
	glColor3f(0, 1, 0);
	glVertex2f(-0.75, -2.25);
	glVertex2f(0.5, -2.25);
	glEnd();glBegin(GL_LINES);
	glColor3f(0, 1, 0);
	glVertex2f(-0.75, -2.45);
	glVertex2f(0.5, -2.45);
	glEnd();

	glRasterPos2f(0, 0);
	glFlush();
	for (int i = 0; i < 20000; i++) for (int j = 0; j < 15000; j++); //delay
	MouseMenu();
	//display4intermediate();
}
void display4intermediate()
{
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glClearColor(1, 1, 1, 1); //background color of the screen
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(0, 0, 0);
	glRasterPos2f(-8.5, 7);
	for (i = 0;i<strlen(str19);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str19[i]); //
	glFlush();

	glRasterPos2f(-2, 8);
	for (i = 0;i<strlen(str29);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str29[i]); //TAMPER WITH A BLOCK
	glFlush();

//1st block
	//left-side
	glBegin(GL_QUADS);
	glColor3f(0.196078, 0.6, 0.8);//skyblue
	glVertex2f(-8.5, 1);
	glVertex2f(-7, 0);
	glVertex2f(-7, 3);
	glVertex2f(-8.5, 4);
	glEnd();

	//top-side
	glBegin(GL_QUADS);
	glColor3f(0.196078, 0.6, 0.8);//skyblue
	glVertex2f(-8.5, 4);
	glVertex2f(-7, 3);
	glVertex2f(-5.5, 4);
	glVertex2f(-7, 5);
	glEnd();

	//right-side
	glBegin(GL_QUADS);
	glColor3f(0.196078, 0.6, 0.8);//skyblue
	glVertex2f(-7, 0);
	glVertex2f(-5.5, 1);
	glVertex2f(-5.5, 4);
	glVertex2f(-7, 3);
	glEnd();

	//cube border
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(-8.5, 4);
	glVertex2f(-8.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-7, 3);
	glVertex2f(-7, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-5.5, 4);
	glVertex2f(-5.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-8.5, 1);
	glVertex2f(-7, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-7, 0);
	glVertex2f(-5.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-8.5, 4);
	glVertex2f(-7, 3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-7, 3);
	glVertex2f(-5.5, 4);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-8.5, 4);
	glVertex2f(-7, 5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-7, 5);
	glVertex2f(-5.5, 4);
	glEnd();

	glRasterPos2f(-7, 4);
	for (i = 0;i<strlen(str41);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str41[i]); //1
	glFlush();

//2nd block
	//left-side
	glBegin(GL_QUADS);
	glColor3f(0.96, 0.80, 0.69);//flesh
	glVertex2f(-1.5, 1);
	glVertex2f(0, 0);
	glVertex2f(0, 3);
	glVertex2f(-1.5, 4);
	glEnd();

	//top-side
	glBegin(GL_QUADS);
	glColor3f(0.96, 0.80, 0.69);//flesh
	glVertex2f(-1.5, 4);
	glVertex2f(0, 3);
	glVertex2f(1.5, 4);
	glVertex2f(0, 5);
	glEnd();

	//right-side
	glBegin(GL_QUADS);
	glColor3f(0.96, 0.80, 0.69);//flesh
	glVertex2f(0, 0);
	glVertex2f(1.5, 1);
	glVertex2f(1.5, 4);
	glVertex2f(0, 3);
	glEnd();

	//cube border
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(-1.5, 4);
	glVertex2f(-1.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0, 3);
	glVertex2f(0, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(1.5, 4);
	glVertex2f(1.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-1.5, 1);
	glVertex2f(0, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0, 0);
	glVertex2f(1.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-1.5, 4);
	glVertex2f(0, 3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0, 3);
	glVertex2f(1.5, 4);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-1.5, 4);
	glVertex2f(0, 5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0, 5);
	glVertex2f(1.5, 4);
	glEnd();

	glRasterPos2f(0, 4);
	for (i = 0;i<strlen(str42);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str42[i]); //2
	glFlush();

//3rd block
	//left-side
	glBegin(GL_QUADS);
	glColor3f(1, 0.5, 0);//orange
	glVertex2f(8.5, 1);
	glVertex2f(7, 0);
	glVertex2f(7, 3);
	glVertex2f(8.5, 4);
	glEnd();

	//top-side
	glBegin(GL_QUADS);
	glColor3f(1, 0.5, 0);//orange
	glVertex2f(8.5, 4);
	glVertex2f(7, 3);
	glVertex2f(5.5, 4);
	glVertex2f(7, 5);
	glEnd();

	//right-side
	glBegin(GL_QUADS);
	glColor3f(1, 0.5, 0);//orange
	glVertex2f(7, 0);
	glVertex2f(5.5, 1);
	glVertex2f(5.5, 4);
	glVertex2f(7, 3);
	glEnd();

	//cube border
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(8.5, 4);
	glVertex2f(8.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7, 3);
	glVertex2f(7, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(5.5, 4);
	glVertex2f(5.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(8.5, 1);
	glVertex2f(7, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7, 0);
	glVertex2f(5.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(8.5, 4);
	glVertex2f(7, 3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7, 3);
	glVertex2f(5.5, 4);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(8.5, 4);
	glVertex2f(7, 5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7, 5);
	glVertex2f(5.5, 4);
	glEnd();

	glRasterPos2f(7, 4);
	for (i = 0;i<strlen(str43);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str43[i]); //3
	glFlush();

	//chain line
	glBegin(GL_LINES);
	glVertex2f(-5.5, 2.5);
	glVertex2f(-1.5, 2.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(1.5, 2.5);
	glVertex2f(5.5, 2.5);
	glEnd();
	glFlush();

	//line-divider
	glBegin(GL_LINES);
	glVertex2f(-3.5, -1);
	glVertex2f(-3.5, -5);
	glEnd();

	//line-divider
	glBegin(GL_LINES);
	glVertex2f(3.5, -1);
	glVertex2f(3.5, -5);
	glEnd();

	glFlush();

	glRasterPos2f(-8.5, -2);
	for (i = 0;i<strlen(str30);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str30[i]); //Hash:
	glFlush();

	glRasterPos2f(-8.5, -4);
	for (i = 0;i<strlen(str31);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str31[i]); //Previous Hash:
	glFlush();

	glRasterPos2f(-2.5, -2);
	for (i = 0;i<strlen(str30);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str30[i]); //Hash:
	glFlush();

	glRasterPos2f(-2.5, -4);
	for (i = 0;i<strlen(str31);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str31[i]); //Previous Hash:
	glFlush();

	glRasterPos2f(4.5, -2);
	for (i = 0;i<strlen(str30);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str30[i]); //Hash:
	glFlush();

	glRasterPos2f(4.5, -4);
	for (i = 0;i<strlen(str31);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str31[i]); //Previous Hash:
	glFlush();

	glRasterPos2f(-5.5, -2);
	for (i = 0;i<strlen(str32);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str32[i]); //1Z8F
	glFlush();

	glRasterPos2f(-5.5, -4);
	for (i = 0;i<strlen(str33);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str33[i]); //0000
	glFlush();

	glRasterPos2f(1.5, -2);
	for (i = 0;i<strlen(str35);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str35[i]); //6BQ1
	glFlush();

	glRasterPos2f(1.5, -4);
	for (i = 0;i<strlen(str32);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str32[i]); //1Z8F
	glFlush();

	glRasterPos2f(7.5, -2);
	for (i = 0;i<strlen(str36);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str36[i]); //H62Y
	glFlush();

	glRasterPos2f(7.5, -4);
	for (i = 0;i<strlen(str35);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str35[i]); //6BQ1
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay

//right-side
	glBegin(GL_QUADS);
	glColor3f(1,0,0);//red
	glVertex2f(0, 0);
	glVertex2f(1.5, 1);
	glVertex2f(1.5, 4);
	glVertex2f(0, 3);
	glEnd();

	//cube border
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(-1.5, 4);
	glVertex2f(-1.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0, 3);
	glVertex2f(0, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(1.5, 4);
	glVertex2f(1.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-1.5, 1);
	glVertex2f(0, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0, 0);
	glVertex2f(1.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-1.5, 4);
	glVertex2f(0, 3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0, 3);
	glVertex2f(1.5, 4);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-1.5, 4);
	glVertex2f(0, 5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0, 5);
	glVertex2f(1.5, 4);
	glEnd();

	glFlush();

	glBegin(GL_LINES);
	glColor3f(1, 0, 0);
	glVertex2f(1.0, -1.75);
	glVertex2f(3.0, -1.75);
	glEnd();

	glRasterPos2f(1.5, -1.25);
	for (i = 0;i<strlen(str34);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str34[i]); //6BQ1
	glFlush();

	glColor3f(0, 0, 0);
	glRasterPos2f(-9, -6.5);
	for (i = 0;i<strlen(str44);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str44[i]); //Now lets say that you tamper with the 2nd block, this causes the hash of the block to change as well.
	glFlush();

	glFlush();for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay

	glColor3f(1, 0, 0);
	DrawEllipse(8, -4, 1, 0.75); //3rd block hash circle
	glFlush();for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay
	glRasterPos2f(-2, -1.5);
	for (i = 0;i<strlen(str37);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str37[i]);
	glFlush();

	glColor3f(0, 0, 0);
	glRasterPos2f(-17, -3.5);
	for (i = 0;i<strlen(str45);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str45[i]); //In turn, that will make block 3 and all following block invalid because they no longer store a valid hash of the previous block.
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 15000; j++); //delay

	glRasterPos2f(-17, -4.5);
	for (i = 0;i<strlen(str46);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str46[i]); //So changing a single block will make all following blocks invalid.
	glFlush();
	glRasterPos2f(-10, -5.5);
	for (i = 0;i<strlen(str28);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str28[i]); // ( Press `ENTER` to continue )
	glFlush();
	glutKeyboardFunc(myKey);
		for (int i = 0; i < 20000; i++) for (int j = 0; j < 20000; j++); //delay
}

void display5()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glClearColor(1, 1, 1, 1); //background color of the screen
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(0, 0, 0);
	glRasterPos2f(-8.5, 7);
	for (i = 0;i<strlen(str19);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str19[i]); //
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay

	glRasterPos2f(-2.25, 8);
	for (i = 0;i<strlen(str47);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str47[i]); //DISTRIBUTION OF A BLOCK
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay

//COMPUTER1
	//monitor
	glBegin(GL_QUADS);
	glColor3f(1, 0, 0);//red
	glVertex2f(-7, 3);
	glVertex2f(-5, 3);
	glVertex2f(-5, 5.5);
	glVertex2f(-7, 5.5);
	glEnd();

	//screen
	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);//black
	glVertex2f(-6.9, 3.2);
	glVertex2f(-5.1, 3.2);
	glVertex2f(-5.1, 5.3);
	glVertex2f(-6.9, 5.3);
	glEnd();

	//keyboard
	glBegin(GL_QUADS);
	glColor3f(1, 0, 0);//red
	glVertex2f(-7, 2.75);
	glVertex2f(-5, 2.75);
	glVertex2f(-4.5, 2);
	glVertex2f(-7.5, 2);
	glEnd();
	glFlush();

	//COMPUTER2
	//monitor
	glBegin(GL_QUADS);
	glColor3f(1, 0, 0);//red
	glVertex2f(5, 3);
	glVertex2f(7, 3);
	glVertex2f(7, 5.5);
	glVertex2f(5, 5.5);
	glEnd();

	//screen
	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);//black
	glVertex2f(5.1, 3.2);
	glVertex2f(6.9, 3.2);
	glVertex2f(6.9, 5.3);
	glVertex2f(5.1, 5.3);
	glEnd();

	//keyboard
	glBegin(GL_QUADS);
	glColor3f(1, 0, 0);//red
	glVertex2f(5, 2.75);
	glVertex2f(7, 2.75);
	glVertex2f(7.5, 2);
	glVertex2f(4.5, 2);
	glEnd();

	glFlush();
	for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay

//block1 of computer1
	 //left
	glBegin(GL_QUADS);
	glColor3f(0.196078, 0.6, 0.8);//Sky blue
	glVertex2f(-8, -0.5);
	glVertex2f(-7.5, -1);
	glVertex2f(-7.5, 0);
	glVertex2f(-8, 0.5);
	glEnd();

	//right
	glBegin(GL_QUADS);
	glColor3f(0.196078, 0.6, 0.8);//skyblue
	glVertex2f(-7.5, 0);
	glVertex2f(-7.5, -1);
	glVertex2f(-7, -0.5);
	glVertex2f(-7, 0.5);
	glEnd();

	//top
	glBegin(GL_QUADS);
	glColor3f(0.196078, 0.6, 0.8);//skyblue
	glVertex2f(-8, 0.5);
	glVertex2f(-7.5, 0);
	glVertex2f(-7, 0.5);
	glVertex2f(-7.5, 1);
	glEnd();
	glFlush();

	glColor3f(0, 0, 0);
	//border
	glBegin(GL_LINES);
	glVertex2f(-8, -0.5);
	glVertex2f(-7.5, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-7.5, -1);
	glVertex2f(-7.5, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-7.5, 0);
	glVertex2f(-8, 0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-8, 0.5);
	glVertex2f(-8, -0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-7.5, -1);
	glVertex2f(-7, -0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-7, -0.5);
	glVertex2f(-7, 0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-7, 0.5);
	glVertex2f(-7.5, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-7, 0.5);
	glVertex2f(-7.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-7.5, 1);
	glVertex2f(-8, 0.5);
	glEnd();
	glFlush();


//block1 of computer2
	//left
	glBegin(GL_QUADS);
	glColor3f(0.196078, 0.6, 0.8);//skyblue
	glVertex2f(3, -0.5);
	glVertex2f(3.5, -1);
	glVertex2f(3.5, 0);
	glVertex2f(3, 0.5);
	glEnd();

	//right
	glBegin(GL_QUADS);
	glColor3f(0.196078, 0.6, 0.8);//skyblue
	glVertex2f(3.5, 0);
	glVertex2f(3.5, -1);
	glVertex2f(4, -0.5);
	glVertex2f(4, 0.5);
	glEnd();

	//top
	glBegin(GL_QUADS);
	glColor3f(0.196078, 0.6, 0.8);//skyblue
	glVertex2f(3, 0.5);
	glVertex2f(3.5, 0);
	glVertex2f(4, 0.5);
	glVertex2f(3.5, 1);
	glEnd();
	glFlush();

	glColor3f(0, 0, 0);
	//border
	glBegin(GL_LINES);
	glVertex2f(3, -0.5);
	glVertex2f(3.5, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(3.5, -1);
	glVertex2f(3.5, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(3.5, 0);
	glVertex2f(3, 0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(3, 0.5);
	glVertex2f(3, -0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(3.5, -1);
	glVertex2f(4, -0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(4, -0.5);
	glVertex2f(4, 0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(4, 0.5);
	glVertex2f(3.5, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(4, 0.5);
	glVertex2f(3.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(3.5, 1);
	glVertex2f(3, 0.5);
	glEnd();
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay

//block2 of computer1
	//left
	glBegin(GL_QUADS);
	glColor3f(0.96, 0.80, 0.69);//flesh
	glVertex2f(-6, -0.5);
	glVertex2f(-5.5, -1);
	glVertex2f(-5.5, 0);
	glVertex2f(-6, 0.5);
	glEnd();

	//right
	glBegin(GL_QUADS);
	glColor3f(0.96, 0.80, 0.69);//flesh
	glVertex2f(-5.5, 0);
	glVertex2f(-5.5, -1);
	glVertex2f(-5, -0.5);
	glVertex2f(-5, 0.5);
	glEnd();

	//top
	glBegin(GL_QUADS);
	glColor3f(0.96, 0.80, 0.69);//flesh
	glVertex2f(-6, 0.5);
	glVertex2f(-5.5, 0);
	glVertex2f(-5, 0.5);
	glVertex2f(-5.5, 1);
	glEnd();
	glFlush();
	glColor3f(0, 0, 0);

	//border
	glBegin(GL_LINES);
	glVertex2f(-6, -0.5);
	glVertex2f(-5.5, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-5.5, -1);
	glVertex2f(-5.5, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-5.5, 0);
	glVertex2f(-6, 0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-6, 0.5);
	glVertex2f(-6, -0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-5.5, -1);
	glVertex2f(-5, -0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-5, -0.5);
	glVertex2f(-5, 0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-5, 0.5);
	glVertex2f(-5.5, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-5, 0.5);
	glVertex2f(-5.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-5.5, 1);
	glVertex2f(-6, 0.5);
	glEnd();
	glFlush();


//block2 of computer2
	//left
	glBegin(GL_QUADS);
	glColor3f(0.96, 0.80, 0.69);//flesh
	glVertex2f(5, -0.5);
	glVertex2f(5.5, -1);
	glVertex2f(5.5, 0);
	glVertex2f(5, 0.5);
	glEnd();

	//right
	glBegin(GL_QUADS);
	glColor3f(0.96, 0.80, 0.69);//flesh
	glVertex2f(5.5, 0);
	glVertex2f(5.5, -1);
	glVertex2f(6, -0.5);
	glVertex2f(6, 0.5);
	glEnd();

	//top
	glBegin(GL_QUADS);
	glColor3f(0.96, 0.80, 0.69);//flesh
	glVertex2f(5, 0.5);
	glVertex2f(5.5, 0);
	glVertex2f(6, 0.5);
	glVertex2f(5.5, 1);
	glEnd();
	glFlush();

	glColor3f(0, 0, 0);
	//border
	glBegin(GL_LINES);
	glVertex2f(5, -0.5);
	glVertex2f(5.5, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(5.5, -1);
	glVertex2f(5.5, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(5.5, 0);
	glVertex2f(5, 0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(5, 0.5);
	glVertex2f(5, -0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(5.5, -1);
	glVertex2f(6, -0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(6, -0.5);
	glVertex2f(6, 0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(6, 0.5);
	glVertex2f(5.5, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(6, 0.5);
	glVertex2f(5.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(5.5, 1);
	glVertex2f(5, 0.5);
	glEnd();
	glFlush();

	for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay

	glBegin(GL_LINES);
	glVertex2f(-7, 0);
	glVertex2f(-6, 0);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(4, 0);
	glVertex2f(5, 0);
	glEnd();

	glFlush();
	for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay


	//The BIG BLOCK
	//left
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);//green
	glVertex2f(-0.5, 3.5);
	glVertex2f(0.0, 3);
	glVertex2f(0.0, 4);
	glVertex2f(-0.5, 4.5);
	glEnd();

	//right
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);//green
	glVertex2f(0, 4);
	glVertex2f(0, 3);
	glVertex2f(0.5, 3.5);
	glVertex2f(0.5, 4.5);
	glEnd();

	//top
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);//green
	glVertex2f(-0.5, 4.5);
	glVertex2f(0, 4);
	glVertex2f(0.5, 4.5);
	glVertex2f(0, 5);
	glEnd();
	glFlush();


	glColor3f(0, 0, 0);
	//border
	glBegin(GL_LINES);
	glVertex2f(-0.5, 3.5);
	glVertex2f(0.0, 3.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0.0, 3.0);
	glVertex2f(0.0, 4.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0.0, 4.0);
	glVertex2f(-0.5, 4.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.5, 4.5);
	glVertex2f(-0.5, 3.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0.0, 3.0);
	glVertex2f(0.5, 3.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0.5, 3.5);
	glVertex2f(0.5, 4.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0.5, 4.5);
	glVertex2f(0.0, 4.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0.5, 4.5);
	glVertex2f(0.0, 5.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0.0, 5.0);
	glVertex2f(-0.5, 4.5);
	glEnd();
	glFlush();

    for (int i = 0; i < 20000; i++) for (int j = 0; j < 10000; j++); //delay

//block3 of computer1
	//left
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);//green
	glVertex2f(-4, -0.5);
	glVertex2f(-3.5, -1);
	glVertex2f(-3.5, 0);
	glVertex2f(-4, 0.5);
	glEnd();

	//right
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);//green
	glVertex2f(-3.5, 0);
	glVertex2f(-3.5, -1);
	glVertex2f(-3, -0.5);
	glVertex2f(-3, 0.5);
	glEnd();

	//top
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);//green
	glVertex2f(-4, 0.5);
	glVertex2f(-3.5, 0);
	glVertex2f(-3, 0.5);
	glVertex2f(-3.5, 1);
	glEnd();
	glFlush();

	glColor3f(0, 0, 0);
	//border
	glBegin(GL_LINES);
	glVertex2f(-4, -0.5);
	glVertex2f(-3.5, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-3.5, -1);
	glVertex2f(-3.5, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-3.5, 0);
	glVertex2f(-4, 0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-4, 0.5);
	glVertex2f(-4, -0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-3.5, -1);
	glVertex2f(-3, -0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-3, -0.5);
	glVertex2f(-3, 0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-3, 0.5);
	glVertex2f(-3.5, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-3, 0.5);
	glVertex2f(-3.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-3.5, 1);
	glVertex2f(-4, 0.5);
	glEnd();
	glFlush();

//block3 of computer2
	//left
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);//green
	glVertex2f(7, -0.5);
	glVertex2f(7.5, -1);
	glVertex2f(7.5, 0);
	glVertex2f(7, 0.5);
	glEnd();

	//right
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);//green
	glVertex2f(7.5, 0);
	glVertex2f(7.5, -1);
	glVertex2f(8, -0.5);
	glVertex2f(8, 0.5);
	glEnd();

	//top
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);//green
	glVertex2f(7, 0.5);
	glVertex2f(7.5, 0);
	glVertex2f(8, 0.5);
	glVertex2f(7.5, 1);
	glEnd();
	glFlush();

	glColor3f(0, 0, 0);
	//border
	glBegin(GL_LINES);
	glVertex2f(7, -0.5);
	glVertex2f(7.5, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7.5, -1);
	glVertex2f(7.5, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7.5, 0);
	glVertex2f(7, 0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7, 0.5);
	glVertex2f(7, -0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7.5, -1);
	glVertex2f(8, -0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(8, -0.5);
	glVertex2f(8, 0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(8, 0.5);
	glVertex2f(7.5, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(8, 0.5);
	glVertex2f(7.5, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7.5, 1);
	glVertex2f(7, 0.5);
	glEnd();
	glFlush();
}
int main(int argc, char **argv)
{
	int window;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Working of BlockChain");
	glutFullScreen();
	glutDisplayFunc(display1); //Call the First Page function
	glutMainLoop();
}
