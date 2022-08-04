/*
      1      
   1  2  1   
1  2  3  2  1
*/

#include<iostream>

using namespace std;

int main() {

   int N, i, j;

   cin >> N;

   i = 1;
   while(i <= N){

      j = 1;
      while(j <= N - i){
         cout<<"   ";

         j++;
      }

      j = 1;
      while(j <= i){
         cout<<j<<"  ";
         j++;
      }

      j-=2;
      while(j >= 1){
         cout<<j<<"  ";

         j--;
      }

      cout<<endl;
      
      i++;
   }

   return 0;
}