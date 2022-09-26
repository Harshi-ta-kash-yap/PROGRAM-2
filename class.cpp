#include <iostream>
using namespace std;

class student
{
public:
    int rollno;
    string name;
    int age;
    bool gender;

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

    student arr[25];
    for (int i = 0; i < 2; i++)
    {
        cout << "\nName= ";
        cin >> arr[i].name;
        cout << "Rollno=";
        cin >> arr[i].rollno;
        cout << "Age= ";
        cin >> arr[i].age;
        cout << "Gender= ";
        cin >> arr[i].gender;
    }

    for (int i = 0; i < 2; i++)
    {
        arr[i].display();
    }
    return 0;
}