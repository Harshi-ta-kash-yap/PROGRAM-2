#include <iostream>
using namespace std;

class student
{
    int phno;

public:
    int rollno;
    string name;
    int age;
    bool gender;

    student()
    {
        cout << "display default constructor/ non parametric " << endl;
    }

    student(int r, string n, int a, int g)
    {
        rollno = r;
        name = n;
        age = a;
        gender = g;
        display();
    }

    student(student &a)
    {

        rollno = a.rollno;
        name = a.name;
        age = a.age;
        gender = a.gender;
        display();
    }
    void display()
    {
        cout << "\tRollno= ";
        cout << rollno << endl;
        cout << "\tName= ";
        cout << name << endl;
        cout << "\tAge= ";
        cout << age << endl;
        cout << "\tGender= ";

        cout << gender << endl;
    }
};
int main()
{
    // parametric constructors;
    // int arr[134];
    student i(1, "lakhan", 23, 0);
    student b;     // default
    student c = i; // copyconstructor
    // for (int i = 0; i < 2; i++)
    // {
    //     cout << "\nName= ";
    //     cin >> arr[i].name;
    //     cout << "Rollno=";
    //     cin >> arr[i].rollno;
    //     cout << "Age= ";
    //     cin >> arr[i].age;
    //     cout << "Gender= ";
    //     cin >> arr[i].gender;
    // }

    // for (int i = 0; i < 2; i++)
    // {
    //     arr[i].display();
    // }

    return 0;
}