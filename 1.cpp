#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int a, b;
    ifstream input ("1.txt");
    input >> a >> b;
    int mas[b];
    for (int i = 0; i < b; i++){
        input >> mas[i];
    }
    int t = 0;
    for (int i = 0; i < b; i++){
        for(int j = 0; j < b - 1; j++){
            if (mas[j] > mas[j+1]){
                t = mas[j];
                mas[j] = mas[j+1];
                mas[j+1] = t;
            }
        }
    }
    int m = 0;
    for(int i = 0; i < b; i++){
        if (a - mas[i] >= 0 ){
            a -= mas[i];
            m++;
        }
    }
    cout << m << " ";
    for(int i = m; i < b; i++){
        if(a + mas[m-1] - mas[i] >= 0){
            a = a + mas[m-1] - mas[i];
            m = i + 1;
        }
    }
    cout << mas[m - 1];
    return 0;
}
