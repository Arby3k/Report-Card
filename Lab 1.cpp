// Lab 1.cpp : Defines the entry point for the console application.
//
//ADDING COMMENTS MORE COMMENTS AND MORE
#include "stdafx.h"
#include "CStudent.h"
#include "CCourse.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <regex>
using namespace std;

//Functions
/*
void printMenu();
void addStudent();
void editStudent();
void printStudent();
void deleteStudent();
void listStudents();
*/



int main()
{
	CCourse lol;
	char inputSelect;

	do {
		lol.printMenu();
		
		cin >> inputSelect;

		switch (inputSelect)
		{
		case 'A':
		case 'a': {
			lol.addStudent();
			break;
		}
		case 'E':
		case 'e': {
			lol.editStudent();
			break;
		}
		case 'P':
		case 'p': {
			lol.printStudent();
			break;
		}
		case 'D':
		case 'd': {
			lol.deleteStudent();
			break;
		}

		case 'L':
		case 'l': {
			lol.listStudents();
			break;
		}

		case 'Q':
		case 'q':
			cout << "Quiting" << endl;
			exit(0);
			break;
		default:
			cout << "Command not found\nCommand: ";
			cin >> inputSelect;
			break;
		}
		cout << "Back to Main Menu?(y/n): ";
		cin >> inputSelect;

	} while (inputSelect == 'Y' || inputSelect == 'y');
		
	return 0;

}

