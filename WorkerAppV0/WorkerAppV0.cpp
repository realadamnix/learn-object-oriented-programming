// WorkerAppv0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "CWorker.h"

int main()
{
    //create an array of worker objects
    CWorker list[3];
    string name;
    int workNo;
    char response;
    double increase;

    //prompt the user to enter worker name
    //and worker number
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter a worker name and worker number: ";
        cin >> name >> workNo;
        CWorker worker(name, workNo);
        list[i] = worker;
    }//end for

    //display the content of each object to screen
    for (int i = 0; i < 3; i++)
    {
        list[i].Display();
    }

    //Enter the hrs worked + hrly rate for each
    //worker in the array list
    int hrsWorked;
    double rate;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter hrs worked + hrly rate for each worker: ";
        cin >> hrsWorked >> rate;
        list[i].SetHoursWorked(hrsWorked);
        list[i].SetHourlyRate(rate);
    }//end for

    //display the content of each object to screen
    for (int i = 0; i < 3; i++)
    {
        list[i].Display();
    }

    //output the wage for each worker
    for (int i = 0; i < 3; i++)
    {
        cout << "Wage due for worker " << i + 1
            << ": " << list[i].GetWage() << endl;

    }//end for

    //on entry of workNum; output the matching
    //worker details
    cout << "Worker Details: " << endl;
    cout << "Enter worker number: ";
    cin >> workNo;
    //search the array list for the matching object
    for (int i = 0; i < 3; i++)
    {
        if (list[i].HasWorkNum(workNo) == true)
        {
            //object found so output matching data
            cout << "Worker Name: "
                << list[i].GetName() << endl;
            cout << "Worker Number: "
                << list[i].GetWorkNum() << endl;
            cout << "Hrly Rate: "
                << list[i].GetHourlyRate() << endl;
            cout << "Hrs Worked: "
                << list[i].GetHoursWorked() << endl;

        }


    }

    //check to see you what to increase hrs worked for a worker

    cout << "Worker Details: " << endl;
    cout << "Enter worker number: ";
    cin >> workNo;

    for (int i = 0; i < 3; i++)
    {
        if (list[i].HasWorkNum(workNo) == true)
        {
            //object found so output matching data
            cout << "Worker Name: "
                << list[i].GetName() << endl;
            cout << "Worker Number: "
                << list[i].GetWorkNum() << endl;
            cout << "Hrly Rate: "
                << list[i].GetHourlyRate() << endl;
            cout << "Hrs Worked: "
                << list[i].GetHoursWorked() << endl;

            cout << "Do you wish to offer the worker a precentage increase in pay ? (Y/N)";
            cin >> response;

            if (response == 'Y' || response == 'y')
            {
                cout << "Enter the percentage increase: ";
                cin >> increase;
                list[i].IncreaseRate(increase);
                cout << "New Hourly Rate: " << list[i].GetHourlyRate() << list[i].GetHourlyRate() << endl;
            }
                 else if (response == 'N' || response == 'n')
                 {
                      cout << "No increase in pay for worker " << list[i].GetName() << endl;

                 }

            }

        }

    }//end main
