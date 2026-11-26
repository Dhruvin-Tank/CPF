#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct Student
{
    string enrollmentNumber;
    char studentName[35];
    string branch;
    int semester;
};
int main()
{
    Student s;

    cout<<"Size of Individual Data Members"<<endl;
    cout<<"Size of Enrollment Number: "
        <<sizeof(s.enrollmentNumber)<<"bytes"<<endl;

    cout<<"Size of Student Name:"
        <<sizeof(s.studentName)<<"bytes"<<endl;
    
    cout<<"Size of Branch:"
        <<sizeof(s.branch)<<"bytes"<<endl;
    
    cout<<"Size of Semester:"
        <<sizeof(s.semester)<<"bytes"<<endl;
    
    cout << "\n\n\t\t\t\t\t\t- By Shubham Kanani"; 
        return 0;
}