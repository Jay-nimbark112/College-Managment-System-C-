// College Managment System

#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <conio.h>

using namespace std;

struct student
{
    string fname;
    string lname;
    string Registration;
    string classes;
} studentData;

struct teacher
{
    string fst_name;
    string lst_name;
    string qualification;
    string exp;
    string subj;
    string pay;
    string lec;
    string cel_no;
    string blod_group;
    string serves;

} tech[50];

int main()
{
    int i = 0, j;
    char choice;
    string find;
    string srch;

    while (1)
    {
        system("cls");
        cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
        cout << "\n\n\t\tCOLLEGE MANAGMENT SYSTEM\n\n";
        cout << "\n\n\t\tMAIN SCREEN\n\n\n";
        cout << "Enter your choice: " << endl;
        cout << "1.Student information" << endl;
        cout << "2.Teachers information" << endl;
        cout << "3.Exit" << endl;
        cin >> choice;

        system("cls");

        switch (choice)
        {
        case '1':
        {
            while (1)
            {
                system("cls");
                cout << "\t\t\tSTUDENT INFORMATION AND BIO DATA SECTION\n\n\n";
                cout << "Enter your chice" << endl;
                cout << "1.Create new entry" << endl;
                cout << "2.Find and Display entry" << endl;
                cout << "3.Jump to main" << endl;
                cin >> choice;

                switch (choice)
                {
                case '1':
                {
                    ofstream f1("student.txt", ios::app);

                    for (int i = 0; choice != 'n' && choice != 'N'; i++)
                    {
                        if ((choice == 'y') || (choice == 'Y') || (choice == '1'))
                        {
                            cout << "Enter  First name: ";
                            cin >> studentData.fname;
                            cout << "Enter Last name: ";
                            cin >> studentData.lname;
                            cout << "Enter Registration number: ";
                            cin >> studentData.Registration;
                            cout << "Enter class: ";
                            cin >> studentData.classes;

                            f1 << studentData.fname << endl
                               << studentData.lname << endl
                               << studentData.Registration << endl
                               << studentData.classes << endl;
                            cout << "Do you want to enter data: ";
                            cout << "Press Y for Continue and N to Finish:";
                            cin >> choice;
                        }
                    }
                    f1.close();
                }
                    continue;

                case '2':
                {
                    ifstream f2("student.txt");

                    cout << "Enter first name to be displayed: ";
                    cin >> find;
                    cout << endl;
                    int notFound = 0;
                    for (j = 0; (j < i) || (!f2.eof()); j++)
                    {
                        getline(f2, studentData.fname);

                        if (studentData.fname == find)
                        {
                            notFound = 1;
                            cout << "First Name: " << studentData.fname << endl;
                            
                            cout << "Last Name: " << studentData.lname << endl;

                            getline(f2, studentData.Registration);
                            cout << "Registration No number: " << studentData.Registration << endl;
                            getline(f2, studentData.classes);
                            cout << "Class : " << studentData.classes << endl;
                        }
                    }
                    if (notFound == 0)
                    {
                        cout << "No Record Found" << endl;
                    }
                    f2.close();
                    cout << "Press any key two times to Proceed";
                    getch();
                    getch();
                }
                    continue;

                case '3':
                {
                    break;
                }
                }
                break;
            }
            continue;
        }
        case '2':
        {
            while(1)
            {
                system("cls");
                cout << "\t\t\tTEACHERS INFORMATION ANDD BIODATA SECTION\n\n\n";
                cout << "Enter you choice: " << endl;
                cout << "1.Create new Entry\n";
                cout << "2.Find and Display\n";
                cout << "3.Jump to main\n";
                cin >> choice;

                switch (choice)
                {
                case '1':
                {
                    ofstream t1("teacher.txt", ios::app);

                    for (i = 0; choice != 'n' && choice != 'N'; i++)
                    {
                        if ((choice == 'y') || (choice == 'Y') || (choice == '1'))
                        {
                            cout << "Enter First name: ";
                            cin >> tech[i].fst_name;
                            cout << "Enter Last name: ";
                            cin >> tech[i].lst_name;
                            cout << "Enter qualification: ";
                            cin >> tech[i].qualification;
                            cout << "Enter experiance(year): ";
                            cin >> tech[i].exp;
                            cout << "Enter the number of years in this school: ";
                            cin >> tech[i].serves;
                            cout << "Enter subject whose teach: ";
                            cin >> tech[i].subj;
                            cout << "Enter Lecture(per week): ";
                            cin >> tech[i].lec;
                            cout << "Enter pay: ";
                            cin >> tech[i].pay;
                            cout << "Enter Phone Number: ";
                            cin >> tech[i].cel_no;
                            cout << "Enter Blood Group: ";
                            cin >> tech[i].blod_group;  

                            t1 << tech[i].fst_name << endl
                               << tech[i].lst_name << endl
                               << tech[i].qualification << endl
                               << tech[i].exp << endl
                               << tech[i].serves << endl
                               << tech[i].subj <<endl
                               << tech[i].lec << endl
                               << tech[i].pay << endl
                               << tech[i].cel_no << endl
                               << tech[i].blod_group << endl;

                            cout << "Do you want Enter Data: ";
                            cin >> choice;
                        }
                    }

                    system("cls");

                    t1.close();
                }
                    continue;

                case '2':
                {
                    ifstream t2("teacher.txt");

                    cout << "Enter name to be displayed: ";
                    cin >> find;
                    cout << endl;
                    int notFound = 0;
                    for (j = 0; ((j < i) || (!t2.eof())); j++)
                    {
                        getline(t2, tech[j].fst_name);

                        if(tech[j].fst_name ==find)
                        {
                            notFound = 1;
                            cout << "First name: " << tech[j].fst_name << endl;
                            getline(t2, tech[j].lst_name);
                            cout << "Last name: " << tech[j].lst_name << endl;
                            getline(t2, tech[j].qualification);
                            cout << "Qualification: " << tech[j].qualification << endl;
                            getline(t2, tech[j].exp);
                            cout << "Experiecne: " << tech[j].exp << endl;
                            getline(t2, tech[j].serves);
                            cout << "numbers of years in this school: " << tech[j].serves << endl;
                            getline(t2, tech[j].subj);
                            cout << "subject whose teach: " << tech[j].subj << endl;
                            getline(t2, tech[j].lec);
                            cout << "Enter lacture (per week): " << tech[j].lec << endl;
                            getline(t2, tech[j].pay);
                            cout << "pay: " << tech[j].exp << endl;

                            getline(t2, tech[j].cel_no);
                            cout << "Phone Number: " << tech[j].cel_no << endl;

                            getline(t2, tech[j].blod_group);
                            cout << "Blood Group: " << tech[j].blod_group << endl;
                        }
                    }
                    t2.close();

                    if (notFound == 0)
                    {
                        cout << "No Record Found" << endl;
                    }
                    cout << "Press any key two times to proceed";
                    getch();
                    getch();
                }
                    continue;

                case '3':
                {
                    break;
                }
                }
                break;
            }
            continue;
        }
        case '3':
        {
            break;
        }
        }
        break;
    }
}
