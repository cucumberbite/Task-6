#include <iostream>
#include <fstream>
using namespace std;

class Worker
{
private:
	char Name;
	int Exp, Hours, H_Wage;
	double Salary, Premy;
public:
	void setInfo() 
	{
		cout << "Enter worker's name: " << endl;
		cin >> Name;
		cout << "Enter worker's experience: " << endl;
		cin >> Exp;
		cout << "Enter worker's hourly wag: " << endl;
		cin >> H_Wage;
		cout << "Enter hours worked: " << endl;
		cin >> Hours;
		Salary = Hours * H_Wage;
		if (Exp < 1) Premy = 0;
		else if (Exp >= 1 && Exp <= 3) Premy = Salary * 0.05;
		else if (Exp > 3 && Exp <= 5) Premy = Salary * 0.08;
		else if (Exp > 5) Premy = Salary * 0.15;
	}
	void getInfo()
	{
		cout << Name << endl <<
			"Experience is " << Exp << endl <<
			"Hourly wage is " << H_Wage << endl <<
			"Hours worked " << Hours << endl <<
			"Salary is " << Salary << endl <<
			"Premy is " << Premy << endl;
	}
}

int main()
{
	Worker objWorker;
	setlocale(0, "");
	objWorker.setInfo();
	ofstream fout("worker.txt");
	objWorker.getInfo();
	fout.close();
	return 0;
}