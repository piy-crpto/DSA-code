#include <iostream>
using namespace std;
int mfib(int n)
{
    int F[10];
    for (int i = 0; i < 10; i++)
    {
        F[i] = -1;
    }
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = mfib(n - 2);

        if (F[n - 1] == -1)
            F[n - 1] = mfib(n - 1);

        return F[n - 1] + F[n - 2];
    }
}

int rfib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return rfib(n - 1) + rfib(n - 2);
}

int ifib(int n)
{
    int t0 = 0, t1 = 1, s = 0, i;
    if (n <= 1)
        return n;

    for (i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}
int main()
{
    // int i;
    // int F[10];
    // for(i=0;i<10;i++)
    // {
    //     F[i] = -1;
    // }
    cout << "Fib series is " << endl;
    cout << mfib(6) << endl;
    // cout<<rfib(6)<<endl;
    // cout << ifib(5) << endl;
}
