/*
A  B  C
D  E  F
G  H  I
*/

#include<iostream>

using namespace std;

int main() {
    int N, i, j;

    cin>>N;

    i = 1;
    char ch = 'A';
    while(i<=N){
        j = 1;
        while(j <= N){
            
            cout<<ch<<"  ";
            ch = ch + 1;
            j++;
        }

        cout<<endl;

        i++;
    }

    return 0;
}