#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int a;
    cin >> a;

    double arr[1000] = {0};
    for(int i=0; i<a; i++){
        cin >> arr[i];
    }

    double max = *std::max_element(arr, arr+a);
    double avg = 0;
    for(int i=0; i<a; i++){
        arr[i] = arr[i]/max*100;
        avg = avg+arr[i];
    }

    avg = avg / a;

    cout << avg;

    return 0;
}

//함수에대해 좀 더 공부..안하겠지