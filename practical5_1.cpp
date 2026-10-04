#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int subjectCount, i, marks, average, percentage, M;
    int totalMarks = 0;

    cout << "---------------------------------------------------";
    cout << "\n Student Record Management System ";
    cout << "\n---------------------------------------------------";

    cout << "\nEnter number of Subjects : ";
    cin >> subjectCount;

    // Input marks for each subject with validation
    for (i = 1; i <= subjectCount; i++) {
        M:
        cout << "Enter the Marks of Subject " << i << " : ";
        cin >> marks;

        if (marks > 100 || marks < 0) {
            cout << "Enter invalid marks range : \n";
            goto M;
        }

        totalMarks = totalMarks + marks;
    }

    // Calculate average and percentage of marks
    average = (float)totalMarks / subjectCount;
    percentage = average;

    cout << "\n---------------------------------------------------";
    cout << "\n Academic Result ";
    cout << "\n---------------------------------------------------";

    cout << left << setw(18) << "\nTotal Marks" << ":" << totalMarks;
    cout << left << setw(18) << "\nAverage Of Marks" << ":" << average;
    cout << left << setw(18) << "\nPercentage" << ":" << average << "%";

    // Assign grade and performance based on average
    if (average >= 40) {
        cout << endl << "You are Pass";

        if (average > 90 && average <= 100) {
            cout << left << setw(15) << endl << "Grade " << ":" << " O";
            cout << left << setw(15) << endl << "Performance " << ":" << " Outstanding";
        }
        else if (average > 80 && average <= 90) {
            cout << endl << "Grade : A+";
            cout << endl << "Performance : Excellent";
        }
        else if (average > 70 && average <= 80) {
            cout << endl << "Grade : A";
            cout << endl << "Performance : Very Good";
        }
        else if (average > 60 && average <= 70) {
            cout << endl << "Grade : B+";
            cout << endl << "Performance : Good";
        }
        else if (average > 50 && average <= 60) {
            cout << endl << "Grade : B";
            cout << endl << "Performance : Satisfactory";
        }
        else if (average > 40 && average <= 50) {
            cout << endl << "Grade : C";
            cout << endl << "Performance : Needs Improvement";
        }
    }
    else {
        cout << endl << "You are Fail";
        cout << endl << "Grade : F \n Performance : Failed";
    }

    return 0;
}

