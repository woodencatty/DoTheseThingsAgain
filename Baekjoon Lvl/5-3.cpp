//3자리수 세개 곱해서 각 자릿수 숫자 횟수 세기

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int arr[10] = {0};
    int a, b, c, tg;
    int temp;

    cin >> a >> b >> c;
    tg = a * b * c;

    for (int i = 0; i < 10; i++)
    {
        temp = tg / (pow(10, i));
        if (temp == 0)
        {
            break;
        }
        else
        {
            temp = temp % 10;
            switch (temp)
            {
            case 0:
                arr[0]++;
                break;

            case 1:
                arr[1]++;
                break;

            case 2:
                arr[2]++;
                break;

            case 3:
                arr[3]++;
                break;

            case 4:
                arr[4]++;
                break;

            case 5:
                arr[5]++;
                break;

            case 6:
                arr[6]++;
                break;

            case 7:
                arr[7]++;
                break;

            case 8:
                arr[8]++;
                break;

            case 9:
                arr[9]++;
                break;
            }
        }
    }

    for (int j = 0; j < 10; j++)
    {
         cout << arr[j] <<'\n';
    }
    return 0;
}