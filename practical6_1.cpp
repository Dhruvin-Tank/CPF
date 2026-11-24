#include<iostream>
#include <iomanip>
using namespace std;

int main()
{

    int n ;
    char ID[100][20] ;
    char name[100][100];
    int score[100];
    float average_score;

    cout<<"************************************"<<endl;
    cout<<"SPORTS EVENT SCORE ANALSIS"<<endl;
    cout<<"************************************"<<endl;

    // enter the number of participant
    cout<<"enter number of participants : ";
    cin>>n;

    // to take participant information
    for(int i=0 ; i<n ; i++)
     {
        cout<<"enter participant ID :";
        cin>>ID[i];
        cout<<"enter participant name :";
        cin>>name[i];
        cout<<"enter score :";
        cin>>score[i];
     }

    int total=0;
    int highest = score[0];
    int lowest = score[0];

    // Display participant record
    cout<<"*********************************"<<endl;
    cout<<"participant performance"<<endl;
    cout<<"*********************************"<<endl;

    cout<<"ID"<<setw(10)<<"Name"<<setw(15)<<"Score"<<endl;
    cout<<"---------------------------------"<<endl;

    for(int i=0 ; i<n ; i++)
    {
        cout<<ID[i]<<setw(10)<<name[i]<<setw(15)<<score[i]<<endl;
    }

    // calculate total
    for(int i=0 ; i<n ; i++)
    {
        total= total+ score[i];
    }

    // find highest and lowest
    for(int i=1 ; i<n ; i++)
    {

        if(score[i]>highest)
        highest = score[i];

        if(score[i]<lowest)
        lowest = score[i];

    }
    // calculate average
    average_score = (float)total/n ;

    // print scores
    cout<<"---------------------------------"<<endl;

    cout<<"total score :"<<total<<endl;
    cout<<"average score :"<<average_score<<endl;
    cout<<"highest score :"<<highest<<endl;
    cout<<"lowest score :"<<lowest<<endl;

    return 0;

}
