/*
A  B  C
B  C  D
E  F  G
*/

#include<iostream>

using namespace std;

int main() {
    int i, j, N;

    cin>>N;
    i = 1;

    while(i <= N){
        j = 1;

        //Initializing the first character based on the i value
        char ch = 'A' + i - 1;
        
        while(j <= N){
            cout<<ch<<"  ";
            ch = ch + j;
            j++;
        }
        cout<<endl;

        i++;
    }

    return 0;
}