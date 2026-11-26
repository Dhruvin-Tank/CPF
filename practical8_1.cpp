#include <iostream>
#include <iomanip>
using namespace std;

string enrollment, name, branch;
int sem;
int marks[5];
int total = 0;
float per;
string grade, result;

void displayHeader()
{
    cout<<"********************************"<<endl;
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"********************************"<<endl;
}

void acceptStudentDetails()
{
    cout<<endl<<"---------- Student Registration ----------"<<endl;

    cout<<left<<setw(26)<<"Enter Enrollment Number"<<":";
    cin>>enrollment;
    cout<<left<<setw(26)<<"Enter Student Name"<<":";
    cin.ignore();
    getline(cin,name);
    cout<<left<<setw(26)<<"Enter Branch"<<":";
    getline(cin,branch);
    cout<<left<<setw(26)<<"Enter Semester"<<":";
    cin>>sem;

    cout<<"Enter Marks (5 Subjects)"<<endl;

    for (int i=0; i<5; i++)
    {
        cout<<"Subject "<<i+1<<":";
        cin>>marks[i];
    }
}

void calculateAcademicResult()
{
    total = 0;

    for (int i=0; i<5; i++)
    {
        total = total+marks[i];
    }

    per = total/5.0;

    if (per>=80)
    {
        grade="A+";
    }
    else if (per>=70)
    {
        grade="A";
    }
    else if (per>=60)
    {
        grade="B+";
    }
    else if (per>=50)
    {
        grade="B";
    }
    else if (per>=40)
    {
        grade="C";
    }
    else
    {
        grade="F";
    }

    result = "PASS";

    for (int i=0; i<5; i++)
    {
        if (marks[i]<35)
        {
            result="FAIL";
        }
    }
}

void displayStudentReport()
{
    cout<<"----------------------------------------"<<endl;
    cout<<"Academic Report"<<endl;
    cout<<"----------------------------------------"<<endl;

    cout<<left<<setw(20)<<"Enrollment Number"<<":"<<enrollment<<endl;
    cout<<left<<setw(20)<<"Student Name"<<":"<<name<<endl;
    cout<<left<<setw(20)<<"Branch"<<":"<<branch<<endl;
    cout<<left<<setw(20)<<"Semester"<<":"<<sem<<endl;
    cout<<left<<setw(20)<<"Total Marks"<<":"<<total<<endl;

    cout<<fixed<<setprecision(2);
    cout<<left<<setw(20)<<"Percentage"<<":"<<per<<"%"<<endl;
    cout<<left<<setw(20)<<"Grade"<<":"<<grade<<endl;
    cout<<left<<setw(20)<<"Result"<<":"<<result<<endl;

    cout<<"----------------------------------------"<<endl;
    cout<<"Program Executed Successfully Using"<<endl;
    cout<<"User-defined Functions."<<endl;
    cout<<"----------------------------------------"<<endl;
}

int main()
{
    displayHeader();
    acceptStudentDetails();
    calculateAcademicResult();
    displayStudentReport();

    return 0;
}
