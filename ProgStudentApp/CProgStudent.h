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
};
