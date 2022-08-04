/*
A  
B  C
C  D  E
D  E  F  G  
*/

#include<iostream>

using namespace std;


int main() {
    int N, i, j;

    cin>>N;

    i = 1;

    while(i <= N){
        j = 1;

        char ch = 'A' + i - 1;

        while(j <= i){
            cout<<ch<<"  ";
            ch += j;

            j++;
        }

        cout<<endl;

        //
        i++;
    }

    return 0;
}