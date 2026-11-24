#include<iostream>
using namespace std;
int main()
{
    int n=3 , i , j , m ;
    int x[3][3] , y[3][3] , k[3][3];

    cout<<"*************************************"<<endl;
    cout<<"MATRIX MULTIPLICATION"<<endl;
    cout<<"*************************************"<<endl;

    //for first matrix input
    cout<<"first matrix input"<<endl;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            cin>>x[i][j];
        }
    }

    cout<<endl;
    //display the first matrix
    cout<<"FIRST MATRIX"<<endl;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            cout<<" "<<x[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    //for second matrix input
    cout<<"second matrix input"<<endl;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            cin>>y[i][j];
        }
    }

    cout<<endl;
    //display the first matrix
    cout<<"SECOND MATRIX"<<endl;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            cout<<" "<<y[i][j]<<" ";
        }
        cout<<endl;
    }

    //for multiplication of 2 matrix
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            k[i][j] = 0;
            for(m=0 ; m<n ; m++)
            {
                k[i][j] = k[i][j] + x[i][m] * y[m][j];
            }
        }
    }

    cout<<endl;
    //display result matrix
    cout<<"RESULT MATRIX"<<endl;
    for(i=0 ; i<n ;i++)
    {
        for(j=0 ; j<n ;j++)
        {
            cout<<" "<<k[i][j]<<" ";
        }
        cout<<endl;
    }


}
