#include "CProgStudent.h"

#include <iostream>
#include "CProgStudent.h"

void DisplayMenu()
{
    cout << "Menu:\n";
    cout << "1. Enter student details\n";
    cout << "2. Enter marks for Christmas\n";
    cout << "3. Enter marks for LL Attendance\n";
    cout << "4. Enter marks for Proj1\n";
    cout << "5. Enter marks for Proj2\n";
    cout << "6. Enter marks for May Exam\n";
    cout << "7. Display student details\n";
    cout << "8. Display total marks for each student\n";
    cout << "9. Check if a student has failed\n";
    cout << "10. Display pass list of students\n";
    cout << "11. Check subcomponent marks for a particular student\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
}

int main()
{
    CProgStudent list[3];
    string name, kNumber;
    int mark;
    int choice;

    do
    {
        DisplayMenu();
        cin >> choice;

        switch (choice)
        {
            case 1:
                for (int i = 0; i < 3; i++)
                {
                    cout << "Enter a student name and K-number : ";
                    cin >> name >> kNumber;
                    CProgStudent student(name, kNumber);
                    list[i] = student;
                }
                break;

            case 2:
                cout << "Enter marks for Christmas\n";
                for (int i = 0; i < 3; i++)
                {
                    cout << "Enter mark for " << list[i].GetName() << " : ";
                    cin >> mark;
                    list[i].SetChristmasMark(mark);
                }
                break;

            case 3:
                cout << "Enter marks for LL Attendance\n";
                for (int i = 0; i < 3; i++)
                {
                    cout << "Enter mark for " << list[i].GetName() << " : ";
                    cin >> mark;
                    list[i].SetLLAttendanceMark(mark);
                }
                break;

            case 4:
                cout << "Enter marks for Proj1\n";
                for (int i = 0; i < 3; i++)
                {
                    cout << "Enter mark for " << list[i].GetName() << " : ";
                    cin >> mark;
                    list[i].SetProj1Mark(mark);
                }
                break;

            case 5:
                cout << "Enter marks for Proj2\n";
                for (int i = 0; i < 3; i++)
                {
                    cout << "Enter mark for " << list[i].GetName() << " : ";
                    cin >> mark;
                    list[i].SetProj2Mark(mark);
                }
                break;

            case 6:
                cout << "Enter marks for May Exam\n";
                for (int i = 0; i < 3; i++)
                {
                    cout << "Enter mark for " << list[i].GetName() << " : ";
                    cin >> mark;
                    list[i].SetMayExamMark(mark);
                }
                break;

            case 7:
                cout << "\n\n\n";
                cout << "\t\tStudent Details\n";
                for (int i = 0; i < 3; i++)
                {
                    list[i].ShowDetails();
                }
                break;

            case 8:
                cout << "Student Totals\n";
                for (int i = 0; i < 3; i++)
                {
                    cout << list[i].GetName() << " : " << list[i].GetTotalMark() << endl;
                }
                break;

            case 9:
                cout << "\n\n\n";
                cout << "Check to see whether a particular student has failed\n";
                cout << "Enter a student name: ";
                cin >> name;

                for (int i = 0; i < 3; i++)
                {
                    if (list[i].HasName(name))
                    {
                        if (list[i].IsAFail())
                        {
                            cout << "Student " << list[i].GetName() << " has failed: Total Mark is : " << list[i].GetTotalMark() << endl;
                        }
                    }
                }
                break;

            case 10:
                cout << "\n\n\n";
                cout << "Pass List of students is as follows:\n ";
                cout << "Student Name\t\t" << "Student Knumber\t\t" << "Pass Mark" << endl;

                for (int i = 0; i < 3; i++)
                {
                    if (!list[i].IsAFail())
                    {
                        cout << list[i].GetName() << "\t\t\t" << list[i].GetKNumber() << "\t\t\t" << list[i].GetTotalMark() << endl;
                    }
                }
                break;

            case 11:
                cout << "\n\n\n";
                cout << "Check subcomponent marks for a particular student\n";
                cout << "Enter a student name: ";
                cin >> name;

                for (int i = 0; i < 3; i++)
                {
                    if (list[i].HasName(name))
                    {
                        cout << "Student Name: " << list[i].GetName() << endl;
                        cout << "Transcript marks are as follows: " << endl;
                        cout << "Christmas mark: " << list[i].GetChristmasMark() << endl;
                        cout << "LL Attendance mark: " << list[i].GetLLAttendanceMark() << endl;
                        cout << "Proj1 mark: " << list[i].GetProj1Mark() << endl;
                        cout << "Proj2 mark: " << list[i].GetProj2Mark() << endl;
                        cout << "May mark: " << list[i].GetMayMark() << endl;
                    }
                }
                break;

            case 0:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }

        cout << endl;

    } while (choice != 0);

    return 0;
}
