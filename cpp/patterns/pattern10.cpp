/*
Start counting down from each i as long as the pattern iterations hold.
                    
1                   
2  1                
3  2  1             
4  3  2  1          
5  4  3  2  1       

*/

#include<iostream>
using namespace std;

int main(){
    int i, j, N;
    cin >> N;

    i = 1; 

    //Method 1
    while(i <= N){
        j = 1;
        int count = i;
        while(j <= i){
            cout << count << "  ";
            count -= 1;

            //Updating j
            j++;
        }
        cout<<endl;

        //Updating i
        i++;
    }
    
    return 0;
}