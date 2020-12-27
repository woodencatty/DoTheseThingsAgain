#include <iostream>
#include <cmath>

using namespace std;

int check_han(int n)
{
    int res = 1;
    int nmb1 = n % 10;
    int nmb2 = (n / 10) % 10;
    int nmb3 = (n / 100) % 10;
    int nmb4 = (n / 1000) % 10;

    if(nmb4 > 0){
        if ((nmb1 - nmb2) != (nmb2 - nmb3))
        {
            res = 0;
        }else if((nmb2 - nmb3) != (nmb3 - nmb4)){
            res = 0;
        }
        return res;
    }

    if (nmb3 > 0)
    {
        if ((nmb1 - nmb2) != (nmb2 - nmb3))
        {
            res = 0;
        }
    }
    return res;
}

int main()
{

    int a = 0;
    int han_count = 0;
    cin >> a;

    for (int i = 1; i < a + 1; i++)
    {
        if (check_han(i))
        {
            han_count++;
        }
    }
    cout << han_count;

    return 0;
}