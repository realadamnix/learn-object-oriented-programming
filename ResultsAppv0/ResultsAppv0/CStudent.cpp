#include "CStudent.h"

CStudent::CStudent(void)
	: m_Name("")
	, m_Assessment(0)
	, m_Exam(0)
{
}

CStudent::CStudent(string name)
	: m_Name(name)
	, m_Assessment(0)
	, m_Exam(0)
{
}

CStudent::CStudent(string name, int assessment, int exam)
	: m_Name(name)
	, m_Assessment(assessment)
	, m_Exam(exam)
{
}

void CStudent::SetAssessment(int mark)
{
	m_Assessment = mark;
}

void CStudent::SetExam(int mark)
{
	m_Exam = mark;
}

string CStudent::GetName(void)
{
	return m_Name;
}

int CStudent::GetAssessment(void)
{
	return m_Assessment;
}

int CStudent::GetExam(void)
{
	return m_Exam;
}

bool CStudent::HasName(string name)
{
	if (m_Name == name)
		return true;
	else
		return false;
}



bool CStudent::IsAPass(void)
{
	
	int total = m_Assessment + m_Exam;

	if (total >= 15 && m_exam >= 15)
	{

		return true;
	
	}
	else
		return false;
}


string CStudent::GetGrade(void)
{
	return " ";

}


