// ProgStudentsApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "CProgStudent.h"

int main()
{
	CProgStudent list[3];
	string name, kNumber;
	int mark;

	//Get names and k-numbers from the user
	//Then instantiate an object and insert in the list
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter student name and k-number : ";
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

	//allocate Xmas marks
	cout << "Enter Xmas mark for each student:\n\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter Xmas mark for: "
			<< list[i].GetName() << " : ";
		cin >> mark;
		list[i].SetChristmasMark(mark);

	}

	//allocate LL marks
	cout << "Enter LL mark for each student:\n\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter LL mark for: "
			<< list[i].GetName() << " : ";
		cin >> mark;
		list[i].SetLLAttendanceMark(mark);

	}

	//allocate Proj1 marks
	cout << "Enter proj1 mark for each student:\n\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter Proj1 mark for: "
			<< list[i].GetName() << " : ";
		cin >> mark;
		list[i].SetProj1Mark(mark);

	}

	//allocate Proj2 marks
	cout << "Enter proj2 mark for each student:\n\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter Proj2 mark for: "
			<< list[i].GetName() << " : ";
		cin >> mark;
		list[i].SetProj2Mark(mark);

	}

	//allocate May marks
	cout << "Enter May mark for each student:\n\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter May mark for: "
			<< list[i].GetName() << " : ";
		cin >> mark;
		list[i].SetMayExamMark(mark);

	}

	//Display the details of each student in the list
	cout << "\n\n\n";
	cout << "\t\tStudent Details\n";
	for (int i = 0; i < 3; i++)
	{
		list[i].ShowDetails();
	}

	


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
