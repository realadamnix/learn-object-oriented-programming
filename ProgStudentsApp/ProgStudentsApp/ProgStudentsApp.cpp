// ProgStudentsApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "CProgStudent.h"

int main()
{
	CProgStudent list[3];
	string name, kNumber;
	int mark;

	//Get names and work-numbers from the user
	//Then instantiate an object and insert in the list
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter a student name and K-number : ";
		cin >> name >> kNumber;
		CProgStudent student(name, kNumber);
		list[i] = student;
	}

	//Display the details of each student in the list
	cout << "\n\n\n";
	cout << "\t\tStudent Details\n";
	for (int i = 0; i < 3; i++)
	{
		list[i].ShowDetails();
	}


	//allocate marks for Xmas
	cout << "Enter marks for Christmas\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter mark for "
			<< list[i].GetName() << " : ";
		cin >> mark;
		list[i].SetChristmasMark(mark);

	}


	//allocate marks for LL Attendance
	cout << "Enter marks for LL Attendance\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter mark for "
			<< list[i].GetName() << " : ";
		cin >> mark;
		list[i].SetLLAttendanceMark(mark);

	}

	//allocate marks for Proj1 Attendance
	cout << "Enter marks for Proj1\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter mark for "
			<< list[i].GetName() << " : ";
		cin >> mark;
		list[i].SetProj1Mark(mark);

	}

	//allocate marks for Proj2 Attendance
	cout << "Enter marks for Proj2\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter mark for "
			<< list[i].GetName() << " : ";
		cin >> mark;
		list[i].SetProj2Mark(mark);

	}

	//allocate marks for May Exam
	cout << "Enter marks for May Exam\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter mark for "
			<< list[i].GetName() << " : ";
		cin >> mark;
		list[i].SetMayExamMark(mark);

	}

	//re-display the objects to screen
	//Display the details of each student in the list
	cout << "\n\n\n";
	cout << "\t\tStudent Details\n";
	for (int i = 0; i < 3; i++)
	{
		list[i].ShowDetails();
	}

	//display the total mark for each student
	cout << "Student Totals\n";
	for (int i = 0; i < 3; i++)
	{
		cout << list[i].GetName() << " : "
			<< list[i].GetTotalMark() << endl;

	}

	//part a) - class creation part 3
	cout << "\n\n\n";
	cout << "Check to see whether a particular student has failed\n";
	cout << "Enter a student name: ";
	cin >> name;

	for (int i = 0; i < 3; i++)
	{
		if (list[i].HasName(name)) //found the object
		{
			//check has that student failed - yes/no?
			if (list[i].IsAFail() == true)
				cout << "Student " << list[i].GetName()
				<< " has failed: "
				<< "Total Mark is : "
				<< list[i].GetTotalMark() << endl;

		}
	}

	//part b) - class creation part 3
	//Output the pass list of students
	cout << "\n\n\n";
	cout << "Pass List of students is as follows:\n ";
	cout << "Student Name\t\t" << "Student Knumber\t\t" << "Pass Mark" << endl;

	for (int i = 0; i < 3; i++)
	{
		if (list[i].IsAFail() == false)
			//student has passed
			cout << list[i].GetName()
			<< "\t\t\t" << list[i].GetKNumber()
			<< "\t\t\t" << list[i].GetTotalMark()
			<< endl;
	}

	//part c) - class creation part 3
	//Check subcomponent marks for a particular student
	cout << "\n\n\n";
	cout << "Check subcomponent marks for a particular student\n";
	cout << "Enter a student name: ";
	cin >> name;

	for (int i = 0; i < 3; i++)
	{
		if (list[i].HasName(name) == true)
		{//output subcomponent marks
			cout << "Student Name: "
				<< list[i].GetName() << endl;
			cout << "Transcript marks are as follows: " << endl;
			cout << "Christmas mark: "
				<< list[i].GetChristmasMark() << endl;
			cout << "LL Attendance mark: "
				<< list[i].GetLLAttendanceMark() << endl;
			cout << "Proj1 mark: "
				<< list[i].GetProj1Mark() << endl;
			cout << "Proj2 mark: "
				<< list[i].GetProj2Mark() << endl;
			cout << "May mark: "
				<< list[i].GetMayMark() << endl;


		}

	}

}//end main

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
