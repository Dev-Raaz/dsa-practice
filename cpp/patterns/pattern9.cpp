/*
Start counting from each i as long as the pattern iterations hold.
                    
1                   
2  3                
3  4  5             
4  5  6  7          
5  6  7  8  9       

*/

#include<iostream>
using namespace std;

int main(){
    int i, j, N;
    cin >> N;

    i = 1; 

    //Method 1
    // while(i <= N){
    //     j = 1;
    //     int count = i;
    //     while(j <= i){
    //         cout << count << "  ";
    //         count += 1;

    //         //Updating j
    //         j++;
    //     }
    //     cout<<endl;

    //     //Updating i
    //     i++;
    // }
    
    //Method 2
    i = 0;
    while(i < N){
        j = 1;
        while(j <= i + 1){
            cout << j+i << "  ";
            j += 1;
        }
        cout<<endl;

        //Updating i
        i++;
    }

    return 0;
}