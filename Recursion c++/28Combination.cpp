// #include <iostream>
// using namespace std;
// int fact(int n)
// {
//     if (n == 0)
//         return 1;

//     return fact(n - 1) * n;
// }

// // iterative
// int NCR(int n, int r)
// {
//     int num, den;
//     num = fact(n);
//     den = fact(r) * fact(n - r);

//     return num / den;
// }

// // recursive
// int ncr(int n, int r)
// {
//     if (n == r || r == 0)
//         return 1;

//     return ncr(n - 1, r - 1) + ncr(n - 1, r);
// }

// int main()
// {
//     cout << ncr(5, 3) << endl;
//     cout << NCR(10, 2);
//     return 0;
// }

#include <iostream>
using namespace std;

int fun(int n)
{
    int x = 0;
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}
int main()
{
    int r;
    r = fun(5);
    cout << r << endl;

    r = fun(5);
    cout << r << endl;
    return 0;
}