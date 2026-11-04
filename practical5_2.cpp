#include<iostream>
#include <iomanip>
#include<string>
using namespace std;

int main()
{
     short int semester,M,N,l;
    long int mobileNumber;
    string name, enrollmentNumber, branch;
    char choice;

    cout << "***************" << endl;
    cout << "STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "***************" << endl;
    cout << "Student Registration" << endl;

    // Loop to take information of multiple students
    do {
        // Input the student information
        cout << left << setw(25) << "Enter Enrollment Number" << ":";
        cin >> enrollmentNumber;

        cout << left << setw(25) << "Enter Student Name" << ":";
        cin.ignore();
        getline(cin, name);

        cout << left << setw(25) << "Enter Branch" << ":";
        cin >> branch;

   M:   cout << left << setw(25) << "Enter Semester" << ":";
        cin >> semester;

        if (semester>8 || semester<0){
            cout<<"invalid semester \n";
            goto M;
        }

     N: cout << left << setw(25) << "Enter Mobile Number" << ":";
        cin >> mobileNumber;

        l =  to_string(mobileNumber).size();
        if (l != 10){
            cout<<"You enter invalid Number \n";
            goto N;
        }

        cout << endl;



        cout << "Student Registered Successfully." << endl;
        cout << "Register another student? (Y/N) :";
        cin >> choice;
        cout << "-----------------------------------------------------" << endl;

    } while (choice == 'Y' || choice == 'y');

    return 0;
}
