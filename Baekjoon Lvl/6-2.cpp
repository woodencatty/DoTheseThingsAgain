#include <iostream>
#include <cmath>

using namespace std;

int d(int n)
{
    int res = n;
    int tmp = 0;

    for (int i = 0; i < 5; i++)
    {
        tmp = n / pow(10, i);
        tmp = tmp % 10;
        res = res + tmp;
    }

    return res;
}

int main()
{
    int a[10000] = {0};
    int tmp;
    for (int i = 0; i < 10001; i++)
    {
        tmp = d(i);
        if (tmp < 10001)
        {
            a[tmp]++;
        }
    }

    for (int i = 0; i < 10000; i++)
    {
        if (a[i] == 0)
        {
            cout << i << '\n';
        }
    }

    return 0;
}