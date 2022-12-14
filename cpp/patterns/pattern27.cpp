/*
Dabang pattern
------------------
1  2  3  4  5  5  4  3  2  1
1  2  3  4  *  *  4  3  2  1
1  2  3  *  *  *  *  3  2  1
1  2  *  *  *  *  *  *  2  1
1  *  *  *  *  *  *  *  *  1
*/

#include<iostream>

using namespace std;

int main() {
    int N, i, j;
    cin>>N;
    i = 1;
    while(i < N){
        j = 1;
        while(j <= N - i + 1){
            cout<<j<<" ";
            j++;
        }

        j = 1;
        while(j <= 2 * (i-1)) {
            cout<<'*'<<" ";
            j++;
        }

        j = N - i + 1;
        while(j >= 1) {
            cout<<j<<" ";
            j--;
        }

        i++;

        cout<<endl;
    }
    return 0;
}