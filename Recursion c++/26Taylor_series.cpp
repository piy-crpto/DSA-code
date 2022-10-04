#include <iostream>
using namespace std;
// recursive
double eR(int x, int n)
{
    static double p = 1, f = 1;
    double r;

    if (n == 0)
    {
        return 1;
    }

    r = eR(x, n - 1);
    p = p * x;
    f = f * n;

    return r + (p / f);
}

// Iterative
double eI(int x, int n)
{
    double s = 1;
    int i;
    double num = 1;
    double den = 1;

    for (i = 1; i <= n; i++)
    {
        num = num * x;
        den = den * i;
        s += num / den;
    }
    return s;
}
int main()
{
    // cout << eR(1, 10);
    cout << eI(1, 10);
}