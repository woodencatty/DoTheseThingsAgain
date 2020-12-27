#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int a;
    cin >> a;

    int res = 0;
    char tmp = 0;
    cin.get();
    for(int i=0; i<a; i++){
        tmp = cin.get();
        res += ((int)tmp)-48;
    }
    cout<<res;

    return 0;
}