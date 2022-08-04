/*

A  A  A
B  B  B
C  C  C

*/

#include<iostream>

using namespace std;

int main() {

    int i = 1, j, N;
    char ch = 'A';
    cin >> N;

    while(i <= N){
        j = 1;
        while(j <= N){
            cout<<(char)(ch + (i-1))<<"  ";

            j++;
        }
        cout<<endl;

        i++;
    }

    return 0;
}