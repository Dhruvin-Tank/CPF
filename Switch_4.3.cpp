#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int x;
    int m, s;
    string sn,en, b;
    int mm,mp,mc;
    int total;
    float avg;





        cout<<"\n softer version : 1.1";
        cout<<"\n Instutite : Charusat University ";
        cout<<"\n academic year : 2026-2027 ";

     cout<<"\n\n1. Register New Student\n2. Display Student Record\n3. Enter Student Marks\n4. Display Academic Result\n5. Exit";


     A:
        cout<<"\n\n\n\     Enter your choice  :";
        cin>>x;


        switch(x){

    case 1:


         cout<<"\n---------------------------------------------------";
        cout<<"\n Student Registration ";
        cout<<"\n---------------------------------------------------";

        cout<<left<<setw(32)<<"\n Enter your Enrollment number "<<": ";
        cin>> en ;
        cout<<left<<setw(32)<<"\n Enter Student name "<<": ";
        cin>> sn;
        cin.ignore();
        getline(cin,sn);
        cout<<left<<setw(32)<<"\n Enter your Branch "<<": ";
        cin >>b ;
        cout<<left<<setw(32)<<"\n Enter your Semeter "<<": ";
        cin>>s;
        cout<<left<<setw(32)<<"\n Enter your Mobile Number "<<": ";
        cin >>m;

        goto A;

        break;

    case 2:

         cout<<"\n---------------------------------------------------";
            cout<<"\nStudent Information";
            cout<<"\n---------------------------------------------------"<<endl<<endl;

            cout<<left<<setw(32)<<"your enrollment number is "<<": " <<en<<endl;
            cout<<left<<setw(32)<<"your name is "<<": " <<sn<<endl;
            cout<<left<<setw(32)<<"your branch is "<<": "<< b<<endl;
            cout<<left<<setw(32)<<"your semeter is "<<": "<<s<<endl ;
            cout<<left<<setw(32)<<"your mobile number is "<<": "<<m <<endl;

            goto A;

        break;

    case 3:

           cout<<"\n---------------------------------------------------";
    cout<<"\n Academic ";
    cout<<"\n---------------------------------------------------";


M:
    cout<<left<<setw(32)<<"\n Enter your Maths marks "<<": ";
    cin>> mm ;
    cout<<left<<setw(32)<<"\n Enter your Physics Marks"<<": ";
    cin>> mp ;
    cout<<left<<setw(32)<<"\n Enter your Computer Marks"<<": ";
    cin>> mc ;

       if(mm>0 && mm<101 && mp>0 && mp<101 && mc>0 && mc<101)
        {
            cout<<"your marks are taken";
        }
        else{
                cout<<"You enter invalide marks";
            goto M;
        }

        goto A;
        break;

    case 4:


        total=mm+mp+mc;
        avg=total/3 ;

        cout<<"\n---------------------------------------------------";
        cout<<"\n Academic Summary ";
        cout<<"\n---------------------------------------------------"<<endl;

        cout<<left<<setw(32)<<"your total marks is  "<<": " <<total<<endl;
        cout<<left<<setw(32)<<"your Avrege is"<<": " <<avg<<"%"<<endl;


        if (avg >=40 && mm>40 && mp>40 && mc>40)
        {
            cout<<endl<<"You are Pass";

            if(avg>90 && avg<=100)
            {
                cout<<left<<setw(15)<<endl<<"Grade "<<":"<<" O";
                cout<<left<<setw(15)<<endl<<"Performance " <<":"<< " Outstanding";
            }

            else if(avg>80 && avg<=90)
            {
                cout<<endl<<"Grade : A+";
                cout<<endl<<"Performance : Excellent";
            }

            else if(avg>70 && avg<=80)
            {
                cout<<endl<<"Grade : A";
                cout<<endl<<"Performance : Very Good";
            }

            else if(avg>60 && avg<=70)
            {
                cout<<endl<<"Grade : B+";
                cout<<endl<<"Performance : Good";
            }

            else if(avg>50 && avg<=60)
            {
                cout<<endl<<"Grade : B";
                cout<<endl<<"Performance : Satisfactory";
            }

            else if(avg>40 && avg<=50)
            {
                cout<<endl<<"Grade : C";
                cout<<endl<<"Performance : Needs Improvement";
            }

        }
        else
        {
            cout<<endl<<"You are fail";
            cout<<endl<<"grade : F \n Performance : Failed";
        }


        goto A ;
        break;

    default:
        break;

        }



return 0;

}
