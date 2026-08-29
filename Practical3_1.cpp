#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variable declarations
    string EnrollmentNumber, StudentName, Branch;
    int Semester;
    short int MobileNumber;
    short int MathematicsMarks, PhysicsMarks, ComputerMarks;
    int TotalMarks;
    float AverageMarks, Percentage;


    // Student Record Management System
    cout << "*****************************************" << endl;
    cout << "STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "*****************************************" << endl;

    cout << left << setw(18) << "Software Version" << ":" << "1.2" << endl;

    cout << "---------------------------------------" << endl;
    cout << "Student Registration" << endl;
    cout << "---------------------------------------" << endl;

    
    cout << left << setw(25) << "Enter Enrollment Number" << ":";
    cin >> EnrollmentNumber;
    
    cout << left << setw(25) << "Enter Student Name" << ":";
    cin.ignore();  // Clear the leftover newline
    getline(cin, StudentName);   // Allows full name with spaces

    cout << left << setw(25) << "Enter Branch" << ":";
    cin >> Branch;

    cout << left << setw(25) << "Enter Semester" << ":";
    cin >> Semester;

    cout << left << setw(25) << "Enter Mobile Number" << ":";
    cin >> MobileNumber;
    cout << endl;

    cout << "-----------------------------------" << endl;
    cout << "Academic Information" << endl;
    cout << "-----------------------------------" << endl;

M:  cout << left << setw(38) << "Enter Mathematics Marks" << ":";
    cin >> MathematicsMarks;
    cout << endl;

    cout << left << setw(38) << "Enter Physics Marks" << ":";
    cin >> PhysicsMarks;
    cout << endl;

    cout << left << setw(38) << "Enter Computer Marks" << ":";
    cin >> ComputerMarks;
    cout << endl;

    if (MathematicsMarks<0 && MathematicsMarks>100 && PhysicsMarks>0 && PhysicsMarks<100 && ComputerMarks<0 && ComputerMarks>100)
    {
        cout<<"Enter valide Marks";
        goto M;
    }
    

    // Calculate results
    TotalMarks = MathematicsMarks + PhysicsMarks + ComputerMarks;
    AverageMarks = TotalMarks / 3.0;
    Percentage = AverageMarks;

    cout << "-----------------------------------" << endl;
    cout << "Academic Summary" << endl;
    cout << "-----------------------------------" << endl;

    cout << left << setw(18) << "Total Marks" << ":" << TotalMarks << endl;
    cout << left << setw(18) << "Average Marks" << ":" << AverageMarks << endl;
    cout << left << setw(18) << "Percentage" << ":" << Percentage << "%" << endl;
    cout << endl;

    cout << "-----------------------------------" << endl;
    cout << "STUDENT INFORMATION" << endl;
    cout << "-----------------------------------" << endl;

    cout << left << setw(18) << "Enrollment Number" << ":" << EnrollmentNumber << endl;
    cout << left << setw(18) << "Name" << ":" << StudentName << endl;
    cout << left << setw(18) << "Semester" << ":" << Semester << endl;
    cout << left << setw(18) << "Branch" << ":" << Branch << endl;
    cout << left << setw(18) << "Mobile Number" << ":" << MobileNumber << endl;
    cout << "-----------------------------------" << endl;

    return 0;
}