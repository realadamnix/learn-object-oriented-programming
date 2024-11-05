#pragma once
using namespace std;
#include <iomanip>
#include <string>
#include <iostream>
class CProgStudent
{
private:
	string m_Name;
	string m_KNum;
	int m_ChristmasMark;
	int m_LLAttendanceMark;
	int m_Proj1Mark;
	int m_Proj2Mark;
	int m_MayMark;

public:
	//constructor functions
	CProgStudent(void);//standard constructor function
	CProgStudent(string name, string kNumber);

	//regular functions
	void SetMayExamMark(int mark);
	void SetChristmasMark(int mark);
	void SetProj1Mark(int mark);
	void SetProj2Mark(int mark);
	void SetLLAttendanceMark(int mark);
	string GetName(void);
	void ShowDetails(void);
	int GetTotalMark(void);
	bool IsAFail(void);
	bool HasName(string searchName);
	string GetKNumber(void);
	int GetChristmasMark(void);
	int GetLLAttendanceMark(void);
	int GetProj1Mark(void);
	int GetProj2Mark(void);
	int GetMayMark(void);
};

