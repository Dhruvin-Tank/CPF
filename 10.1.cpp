#include <iostream>
#include <string>
using namespace std;

struct Student
{
string enrollmentNumber;
string studentName;
string branch;
int semester;
float percentage;
char grade;
};

int main()
{
    //Create a student structure variable
    Student s;

    //Accept student details
    cout<<"Enter Enrollment Number: "<<endl;
    cin>>s.enrollmentNumber;
    cin.ignore();
    cout<<"Enter Student Name:"<<endl;
    getline(cin, s.studentName);
    cout<<"Enter Branch:"<<endl;
    getline(cin, s.branch);
    cout<<"Enter Semester:"<<endl;
    cin>>s.semester;
    cout<<"Enter Percentage:"<<endl;
    cin>>s.percentage;
    cout<<"Enter Grade:"<<endl;
    cin>>s.grade;
    //Display Student details
    cout<<"\n======Student Record======\n";
    cout<<"Enrollment Number:"<<s.enrollmentNumber<<endl;
    cout<<"Student Name:"<<s.studentName<<endl;
    cout<<"Branch:"<<s.branch<<endl;
    cout<<"Percentage:"<<s.percentage<<"%"<<endl;
    cout<<"Grade:"<<s.grade<<endl;
    cout << "\n\n\t\t\t\t\t\t- By Shubham Kanani";
    return 0;
}