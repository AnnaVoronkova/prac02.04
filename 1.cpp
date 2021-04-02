#include <iostream>
using namespace std;

int main(){
    int k = 0;
    for(int i = 2422000; i <= 2422080; i++){
        for(int j = 2; j < i; j++){
            if(i%j == 0){
               k++;
            }
        }
        if (k == 0){
            cout << i << " ";
        }
        k = 0;
    }
    return 0;
}
