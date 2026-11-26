
#include<iostream>
#include<iomanip>
using namespace std;

int global_variable = 100; // Global variable

//Part A - Function Design

//1.function without parameters and without return value
void printMessage()
{
    cout<<"welcome to the function 1"<<endl;
    cout<<"Hello, welcome to the program!"<<endl;
}

//2.function without parameters and with return value
int getNumber()
{
    cout<<"welcome to the function 2"<<endl;
    return 42;
}

//3.function with parameters and without return value
void displaySum(int a, int b)
{
    cout<<"welcome to the function 3"<<endl;
    int sum = a + b;
    cout<<"The sum of "<<a<<" and "<<b<<" is: "<<sum<<endl;
}

//4.function with parameters and with return value
int multiply(int a, int b)
{
    cout<<"welcome to the function 4"<<endl;
    return a * b;
}

//Part B - Parameter Passing

//call by value
void callByValue(int x)
{
    x = x + 10;
    cout<<"Inside callByValue, x = "<<x<<endl;
}

//call by reference
void callByReference(int &x)
{
    x = x + 10;
    cout<<"Inside callByReference, x = "<<x<<endl;
}

//Part C - scope and visibility
void showValues()
{
    int local_variable = 50; // Local variable
    cout<<"Local variable: "<<local_variable<<endl;
    cout<<"Global variable: "<<global_variable<<endl;

    global_variable++; // Modifying global variable
}

//Part D - Function Overloading

//Display Student Details
void displayStudentDetails(string name, int rollNo)
{
    cout<<"Student Name: "<<name<<endl;
    cout<<"Roll Number: "<<rollNo<<endl;
}

//Display Student Details with Academic Information
void displayStudentDetails(string name, int rollNo, float marks)
{
    cout<<"Student Name: "<<name<<endl;
    cout<<"Roll Number: "<<rollNo<<endl;
    cout<<"Marks: "<<marks<<endl;
}

//Display Student Details with Academic and Contact Information
void displayStudentDetails(string name, int rollNo, float marks, string contact)
{
    cout<<"Student Name: "<<name<<endl;
    cout<<"Roll Number: "<<rollNo<<endl;
    cout<<"Marks: "<<marks<<endl;
    cout<<"Contact Details: "<<contact<<endl;
}

int main()
{
    //Calling the function 1
    printMessage();
    cout<<endl;

    //Calling the function 2
    int num = getNumber();
    cout<<"The number is: "<<num<<endl<<endl;

    //Calling the function 3
    displaySum(5, 10);
    cout<<endl;

    //Calling the function 4
    int product = multiply(5, 10);
    cout<<"The product is: "<<product<<endl<<endl;

    //Demonstrating call by value
    cout<<"welcome to the call by value function"<<endl;
    int value = 20;
    cout<<"Before callByValue, value = "<<value<<endl;
    callByValue(value);
    cout<<"After callByValue, value = "<<value<<endl<<endl;

    //Demonstrating call by reference
    cout<<"welcome to the call by reference function"<<endl;
    int refValue = 20;
    cout<<"Before callByReference, refValue = "<<refValue<<endl;
    callByReference(refValue);
    cout<<"After callByReference, refValue = "<<refValue<<endl<<endl;

    //Demonstrating scope and visibility
    cout<<"welcome to the scope and visibility function"<<endl;
    showValues();
    cout<<endl;

    cout<<"Global variable in main: "<<global_variable<<endl;

    //Display Student Details
    cout<<"Student Details"<<endl;
    displayStudentDetails("Rahul", 101);

    //Display Student Details with Academic Information
    cout<<endl<<"Student Details with Academic Information"<<endl;
    displayStudentDetails("Rahul", 101, 85.5);

    //Display Student Details with Academic and Contact Information
    cout<<endl<<"Student Details with Academic and Contact Information"<<endl;
    displayStudentDetails("Rahul", 101, 85.5, "9876543210");

    return 0;
}
