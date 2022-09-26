#include <iostream>
using namespace std;

class greatest
{
    int a, b, c;

public:
    void input()
    {
        cout << "\n\nEnter three number " << endl;
        cin >> a >> b >> c;
    }
    void gr()
    {
        if (a > b && a > c)
            cout << "greatest number is " << a;
        else if (b > c && b > a)
            cout << "greatest number is " << b;

        else
            cout << "greatest number is " << c;
    }
};

int main()
{
    greatest g;
    g.input();
    g.gr();
}
