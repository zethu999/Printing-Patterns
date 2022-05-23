#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=i;j<=n-1;j++){
            cout<<"  ";
        }
        int k=i;
        for(j=1;j<=i;j++){
            cout<<k<<" ";
            k--;
        }
        k=2;
        for(j=1; j<=i-1; j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}
