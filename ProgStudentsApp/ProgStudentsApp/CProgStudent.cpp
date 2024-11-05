#include "CProgStudent.h"

//constructor function definitions
CProgStudent::CProgStudent(void)
{
    m_KNum = "";
    m_Name = "";
    m_ChristmasMark = 0;
    m_LLAttendanceMark = 0;
    m_Proj1Mark = 0;
    m_Proj2Mark = 0;
    m_MayMark = 0;
}

CProgStudent::CProgStudent(string name, string kNumber)
{
    m_KNum = kNumber;
    m_Name = name;
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
    cout << m_Name << " "
        << m_KNum << " "
        << m_ChristmasMark << " "
        << m_LLAttendanceMark << " "
        << m_Proj1Mark << " "
        << m_Proj2Mark << " "
        << m_MayMark << " "
        << endl;
}

int CProgStudent::GetTotalMark(void)
{
    int total;
    total = m_ChristmasMark + m_LLAttendanceMark + m_MayMark + m_Proj1Mark + m_Proj2Mark;
    return total;
}


bool CProgStudent::IsAFail(void)
{
    if (GetTotalMark() < 40)
        return true;
    else
        return false;
}


bool CProgStudent::HasName(string searchName)
{
    if (searchName == m_Name)
        return true;
    else
        return false;
}


string CProgStudent::GetKNumber(void)
{
    return m_KNum;
}


int CProgStudent::GetChristmasMark(void)
{
    return m_ChristmasMark;
}


int CProgStudent::GetLLAttendanceMark(void)
{
    return m_LLAttendanceMark;
}


int CProgStudent::GetProj1Mark(void)
{
    return m_Proj1Mark;
}


int CProgStudent::GetProj2Mark(void)
{
    return m_Proj2Mark;
}


int CProgStudent::GetMayMark(void)
{
    return m_MayMark;
}




double CProgStudent::BestStudentGrade()
{
    // TODO: Add your implementation code here.
    return 0.0;
}
