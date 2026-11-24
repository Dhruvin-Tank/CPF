#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
    int n, position, i;
    char id[100][10], name[100][20], grade[100][3], new_name[20];
    float per[100], new_per;
    char s[10];

    cout << "********************************************************" << endl;
    cout << setw(5) << "STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "********************************************************" << endl;

    cout << "Enter number of student : ";
    cin >> n;

    cout << "Enter Student Details" << endl << endl;

    for (i = 0; i < n; i++)
    {
        cout << "Enter student ID : ";
        cin >> id[i];

        cout << "Enter Student Name : ";
        cin >> name[i];

        cout << "Enter Student Percentage : ";
        cin >> per[i];
    }

    cout << "---------------------------------------------------------------" << endl;

    cout << "Current Student Records" << endl << endl;

    cout << left << setw(5) << "ID";
    cout << left << setw(13) << "Name";
    cout << left << setw(20) << "Percentage";
    cout << left << setw(27) << "Grade" << endl;

    for (i = 0; i < n; i++)
    {
        cout << left << setw(5) << id[i];
        cout << left << setw(13) << name[i];
        cout << left << setw(20) << per[i];

        if (per[i] > 100 || per[i] < 0)
        {
            cout << "Invalid marks";
        }
        else if (per[i] >= 90)
            cout << left << setw(27) << "O";
        else if (per[i] >= 80)
            cout << left << setw(27) << "A+";
        else if (per[i] >= 70)
            cout << left << setw(27) << "A";
        else if (per[i] >= 60)
            cout << left << setw(27) << "B+";
        else if (per[i] >= 50)
            cout << left << setw(27) << "B";
        else if (per[i] >= 40)
            cout << left << setw(27) << "C";
        else
            cout << left << setw(27) << "F";

        cout << endl;
    }

    cout << "---------------------------------------------------------------" << endl;
    cout << endl;

    // INSERT STUDENT

    cout << "Enter New Student" << endl;
    cout << "Enter Position : ";
    cin >> position;
    cout << endl;

    int index = position - 1;

    if (position >= 1 && position <= n + 1 && n < 100)
    {
        // Shift records to the right
        for (i = n; i > index; i--)
        {
            strcpy(id[i], id[i - 1]);
            strcpy(name[i], name[i - 1]);
            per[i] = per[i - 1];
        }

        cout << "Enter student ID : ";
        cin >> id[index];

        cout << "Enter Student Name : ";
        cin >> name[index];

        cout << "Enter Student Percentage : ";
        cin >> per[index];

        n++;

        cout << "Record Updated Successfully." << endl;
    }
    else
    {
        cout << "Invalid Position." << endl;
    }

    cout << "---------------------------------------------------------------" << endl;
    cout << endl;

    // UPDATED RECORDS

    cout << "Updated Student Records" << endl << endl;

    cout << left << setw(5) << "ID";
    cout << left << setw(13) << "Name";
    cout << left << setw(20) << "Percentage";
    cout << left << setw(27) << "Grade" << endl;

    for (i = 0; i < n; i++)
    {
        cout << left << setw(5) << id[i];
        cout << left << setw(13) << name[i];
        cout << left << setw(20) << per[i];

        if (per[i] > 100 || per[i] < 0)
        {
            cout << "Invalid marks";
        }
        else if (per[i] >= 90)
            cout << left << setw(27) << "O";
        else if (per[i] >= 80)
            cout << left << setw(27) << "A+";
        else if (per[i] >= 70)
            cout << left << setw(27) << "A";
        else if (per[i] >= 60)
            cout << left << setw(27) << "B+";
        else if (per[i] >= 50)
            cout << left << setw(27) << "B";
        else if (per[i] >= 40)
            cout << left << setw(27) << "C";
        else
            cout << left << setw(27) << "F";

        cout << endl;
    }

    cout << "---------------------------------------------------------------" << endl;
    cout << endl;

    // UPDATE STUDENT

    cout << "Update Student Record" << endl << endl;

    cout << "Enter student ID : ";
    cin >> s;

    bool found = false;

    for (i = 0; i < n; i++)
    {
        if (strcmp(s, id[i]) == 0)
        {
            found = true;

            cout << left << setw(5) << id[i];
            cout << left << setw(13) << name[i];
            cout << left << setw(20) << per[i];

            if (per[i] >= 90)
                cout << left << setw(27) << "O";
            else if (per[i] >= 80)
                cout << left << setw(27) << "A+";
            else if (per[i] >= 70)
                cout << left << setw(27) << "A";
            else if (per[i] >= 60)
                cout << left << setw(27) << "B+";
            else if (per[i] >= 50)
                cout << left << setw(27) << "B";
            else if (per[i] >= 40)
                cout << left << setw(27) << "C";
            else
                cout << left << setw(27) << "F";

            cout << endl;

            cout << "Enter new name : ";
            cin >> new_name;

            cout << "Enter new percentage : ";
            cin >> new_per;

            strcpy(name[i], new_name);
            per[i] = new_per;

            break;
        }
    }

    if (found)
        cout << "Record Updated Successfully." << endl;
    else
        cout << "Student ID not found." << endl;

    cout << "---------------------------------------------------------------" << endl;
    cout << endl;

    // RECORDS AFTER UPDATE

    cout << left << setw(5) << "ID";
    cout << left << setw(13) << "Name";
    cout << left << setw(20) << "Percentage";
    cout << left << setw(27) << "Grade" << endl;

    for (i = 0; i < n; i++)
    {
        cout << left << setw(5) << id[i];
        cout << left << setw(13) << name[i];
        cout << left << setw(20) << per[i];

        if (per[i] > 100 || per[i] < 0)
        {
            cout << "Invalid marks";
        }
        else if (per[i] >= 90)
            cout << left << setw(27) << "O";
        else if (per[i] >= 80)
            cout << left << setw(27) << "A+";
        else if (per[i] >= 70)
            cout << left << setw(27) << "A";
        else if (per[i] >= 60)
            cout << left << setw(27) << "B+";
        else if (per[i] >= 50)
            cout << left << setw(27) << "B";
        else if (per[i] >= 40)
            cout << left << setw(27) << "C";
        else
            cout << left << setw(27) << "F";

        cout << endl;
    }

    cout << "---------------------------------------------------------------" << endl;
    cout << endl;

    // DELETE STUDENT

    cout << "Delete Student Record" << endl;

    cout << "Enter position : ";
    cin >> position;
    cout << endl;

    index = position - 1;

    if (position >= 1 && position <= n)
    {
        for (i = index; i < n - 1; i++)
        {
            strcpy(id[i], id[i + 1]);
            strcpy(name[i], name[i + 1]);
            per[i] = per[i + 1];
        }

        n--;

        cout << "Record Deleted Successfully." << endl;
    }
    else
    {
        cout << "Invalid Position." << endl;
    }

    cout << "---------------------------------------------------------------" << endl;
    cout << endl;

    // FINAL RECORDS

    cout << "Final Student Records" << endl << endl;

    cout << left << setw(5) << "ID";
    cout << left << setw(13) << "Name";
    cout << left << setw(20) << "Percentage";
    cout << left << setw(27) << "Grade" << endl;

    for (i = 0; i < n; i++)
    {
        cout << left << setw(5) << id[i];
        cout << left << setw(13) << name[i];
        cout << left << setw(20) << per[i];

        if (per[i] > 100 || per[i] < 0)
        {
            cout << "Invalid marks";
        }
        else if (per[i] >= 90)
            cout << left << setw(27) << "O";
        else if (per[i] >= 80)
            cout << left << setw(27) << "A+";
        else if (per[i] >= 70)
            cout << left << setw(27) << "A";
        else if (per[i] >= 60)
            cout << left << setw(27) << "B+";
        else if (per[i] >= 50)
            cout << left << setw(27) << "B";
        else if (per[i] >= 40)
            cout << left << setw(27) << "C";
        else
            cout << left << setw(27) << "F";

        cout << endl;
    }

    return 0;
}
