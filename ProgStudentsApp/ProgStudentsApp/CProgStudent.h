using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
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
	//constructor function prototypes
	CProgStudent(void);
	CProgStudent(string name, string kNumber);


	void SetMayExamMark(int mark);
	void SetChristmasMark(int mark);
	void SetProj1Mark(int mark);
	void SetProj2Mark(int mark);
	void SetLLAttendanceMark(int mark);

	string GetName(void);
	void ShowDetails(void);
	int GetTotalMark(void);
<<<<<<< HEAD
	bool Knum();

	

	int GetLLAtendenceMaek(void);
	int GetProJ1mark(void);
	int GetProJ2mark(void);
	int GetMayMark(void);
	int GetChristmasMark(void);
	bool HasKnumber(void);
	bool IsAfail(void);
	string Getknumber(void);
};
=======
>>>>>>> 3aa741226c8f28063aa392ba6806bdd8db753023

	string GetKnum(void);


	int GetProj2Mark();

	int GetProj1Mark();
	int IsAFaill();
	bool HasKnum(string Knumber);
};
