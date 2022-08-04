/*
1  2  3
4  5  6
7  8  9
*/
#include<iostream>
using namespace std;

int main() {
    int N, i, j;
    cin >> N;
    
    i = 1;
    //Sol 1
    // while(i <= N*N){
    //     cout<<i<<'\t';
        
    //     if(i%N == 0){
    //         cout<<endl;
    //     }
    //     //Increamenting i
    //     i++;
    // }
    
    //Method 2
    int count = 1;
    while(i <= N){
        j = 1;
        while(j <= N){
            cout<<count<<' ';

            //Counting up as long as this loop continues
            count += 1;
            j++;
        }
        cout<<endl;

        i++;
    }
    return 0;
}