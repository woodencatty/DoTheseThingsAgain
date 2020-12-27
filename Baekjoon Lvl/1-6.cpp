#include <iostream>

using namespace std;
    
int main(){
    
    double a, b; // 소수 나누기 소수 = 소수 // 정수 나누기 정수 = 무조건 정수
    double c;
    
    cin >> a >> b;
    
    c = a/b;
    cout.precision(10); // 소수점 자리 지정
    cout << c << endl;
    
    return 0;
}