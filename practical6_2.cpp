#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main()
{
    int n ,i,j;
    char ID[100][20] ;
    char name[100][100];
    int score[100];
    string searchid;

    // sports event score analsis programm
    cout<<"************************************"<<endl;
    cout<<"SPORTS EVENT SCORE ANALSIS"<<endl;
    cout<<"************************************"<<endl;

    cout<<"enter number of participants : ";
    cin>>n;

    // take a participant information
    for( i=0 ; i<n ; i++)
     {
        cout<<"enter participant ID :";
        cin>>ID[i];
        cout<<"enter participant name :";
        cin>>name[i];
        cout<<"enter score :";
        cin>>score[i];
     }
     cout<<endl;
     cout<<"-----------------------------"<<endl;

     // for search the participant
     cout<<"search participant"<<endl;
     cout<<"enter participant ID  :";
     cin>>searchid;

     // for find the participant
     int found = 0;
     for(i=0 ; i<n ; i++)
     {
         if(ID[i] == searchid)
         {
            cout<<"----------------------"<<endl;
            cout<<"participant found"<<endl;
            cout<<"----------------------"<<endl;

            cout<<left<<setw(6)<<"ID"<<":"<<ID[i]<<endl;
            cout<<left<<setw(6)<<"name"<<":"<<name[i]<<endl;
            cout<<left<<setw(6)<<"score"<<":"<<score[i]<<endl;
            found = 1;
            break;
         }
     }
         if(found==0)
         {
             cout<<"participant not found"<<endl;
         }

         // to display the rank list
          cout<<"----------------------"<<endl;
          cout<<"ranking list"<<endl;
          cout<<"----------------------"<<endl;

          cout<<left<<setw(5)<<"Rank"<<setw(8)<<"Name"<<"Score"<<endl;

          for( i=0 ; i<n ; i++)
          {
            for( j=i+1 ; j<n ; j++)
             {
                if(score[i] < score[j])
                 {
                     // Swap score
                    int tempScore = score[i];
                    score[i] = score[j];
                    score[j]  = tempScore;

                    // swap name
                   char tempName[100][20];
                   strcpy(tempName[0], name[i]);
                   strcpy(name[i], name[j]);
                   strcpy(name[j], tempName[0]);
                 }
             }
          }

          for(i=0 ; i<n ; i++)
          {
            cout<<left<<setw(5)<<i+1<<setw(8)<<name[i]<<score[i]<<endl;
          }

          // to display top three performers
          cout<<"----------------------"<<endl;
          cout<<"Top three performers"<<endl;

          for(i=0 ; i<3 ; i++)
          {
            cout<<i+1<<"."<<"  "<<name[i]<<" "<<"-"<<" "<<score[i]<<endl;
          }

      return 0;
}
