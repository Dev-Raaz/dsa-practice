/*
A
B  B
C  C  C
*/

#include<iostream>

using namespace std;


int main(){
    int N, i, j;
    cin>>N;

    i = 1;
    while(i <= N){
        j = 1;
        
        while(j <= i){
            char ch = 'A' + i - 1;
            cout<<ch<<"  ";

            j++;
        }
        cout<<endl;

        i++;
    }

    return 0;
}