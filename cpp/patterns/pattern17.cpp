/*
A  
A  B 
A  B  C
A  B  C  D
A  B  C  D  E
*/

#include<iostream>

using namespace std;

int main() {
    int N, i, j;

    cin>>N;

    i = 1;
    while(i <= N){
        j = 1;
        while(j <= i){
            char ch = 'A' + j - 1;
            cout<<ch<<"  ";    
            j++;
        }

        cout<<endl;

        i++;
    }

    return 0;
}