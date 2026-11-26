#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int n;
    string enrollmentNo, name, branch, grade;
    int semester;
    float percentage;

    // PART A: Create and Write Student Records
    ofstream outFile("StudentRecords.txt");

    // PART D: Error handling if file cannot be created
    if (!outFile)
    {
        cout << "Error: StudentRecords.txt could not be created!" << endl;
        return 1;
    }

    cout << "Enter the number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\n--- Enter Details for Student " << i + 1 << " ---" << endl;

        cout << "Enrollment Number: ";
        cin >> enrollmentNo;

        cin.ignore();
        cout << "Student Name: ";
        getline(cin, name);

        cout << "Branch: ";
        cin >> branch;

        cout << "Semester: ";
        cin >> semester;

        cout << "Percentage: ";
        cin >> percentage;

        cout << "Grade: ";
        cin >> grade;

        // Store record in file
        outFile << "Enrollment No: " << enrollmentNo << endl;
        outFile << "Name: " << name << endl;
        outFile << "Branch: " << branch << endl;
        outFile << "Semester: " << semester << endl;
        outFile << "Percentage: " << percentage << "%" << endl;
        outFile << "Grade: " << grade << endl;
        outFile << "----------------------------------------" << endl;
    }

    outFile.close();
    cout << "\nStudent records stored successfully in StudentRecords.txt!\n" << endl;

    // PART B: Read and Display Student Records
    ifstream inFile("StudentRecords.txt");

    // PART D: Error handling if file cannot be opened for reading
    if (!inFile)
    {
        cout << "Error: StudentRecords.txt could not be opened for reading!" << endl;
        return 1;
    }

    cout << "=== Reading Records from StudentRecords.txt ===" << endl;
    string line;

    while (!inFile.eof())
    {
        getline(inFile, line);
        cout << line << endl;
    }

    inFile.close();
    cout << "All records have been read successfully!\n" << endl;

    // PART C: Backup Student Records
    ifstream sourceFile("StudentRecords.txt");
    ofstream backupFile("BackupStudentRecords.txt");

    // PART D: Error handling for backup creation and source reading
    if (!sourceFile)
    {
        cout << "Error: Could not open StudentRecords.txt for backup!" << endl;
        return 1;
    }
    if (!backupFile)
    {
        cout << "Error: BackupStudentRecords.txt could not be created!" << endl;
        sourceFile.close();
        return 1;
    }

    // Copy line by line from source to backup
    while (getline(sourceFile, line))
    {
        backupFile << line << endl;
    }

    sourceFile.close();
    backupFile.close();
    cout << "Backup created successfully in BackupStudentRecords.txt!" << endl;



    return 0;
}
