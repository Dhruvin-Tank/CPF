#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int m, s;
    string sn,en, b;
    int mm,mp,mc;
    int total;
    float avg;



    cout<<"************************************************** ";
    cout<<setw(38)<<"\n STUDENT RECORD MANAGEMENT SYSTEM";
    cout<<"\n **************************************************";

    cout<<"\n softer version : 1.1";
    cout<<"\n Instutite : Charusat University ";
    cout<<"\n academic year : 2026-2027 ";

    cout<<"\n---------------------------------------------------";
    cout<<"\n Student Registration ";
    cout<<"\n---------------------------------------------------";

    cout<<left<<setw(32)<<"\n Enter your Enrollment number "<<": ";
    cin>> en ;
    cout<<left<<setw(32)<<"\n Enter Student name "<<": ";
    /*cin>> sn; */
    cin.ignore();
    getline(cin,sn);
    cout<<left<<setw(32)<<"\n Enter your Branch "<<": ";
    cin >>b ;
    cout<<left<<setw(32)<<"\n Enter your Semeter "<<": ";
    cin>>s;
    cout<<left<<setw(32)<<"\n Enter your Mobile Number "<<": ";
    cin >>m;

    cout<<"\n---------------------------------------------------";
    cout<<"\n Academic ";
    cout<<"\n---------------------------------------------------";


    cout<<left<<setw(32)<<"\n Enter your Maths marks "<<": ";
    cin>> mm ;
    cout<<left<<setw(32)<<"\n Enter your Physics Marks"<<": ";
    cin>> mp ;
    cout<<left<<setw(32)<<"\n Enter your Computer Marks"<<": ";
    cin>> mc ;

    total=mm+mp+mc;
    avg=total/3 ;

    cout<<"\n---------------------------------------------------";
    cout<<"\n Academic Simerey ";
    cout<<"\n---------------------------------------------------"<<endl;

    cout<<left<<setw(32)<<"your total marks is  "<<": " <<total<<endl;
    cout<<left<<setw(32)<<"your Avrege is"<<": " <<avg<<"%"<<endl;



    cout<<"\n---------------------------------------------------";
    cout<<"\nStudent Infromation";
    cout<<"\n---------------------------------------------------"<<endl<<endl;

    cout<<left<<setw(32)<<"your enrollment number is "<<": " <<en<<endl;
    cout<<left<<setw(32)<<"your name is "<<": " <<sn<<endl;
    cout<<left<<setw(32)<<"your branch is "<<": "<< b<<endl;
    cout<<left<<setw(32)<<"your semeter is "<<": "<<s<<endl ;
    cout<<left<<setw(32)<<"your mobile number is "<<": "<<m <<endl;



    return 0;


}



