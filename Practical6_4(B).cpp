#include<iostream>
using namespace std;
int main()
{
    int i,n=5,m=5,p=10, a[n], b[m] , c[p], temp;
    
    //enter first array
    for(i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    cout<<"First array"<<endl;
     for(i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"------------------------------"<<endl;

    //enter second array
    for(i=0 ; i<m ; i++)
    {
        cin>>b[i];
    }
    cout<<"Second array"<<endl;
    for(i=0 ; i<m ; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    cout<<"------------------------------"<<endl;

    // to merge the array
    cout<<"merge array"<<endl;
    for(i=0 ; i<n ; i++)
    {
        c[i] = a[i];
    }
    for(i=0 ; i<m ; i++)
    {
        c[n+i] = b[i];
    }
    for(i=0 ; i<p ; i++)
    {
        cout<<c[i]<<" ";
    }
     cout<<endl;
    cout<<"--------------------------------"<<endl;

    //for sorting the array
    cout<<"sorted array"<<endl;
    for(i=0 ; i<10 ; i++)
    {
        for(int j=i+1 ; j<10 ; j++)
        {
            if (c[i] > c[j])
            {
                 temp = c[i];
                 c[i] = c[j];
                 c[j] = temp;
            }
        }
    }
    for(i=0 ; i<10 ; i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}
