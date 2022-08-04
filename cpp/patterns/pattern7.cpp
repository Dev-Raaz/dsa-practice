/*
                    i
                    
1                   1->1s
2  2                2->2s
3  3  3             3->3s
4  4  4  4          4->4s
5  5  5  5  5       5->5s

*/

#include<iostream>
using namespace std;

int main(){
    int i, j, N;
    cin >> N;

    i = 1; 

    while(i <= N){

        j = 1;
        while(j <= i){
            cout<<i<<"  ";
            j++;
        }

        cout<<endl;
        i++;
    }

    return 0;
}