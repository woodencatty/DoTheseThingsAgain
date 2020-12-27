#include <iostream>

using namespace std;

int main()
{

    int number_of_TC;
    cin >> number_of_TC;

    double student_count = 0;
    double good_student = 0;
    int score_pool[1000] = {0};
    double avg = 0;
    double result = 0;
    cout << fixed;
    cout.precision(3);

    for (int i = 0; i < number_of_TC; i++)
    {
        cin >> student_count;
        for (int j = 0; j < student_count; j++)
        {
            cin >> score_pool[j];
            avg = avg + score_pool[j];
        }
        avg = avg / student_count;

        for (int k = 0; k < student_count; k++)
        {
            if (score_pool[k] > avg)
            {
                good_student++;
            }
        }
        result = (good_student / student_count) * 100;
        cout << result << "%\n";
        good_student = 0;
        avg = 0;
    }

    return 0;
}