// Lab 1.cpp : Defines the entry point for the console application.



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
	CCourse ELEX4618;
	char inputSelect;

	do {
		ELEX4618.printMenu();
		
		cin >> inputSelect;

		switch (inputSelect)
		{
		case 'A':
		case 'a': {
			ELEX4618.addStudent();
			break;
		}
		case 'E':
		case 'e': {
			ELEX4618.editStudent();
			break;
		}
		case 'P':
		case 'p': {
			ELEX4618.printStudent();
			break;
		}
		case 'D':
		case 'd': {
			ELEX4618.deleteStudent();
			break;
		}

		case 'L':
		case 'l': {
			ELEX4618.listStudents();
			break;
		}

		case 'Q':
		case 'q':
			cout << "Quiting" << endl;
			exit(0);
			break;
		default:
			cout << "Command not found\n";
			//cin >> inputSelect;
			inputSelect = 0;
			break;
			//continue;
		}
		if (inputSelect != 0) {
			cout << "Back to Main Menu?(y/n): ";
			cin >> inputSelect;
		} 
		

	} while (inputSelect == 'Y' || inputSelect == 'y'|| inputSelect == 0);
		
	return 0;

}

