#include <iostream>
using namespace std;
int powR(int m, int n)
{
    if (n == 0)
        return 1;

    return powR(m, n - 1) * m;
}

int pow(int m, int n)
{
    if (n == 0)
        return 1;

    if (n % 2 == 0)
    {
        return pow(m * m, n / 2);
    }
    else
    {
        return m * pow(m * m, (n - 1) / 2);
    }
}

// Implementing on less time complexity

int main()
{
    cout << powR(2, 5);
    // cout<<pow(2,5);
}