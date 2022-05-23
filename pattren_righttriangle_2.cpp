#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter length of the triangle : ";
    cin>>n;

   for(int i=1; i<=n; i++){
       for(int j=1; j<=n; j++){
           if(j<=n-i){
               cout<<" ";
           }else{
               cout<<"*";
           }
       }
       cout<<endl;
   }

   cout<<"\n\n";
/*
   for(int i=n; i>=1; i--){
       for(int j=n; j>=1; j--){
          if(j>=n-i){
              cout<<" ";
          }else{
              cout<<"*";
          }
       }
       cout<<endl;
   }

   cout<<"\n\n";

   for(int i=1; i<=n; i++){
       for(int j=n; j>=1; j--){
         if(i!=j){
             cout<<" ";
         }else{
             cout<<"*";

         }
                }
       cout<<endl;
   }

   cout<<"\n\n";

   for(int i=n; i>=1; i--){
       for(int j=1; j<=n; j++){
           int k=j;
         while(i!=k){
             cout<<" ";
             k++;
         }
         cout<<"*";
          }
       cout<<endl;
   }
*/
    
    
}