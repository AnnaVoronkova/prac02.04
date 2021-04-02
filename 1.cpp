#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;

int main(){
    int a, b;
    ifstream input ("2.txt");
    input >> a >> b;
    int mas[b];
    for(int  i = 0; i < b; i++){
        input >> mas[i];
    }
    int t = 0;
    for(int i = 0; i < b; i++){
        for (int j = 0; j < b - 1; j++){
            if(mas[j] > mas[j+1]){
                t = mas[j];
                mas[j] = mas[j+1];
                mas[j+1] = t;
            }
        }
    }
    int k = 0;
    for(int i = 0; i < b; i++){
        if(a - mas[i] >= 0){
            a -= mas[i];
            k++;
        }
    }
    cout << k << " ";
    for(int i = k; i < b; i++){
        if(a - mas[i] + mas[k-1] >= 0){
            a = a - mas[i] + mas[k-1];
            k = i + 1;
        }
    }
    cout << mas[k - 1];
    return 0;
}
