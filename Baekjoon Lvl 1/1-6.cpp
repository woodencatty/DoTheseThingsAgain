#include <iostream>

using namespace std;
    
int main(){
    
    double a, b; // �Ҽ� ������ �Ҽ� = �Ҽ� // ���� ������ ���� = ������ ����
    double c;
    
    cin >> a >> b;
    
    c = a/b;
    cout.precision(10); // �Ҽ��� �ڸ� ����
    cout << c << endl;
    
    return 0;
}