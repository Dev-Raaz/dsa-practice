/*
A  B  C
B  C  D
C  D  E
*/

#include<iostream>

using namespace std;

int main() {

    int i, j, N;

    cin>>N;

    i = 1;

    while(i <= N){

        j = 1;
        
        while(j <= N){
            char ch = 'A' + i + j - 2;
            cout << ch <<"  ";
            j++;
        }
        
        cout<<endl;

        i++;
    }

    return 0;
}