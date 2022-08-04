/*
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/
#include<iostream>
using namespace std;

int main() {
    int N, i, j;
    cin >> N;
    
    i = 1;
    while(i <= N){
        j = N;
        while(j >= 1){
            cout<<j<<' ';
            
            //Increamenting j
            j--;
        }   

        cout<<endl;

        //Increamenting i
        i++;
    }
    
    return 0;
}