#include "CProgStudent.h"
//constructor function definitions
CProgStudent::CProgStudent(void)
{
    m_Name = "";
    m_KNum = "";
    m_ChristmasMark = 0;
    m_LLAttendanceMark = 0;
    m_Proj1Mark = 0;
    m_Proj2Mark = 0;
    m_MayMark = 0;
}

CProgStudent::CProgStudent(string name, string kNumber)
{
    m_Name = name;
    m_KNum = kNumber;
    m_ChristmasMark = 0;
    m_LLAttendanceMark = 0;
    m_Proj1Mark = 0;
    m_Proj2Mark = 0;
    m_MayMark = 0;
}

//regular function definitions

                                   
void CProgStudent::SetMayExamMark(int mark)
{
    m_MayMark = mark;
}


void CProgStudent::SetChristmasMark(int mark)
{
    m_ChristmasMark = mark;
}


void CProgStudent::SetProj1Mark(int mark)
{
    m_Proj1Mark = mark;
}


void CProgStudent::SetProj2Mark(int mark)
{
    m_Proj2Mark = mark;
}


void CProgStudent::SetLLAttendanceMark(int mark)
{
    m_LLAttendanceMark = mark;
}


string CProgStudent::GetName(void)
{
    return m_Name;
}


void CProgStudent::ShowDetails(void)
{
    cout << "Name:" << m_Name << endl;
    cout << "KNum: " << m_KNum << endl;
    cout << "Xmas mark: " << m_ChristmasMark << endl;
    cout << "LL mark: " << m_LLAttendanceMark << endl;
    cout << "Proj1 mark: " << m_Proj1Mark << endl;
    cout << "Proj2 mark: " << m_Proj2Mark << endl;
    cout << "May mark: " << m_MayMark << endl;
}


int CProgStudent::GetTotalMark(void)
{
    int total;
    total = m_ChristmasMark + m_LLAttendanceMark + m_Proj1Mark + m_Proj2Mark + m_MayMark;
    return total;
}



string  CProgStudent::GetKnum(void)
{
    // TODO: Add your implementation code here.
    return m_KNum; 
}


<<<<<<< HEAD
int CProgStudent::GetLLAtendenceMaek(void)
=======

    int CProgStudent::GetProj2Mark(void)
>>>>>>> 3aa741226c8f28063aa392ba6806bdd8db753023
{
    // TODO: Add your implementation code here.
    return 0;
}


<<<<<<< HEAD
int CProgStudent::GetProJ1mark(void)
{
    // TODO: Add your implementation code here.
    return 0;
}


int CProgStudent::GetProJ2mark(void)
{
    // TODO: Add your implementation code here.
    return 0;
}


int CProgStudent::GetMayMark(void)
{
    // TODO: Add your implementation code here.
    return 0;
}


int CProgStudent::GetChristmasMark(void)
{
    // TODO: Add your implementation code here.
    return 0;
}



bool CProgStudent::HasKnumber(void)
{
    // TODO: Add your implementation code here.
    return false;
}


bool CProgStudent::IsAfail(void)
{
    // TODO: Add your implementation code here.
    return false;
}


string CProgStudent::Getknumber(void)
{
    // TODO: Add your implementation code here.
    return 0;
}
=======
int CProgStudent::GetProj1Mark(void)
{
    return m_ChristmasMark;
}


int CProgStudent::IsAFaill(void )
{
        // TODO: Add your implementation code here.
        if (GetTotalMark() < 40)
        {
            return true;
        }
        else
        {
            return false;
        }
}

    bool CProgStudent::HasKnum(string knumber)
    {

        if (m_KNum == knumber)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

>>>>>>> 3aa741226c8f28063aa392ba6806bdd8db753023
