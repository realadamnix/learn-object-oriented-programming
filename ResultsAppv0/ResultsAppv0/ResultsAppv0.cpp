// ResultsAppv0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "CStudent.h"

CStudent  list[40];
int numStudents = 0;

int ShowMenu(void);
void DoInitializeGroup(void);
void DoEnterElementMarks(void);
void DoDisplayPassList(void);



int main()
{
    
	ifstream infile("StudentInfo.dat");
	if (!infile)
	{
		cout << "database file StudentInfo.dat does not exist\n";
		cout << "You should use Add Students to add 4 students to the list \n\n";
	}
	else
	{
		string name;
		int caMark, feMark;

		infile >> numStudents;

		for (int i = 0; i < numStudents; i++)
		{
			infile >> name >> caMark >> feMark;
			CStudent student(name, caMark, feMark);
			list[i] = student;
		}
	}

	//DISPLAY USER INTERFACE
	int option;
	do
	{
		option = ShowMenu();
		switch (option)
		{
		case 0:
			DoInitializeGroup();
			break;
		case 1:
			DoEnterElementMarks();
			break;
		case 2:
			DoDisplayPassList();
			break;
		case 3:
			break;
		default:
			cout << "invalid option\n";
		}
	} while (option != 3);


	//SAVE list TO DATABASE FILE

	if (numStudents == 0)
		return 0;

	ofstream outfile("StudentInfo.dat");
	outfile << numStudents << endl;

	for (int i = 0; i < numStudents; i++)
	{
		outfile << list[i].GetName() << "  "
			<< list[i].GetAssessment() << "  "
			<< list[i].GetExam() << endl;
	}

	outfile.close();
	return 0;

}

int ShowMenu(void)
{
	int option;
	cout << "\t0.		Add Students\n";
	cout << "\t1.		Enter Element Marks\n";
	cout << "\t2.		Display Pass Names List\n";
	cout << "\t3.		Quit\n";
	cout << "\t\t\tOption ? ";
	cin >> option;
	return option;
}




//initialize the group of students by entering the name of each student.  
//This should cause a class CStudent object to be instantiated for each student and for the object to be inserted in the collection. 
//The callback function has a prototype void DoInitializeGroup(void).
void DoInitializeGroup(void)
{
	cout << "\nDo Initialise menu option\n\n";

}//end DoInitialiseGroup

//select an element (either assessment or exam) and then insert the marks for each student in the group.
//The callback function has a prototype void DoEnterElementMarks(void)
void DoEnterElementMarks(void)
{
	
	cout << "\nDo Enter Element Marks menu option\n\n";
	
}//end DoEnterElementMarks

//display a list of the names and grades of all the students who have passed the exam.
//The callback function has a prototype void DoDisplayPassList(void)
void DoDisplayPassList(void)
{
	cout << "\nDo Display Pass List menu option\n\n";
	
}//end DoDisplayPassList



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
