#include <iostream>
using namespace std;

int main()
{
    string EnrollmentNumber;
    string StudentName;
    string Branch;
    short int Semester;
    int MobileNumber;
   
    // Display header of the program
    cout << "**************************************************" << endl;
    cout << "STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "**************************************************" << endl;

    // Taking student details as input
    cout << "Enter Enrollment Number :";
    cin >> EnrollmentNumber;
    
    cout << "Enter Student Name :";
    cin.ignore();
    getline(cin,StudentName);

    cout << "Enter Branch :";
    cin >> Branch;

    cout << "Enter Semester :";
    cin >> Semester;

    cout << "Enter Mobile Number :";
    cin >> MobileNumber;

    // Displaying the entered student information
    cout << "------------------------------------------" << endl;
    cout << "Student Information" << endl;
    cout << "------------------------------------------" << endl;

    cout << " Enrollment Number :" << EnrollmentNumber << endl;
    cout << " Student Name :" << StudentName << endl;
    cout << " Branch :" << Branch << endl;
    cout << " Semester :" << Semester << endl;
    cout << " Mobile Number :" << MobileNumber << endl;

    cout << "------------------------------------------" << endl;

    return 0;
}
