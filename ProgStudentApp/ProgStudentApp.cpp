

#include "CProgStudent.h" 

int main()
{

	CProgStudent list[3];

	string name, knumber;


	//Get names and work-numbers from the user
	//Then instantiate an object and insert in the list
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter The neame anf K-number: ";
		cin >> name >> workNo;
		CProgStudent student(name, workNo);
		list[i] = student;
	}




	//Display the details of each worker in the list
	cout << "\n\n\n";
	cout << "\t\tWorker Details\n";
	for (int i = 0; i < 3; i++)
	{
		list[i].ShowDetails();
	}

	int mark; 

	cout << "Enter Xmas mark for eatch student: ";
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter Xmas mark for " << list[i].GetName() << " : ";
		cin >> maark;
		list[i].SetChristmasMark(mark);

	}