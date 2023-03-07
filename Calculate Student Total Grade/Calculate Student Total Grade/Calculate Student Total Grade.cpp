#include<iostream>
#include<string>
using namespace std;
struct Date
{
	int Day;
	int Month;
	int Year;
};
struct Student
{
	string Name;
	int ID;
	int Grades[6];
	int Total = 0;
	Date DateOfBirth;
} Students[100];
void inputStudent(int n)
{
	for (int j = 0; j < n; j++)
	{
		cout << "Enter student ID of student # " << j + 1 << " : ";
		cin >> Students[j].ID;

		cout << "Enter student Name of student # " << j + 1 << " : ";
		cin >> Students[j].Name;

		cout << "Enter Date of Birth of student # " << j + 1 << " : ";
		cin >> Students[j].DateOfBirth.Day >> Students[j].DateOfBirth.Month >>Students[j].DateOfBirth.Year;

		cout << "Enter 6 grades for the student # " << j + 1 << " : ";
		for (int i = 0; i < 6; i++)
		{
			cin >> Students[j].Grades[i];
		}
	}
}
void calcTotal(int n)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < 6; i++)
		{
			Students[j].Total += Students[j].Grades[i];
		}
	}

}
void displayStudent(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "The Total Grade for the student ID " << Students[i].ID << " is " << Students[i].Total << endl;
	}

}
int main()
{
	int n;
	cout << "Enter how many students you will enter : ";
	cin >> n;
	inputStudent(n);
	calcTotal(n);
	displayStudent(n);
}