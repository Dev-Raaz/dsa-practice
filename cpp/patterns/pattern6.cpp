/*
                    i
                    
*                   1*
*  *                2*
*  *  *             3*
*  *  *  *          4*
*  *  *  *  *       5*

*/
#include<iostream>
using namespace std;

int main() {
    int N, i, j;
    cin >> N;
    
    i = 1;
    while(i <= N){
        j = 1;
        while(j <= i){
            cout<<"*  ";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}