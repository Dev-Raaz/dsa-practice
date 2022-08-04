/*
*  *  *  *
*  *  *
*  *
*
*/

#include<iostream>

using namespace std;

int main() {
    int i, j, N;

    cin >> N;

    i = N;

    while(i >= 1){
        j = 1;
        while(j <= i){
            cout<<"*  ";
            j++;
        }
        
        cout<<endl;

        i--;
    }
    return 0;
}