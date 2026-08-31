#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int Mobile, Sem;
    string StudentName, EnrollNo, Branch;
    int Math, Phys, Comp;
    int Total;
    float Avg;

    cout << "************************************************** ";
    cout << setw(38) << "\n STUDENT RECORD MANAGEMENT SYSTEM";
    cout << "\n **************************************************";

    cout << "\n softer version : 1.1";
    cout << "\n Instutite : Charusat University ";
    cout << "\n academic year : 2026-2027 ";

    cout << "\n---------------------------------------------------";
    cout << "\n Student Registration ";
    cout << "\n---------------------------------------------------";

    cout << left << setw(32) << "\n Enter your Enrollment number " << ": ";
    cin >> EnrollNo;

    cout << left << setw(32) << "\n Enter Student name " << ": ";
    cin >> StudentName;
    cin.ignore();
    getline(cin, StudentName);

    cout << left << setw(32) << "\n Enter your Branch " << ": ";
    cin >> Branch;

    cout << left << setw(32) << "\n Enter your Semeter " << ": ";
    cin >> Sem;

    cout << left << setw(32) << "\n Enter your Mobile Number " << ": ";
    cin >> Mobile;

    cout << "\n---------------------------------------------------";
    cout << "\n Academic ";
    cout << "\n---------------------------------------------------";

M:
    // Take marks for all three subjects.
    cout << left << setw(32) << "\n Enter your Maths marks " << ": ";
    cin >> Math;

    cout << left << setw(32) << "\n Enter your Physics Marks" << ": ";
    cin >> Phys;

    cout << left << setw(32) << "\n Enter your Computer Marks" << ": ";
    cin >> Comp;

    // Validate the entered marks.
    if (Math < 0 && Math > 101 && Phys < 0 && Phys > 101 && Comp < 0 && Comp > 101)
    {
        cout << endl << "Error : you enter invalid marks";
        goto M;
    }

    // Calculate total and average marks.
    Total = Math + Phys + Comp;
    Avg = Total / 3;

    cout << "\n---------------------------------------------------";
    cout << "\n Academic Summary ";
    cout << "\n---------------------------------------------------" << endl;

    cout << left << setw(32) << "your total marks is  " << ": " << Total << endl;
    cout << left << setw(32) << "your Avrege is" << ": " << Avg << "%" << endl;

    if (Avg >= 40 && Math > 40 && Phys > 40 && Comp > 40)
    {
        cout << endl << "You are Pass";
    }
    else
    {
        cout << endl << "You are fail";
    }

    cout << "\n---------------------------------------------------";
    cout << "\nStudent Information";
    cout << "\n---------------------------------------------------" << endl << endl;

    cout << left << setw(32) << "your enrollment number is " << ": " << EnrollNo << endl;
    cout << left << setw(32) << "your name is " << ": " << StudentName << endl;
    cout << left << setw(32) << "your branch is " << ": " << Branch << endl;
    cout << left << setw(32) << "your semeter is " << ": " << Sem << endl;
    cout << left << setw(32) << "your mobile number is " << ": " << Mobile << endl;

    return 0;
}