/*
1  2  3  4
   2  3  4
      3  4
         4
*/

#include<iostream>

using namespace std;

int main() {
   int i, j, N;
   cin>>N;

   i = 1;

   while(i <=  N) {
      j = 1;
      while(j <= i - 1) {   
         cout<<"   ";
         j++;
      }
      
      j = 1;
      while(j <= N - i + 1){
         cout<<(j + i - 1)<<"  ";
         j++;
      }
      cout<<endl;

      i++;
   }

   return 0;
}