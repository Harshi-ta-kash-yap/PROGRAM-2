#include <iostream>
using namespace std;

class factorial
{
    // private:

    int n1, f = 1;

public:
    int n;
    void input();
    void calc();
    void display();
};
//:: trough access modifer we can access private properties
void factorial::input()
{
    cout << "\n\nEnter a Number to print factorial ";
    cin >> n;
}
void factorial::calc()
{
    n1 = n;
    if (n == 0 || n == 1)
    {
        cout << "factorial of " << n << "  is  1 .";
    }
    else
    {
        while (n > 0)
        {
            f = f * n;
            n--;
        }
    }
}

void factorial::display()
{
    cout << " \n\nfactorial of " << n1 << "  is " << f;
}

int main()
{
    factorial f;
    f.input();
    f.calc();
    f.display();
    cout << f.n;
    return 0;
}