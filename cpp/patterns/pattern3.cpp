/*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/
#include<iostream>
using namespace std;

int main() {
    int N, i, j;
    cin >> N;
    
    i = 1;
    while(i <= N){
        j = 1;
        while(j <= N){
            cout<<j<<' ';
            
            //Increamenting j
            j++;
        }   

        cout<<endl;

        //Increamenting i
        i++;
    }
    
    return 0;
}