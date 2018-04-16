#include <windows.h>
#include<GL/glut.h>
#include<GL/glu.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

char *str1 = "MANGALORE INSTITUTE OF TECHNOLOGY & ENGINEERING";
char *str2 = "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
char *str3 = "COMPUTER GRAPHICS AND VISUALIZATION LABORATORY";
char *str4 = "A MINI PROJECT";
char *str5 = "ON";
char *str6 = "WORKING OF BLOCKCHAIN";
char *str7 = "Submitted By:";
char *str8 = "ROSHAN RAJ - 4MT15CS117";
char *str9 = "SURESH PRABHU - 4MT15CS107";
char *str10 = "Submitted to:";
char *str11 = "MR. SUNIL KUMAR S";
char *str12 = "MR. PRASHANTH B.S";
char *str13 = "********************************************* MENU *********************************************";
char *str14 = "Press (1) : Create a Block";
char *str15 = "Press (2) : Tamper with a Block";
char *str16 = "Press (3) : Distribution of a Block";
char *str17 = "Press (4) : Display a Block Chain";
char *str18 = "Press 'Esc' to Exit.";
char *str19 = "************************************************************************************************";
char *str20 = "Thank You!";
char *str21 = "CREATION OF A BLOCK";
char *str22 = "Cryptographic Hash of the previous block";
char *str23 = "A Time stamp";
char *str24 = "Transaction Data";
char *str25 = "A block records some or all of the most recent Bitcoin transactions that have not yet entered any prior blocks. Thus a block";
char *str26 = "is like a page of a ledger or record book. Each time a block is 'completed', it gives way to the next block in the blockchain.";
char *str27 = "------------->";
char *str28 = "( Press (0) to go back to the Menu )";
void *font = GLUT_BITMAP_HELVETICA_18;
void myKey(unsigned char key, int x, int y);

void display1();    //Main Screen : DETAILS
void display2();
void display3();

int i;

void delay() {
	for (int i = 0;i<100000;i++)for (int j = 0;j<10000;j++) {}
}

//Main Screen : DETAILS
void display1()
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
	glutKeyboardFunc(myKey);
	glFlush();

}
void display2()
{
	glClearColor(1, 1, 1, 0); //background color
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glColor3f(0, 0, 0); // foreground color
	glRasterPos2f(-8.5, 7);
	for (i = 0;i<strlen(str13);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str13[i]); //
	glRasterPos2f(-3, 4);
	for (i = 0;i<strlen(str14);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str14[i]); //
	glRasterPos2f(-3, 2);
	for (i = 0;i<strlen(str15);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str15[i]); //
	glRasterPos2f(-3, 0);
	for (i = 0;i<strlen(str16);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str16[i]); //
	glRasterPos2f(-3, -2);
	for (i = 0;i<strlen(str17);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str17[i]); //
	glRasterPos2f(-3, -4);
	for (i = 0;i<strlen(str18);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str18[i]); //
	glRasterPos2f(-8.5, -7);
	for (i = 0;i<strlen(str19);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str19[i]); //
	glutKeyboardFunc(myKey); //take user input for the menu
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
	if (key == (char)27)
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


// option 1 screen
void display3() {
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
	//back
	glBegin(GL_LINES);
	glVertex2f(3, -1);
	glVertex2f(7, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7, -1);
	glVertex2f(7, 3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7, 3);
	glVertex2f(3, 3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(3, 3);
	glVertex2f(3, -1);
	glEnd();

	//left
	glBegin(GL_LINES);
	glVertex2f(2, -2);
	glVertex2f(3, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(3, 3);
	glVertex2f(2, 2);
	glEnd();

	//right
	glBegin(GL_LINES);
	glVertex2f(6, -2);
	glVertex2f(7, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7, 3);
	glVertex2f(6, 2);
	glEnd();

	//front
	glBegin(GL_LINES);
	glVertex2f(2, -2);
	glVertex2f(6, -2);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(6, -2);
	glVertex2f(6, 2);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(6, 2);
	glVertex2f(2, 2);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(2, 2);
	glVertex2f(2, -2);
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

//hollow cube display begin
	//back
	glBegin(GL_QUADS);
	glColor3f(0,1,0);
	glVertex2f(3, -1);
	glVertex2f(7, -1);
	glVertex2f(7, 3);
	glVertex2f(3, 3);
	glEnd();

	//left
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex2f(2, -2);
	glVertex2f(3, -1);
	glVertex2f(3, 3);
	glVertex2f(2, 2);
	glEnd();

	//right
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex2f(6, -2);
	glVertex2f(7, -1);
	glVertex2f(7, 3);
	glVertex2f(6, 2);
	glEnd();

	//top
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex2f(6, 2);
	glVertex2f(7, 3);
	glVertex2f(3, 3);
	glVertex2f(2, 2);
	glEnd();

	//bottom
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex2f(6, -2);
	glVertex2f(7, -1);
	glVertex2f(3, -1);
	glVertex2f(2, -2);
	glEnd();

	//front
	glBegin(GL_QUADS);
	glColor3f(0, 1, 0);
	glVertex2f(2, -2);
	glVertex2f(6, -2);
	glVertex2f(6, 2);
	glVertex2f(2, 2);
	glEnd();

//hollow cube display end
//hollow cube display begin
//back
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(3, -1);
	glVertex2f(7, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7, -1);
	glVertex2f(7, 3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7, 3);
	glVertex2f(3, 3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(3, 3);
	glVertex2f(3, -1);
	glEnd();

	//left
	glBegin(GL_LINES);
	glVertex2f(2, -2);
	glVertex2f(3, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(3, 3);
	glVertex2f(2, 2);
	glEnd();

	//right
	glBegin(GL_LINES);
	glVertex2f(6, -2);
	glVertex2f(7, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7, 3);
	glVertex2f(6, 2);
	glEnd();

	//front
	glBegin(GL_LINES);
	glVertex2f(2, -2);
	glVertex2f(6, -2);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(6, -2);
	glVertex2f(6, 2);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(6, 2);
	glVertex2f(2, 2);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(2, 2);
	glVertex2f(2, -2);
	glEnd();
	glFlush();
//hollow cube display end

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
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str28[i]); //
	glFlush();

	for (int i = 0; i < 50000; i++) for (int j = 0; j < 50000; j++); //delay
	display2(); //goes back to the menu after some time
}


int main(int argc, char **argv)
{
	int window;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(70, 100);
	glutCreateWindow("Working of BlockChain");
	glutFullScreen();
	glutDisplayFunc(display1); //call first page function
	glutMainLoop();
}
