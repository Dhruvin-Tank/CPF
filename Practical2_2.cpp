#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  
    short int Semester,MobileNumber;
    string StudentName, EnrollmentNumber, Branch;

    // Display program header
    cout << "*****************************************" << endl;
    cout << "STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "*****************************************" << endl;

    cout << left << setw(18) << "software version" << ":" << "1.1" << endl;
    cout << left << setw(18) << "institute" << ":" << "CHARUSAT university" << endl;
    cout << left << setw(18) << "academic year" << ":" << "2026-27" << endl;

    cout << "---------------------------------------" << endl;
    cout << "student registration" << endl;
    cout << "---------------------------------------" << endl;

    // Taking student details as input
    cout << "Enter enrollment number :";
    cin >> EnrollmentNumber;
   

    cout << "Enter student name :";
    cin.ignore();
    getline(cin, StudentName);

    cout << "Enter branch:";
    cin >> Branch;

    cout << "Enter semester :";
    cin >> Semester;

    cout << "Enter mobile number:";
    cin >> MobileNumber;
    cout << endl;

    // Displaying student information
    cout << "-----------------------------------" << endl;
    cout << "STUDENT INFORMATION" << endl;
    cout << "-----------------------------------" << endl;

    cout << left << setw(18) << "Enrollment Number" << ":" << EnrollmentNumber << endl;
    cout << left << setw(18) << "Name" << ":" << StudentName << endl;
    cout << left << setw(18) << "Semester" << ":" << Semester << endl;
    cout << left << setw(18) << "Branch" << ":" << Branch << endl;
    cout << left << setw(18) << "Mobile Number" << ":" << MobileNumber << endl;

    return 0;
}