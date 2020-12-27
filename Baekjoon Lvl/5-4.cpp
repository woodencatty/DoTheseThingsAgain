#include <iostream>

using namespace std;

int main()
{

    int arr[10];
    int a;
    int count = 1;
    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        arr[i] = a % 42;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
            else
            {
                if (j == i - 1)
                {
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}