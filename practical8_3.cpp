#include<iostream>
using namespace std;

// Factorial using Iteration
long long factorial(int n)
{
    long long fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact = fact*i;
    }
    return fact;
}

// Factorial using Recursion
long long factorialRecursive(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return n * factorialRecursive(n-1);
}

// Fibonacci using Iteration
void fibonacci(int n)
{
    int a=0, b=1, next;
    cout<<"Iterative Fibonacci: ";

    for(int i=1; i<=n; i++)
    {
        cout<<a<<" ";
        next=a+b;
        a=b;
        b=next;
    }
    cout<<endl;
}

// Fibonacci using Recursion
int fibonacciRecursive(int n)
{
    if(n==0)
        return 0;

    if(n==1)
        return 1;

    return fibonacciRecursive(n-1)+fibonacciRecursive(n-2);
}

// Display Recursive Fibonacci Series
void fibonacciRecSeries(int n)
{
    cout<<"Recursive Fibonacci: ";

    for(int i=0; i<n; i++)
    {
        cout<<fibonacciRecursive(i)<<" ";
    }
    cout<<endl;
}

// Main Function
int main()
{
    int choice, n;

    do
    {
        cout<<"-----RECURSIVE MATHEMATICAL OPERATIONS ANALYZER------"<<endl;
        cout<<"1. Factorial Analysis"<<endl;
        cout<<"2. Fibonacci Series Analysis"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter a number: ";
                cin>>n;

                if(n<0 || n>20)
                {
                    cout<<"Enter a number between 0 and 20."<<endl;
                    break;
                }
                cout<<"Factorial using Iteration: "<<factorial(n)<<endl;
                cout<<"Factorial using Recursion: "<<factorialRecursive(n)<<endl;
                break;

            case 2:
                cout<<"Enter number of terms: ";
                cin>>n;

                if(n<0 || n>40)
                {
                    cout<<"Enter terms between 0 and 40."<<endl;
                    break;
                }
                cout<<"Fibonacci Series Analysis:"<<endl;
                fibonacci(n);
                fibonacciRecSeries(n);
                break;

            case 3:
                cout<<"Exiting program..."<<endl;
                break;

            default:
                cout<<"Invalid choice!"<<endl;
        }

    }while(choice != 3);

    return 0;
}
