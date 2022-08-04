/*
1  1  1  1
   2  2  2
      3  3
         4
*/

#include<iostream>

using namespace std;

int main() {

   int i, j, N;
   cin >> N;

   i = 1;
   while(i <= N){

      j = 1;
      while(j <= i - 1){
         cout<<"   ";

         j++;
      }

      j = 1;
      while(j <= N - i + 1){
         cout<<i<<"  ";

         j++;
      }

      cout<<endl;

      i++;
   }

   return 0;
}