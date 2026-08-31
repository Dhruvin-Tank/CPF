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
    if (Math < 0 || Math > 100 || Phys < 0 || Phys > 100 || Comp < 0 || Comp > 100)
    {
        cout << endl << "Error : you entered invalid marks";
        goto M;
    }

    // Calculate total and average marks.
    Total = Math + Phys + Comp;
    Avg = Total / 3.0f;

    cout << "\n---------------------------------------------------";
    cout << "\n Academic Summary ";
    cout << "\n---------------------------------------------------" << endl;

    cout << left << setw(32) << "your total marks is  " << ": " << Total << endl;
    cout << left << setw(32) << "your Average is" << ": " << Avg << "%" << endl;

    if (Avg >= 40 && Math >= 40 && Phys >= 40 && Comp >= 40)
    {
        cout << endl << "You are Pass";

        if (Avg > 90 && Avg <= 100)
        {
            cout << left << setw(15) << endl << "Grade " << ":" << " O";
            cout << left << setw(15) << endl << "Performance " << ":" << " Outstanding";
        }
        else if (Avg > 80 && Avg <= 90)
        {
            cout << endl << "Grade : A+";
            cout << endl << "Performance : Excellent";
        }
        else if (Avg > 70 && Avg <= 80)
        {
            cout << endl << "Grade : A";
            cout << endl << "Performance : Very Good";
        }
        else if (Avg > 60 && Avg <= 70)
        {
            cout << endl << "Grade : B+";
            cout << endl << "Performance : Good";
        }
        else if (Avg > 50 && Avg <= 60)
        {
            cout << endl << "Grade : B";
            cout << endl << "Performance : Satisfactory";
        }
        else if (Avg >= 40 && Avg <= 50)
        {
            cout << endl << "Grade : C";
            cout << endl << "Performance : Needs Improvement";
        }
    }
    else
    {
        cout << endl << "You are fail";
        cout << endl << "Grade : F";
        cout << "\nPerformance : Failed";
    }

    cout << "\n---------------------------------------------------";
    cout << "\nStudent Information";
    cout << "\n---------------------------------------------------" << endl << endl;

    cout << left << setw(32) << "your enrollment number is " << ": " << EnrollNo << endl;
    cout << left << setw(32) << "your name is " << ": " << StudentName << endl;
    cout << left << setw(32) << "your branch is " << ": " << Branch << endl;
    cout << left << setw(32) << "your semester is " << ": " << Sem << endl;
    cout << left << setw(32) << "your mobile number is " << ": " << Mobile << endl;

    return 0;
}