/*
A  B  C
A  B  C
A  B  C
*/

#include<iostream>

using namespace std;


int main() {

    int N, i, j;
    cin>>N;

    i = 1;
    while(i <= N){

        j = 1;
        char ch = 'A';
        while(j <= N){

            cout<<(char)(ch + (j - 1))<<"  ";
            
            j++;
        }
        cout<<endl;

        i++;
    }

    return 0;
}