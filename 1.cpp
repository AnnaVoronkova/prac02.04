#include <iostream>
using namespace std;

int main(){
    for(int i = 95632; i <= 95700; i++){
        int mas[1000];
        int a = 0;
        int k = 0;
        for(int j = 2; j <= i; j+=2){
            if(i%j == 0){
               a++;
               mas[k] = j;
               k++;
            }
        }
        if(a == 6){
            cout << mas[0] << " " << mas[1] << " " << mas[2] << " " << mas[3] << " " << mas[4] << " " << mas[5] << endl;
        }
    }
    return 0;
}


