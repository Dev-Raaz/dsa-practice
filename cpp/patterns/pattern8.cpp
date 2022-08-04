/*
Count up until the pattern iteration completes
                    
1                   
2  3                
4  5  6             
7  8  9  10          
11  12  13  14  15       

*/

#include<iostream>
using namespace std;

int main(){
    int i, j, N;
    cin >> N;

    i = 1; 
    int count = 1;

    while(i <= N){

        j = 1;
        while(j <= i){
            cout<<count<<"   ";

            //Counting up as long as this loop continues
            count+=1;
            j++;
        }

        cout<<endl;
        i++;
    }

    return 0;
}