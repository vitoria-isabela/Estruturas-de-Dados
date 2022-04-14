#include <string>
#include <iostream>

using namespace std;

//PA - Programa de implementa��o (o que) 

// Defini��o da classe GradeBook. Esse arquivo apresenta a interface p�blica de
// GradeBook sem revelar as implementa��es de fun��es-membro de GradeBook
// que s�o definidas em GradeBook.cpp.

class GradeBook
{
public:
	GradeBook(string);
	~GradeBook();
	void setCourseName(string);
	string getCourseName();
	void displayMessage();
private:
	string courseName;

};
