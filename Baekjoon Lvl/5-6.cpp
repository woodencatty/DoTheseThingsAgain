#include <iostream>

using namespace std;

int main(){
    
    int repeat;
    cin >> repeat;

    int result = 0;
    int score_count = 0;
    char input;
    cin.get();
    for(int i=0; i<repeat; i++){
        
        while(true){
            input = cin.get();
            if(input=='O'){
                score_count ++;
                result = result + score_count;
            }else if(input== 'X'){
                score_count=0;
            }else if(input == '\n'){
                break;
            }
        }
        cout<<result<<'\n';
        result=0;
        score_count=0;


    }

    return 0;
}