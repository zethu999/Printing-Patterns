#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the butterfly nummber :";
    cin>>n;
    cout<<endl;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        int sp;
        sp = ((2*n)-(2*i));
        for(int j=1; j<=sp; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        int sp;
        sp = ((2*n)-(2*i));
        for(int j=1; j<=sp; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"\n\n";

    /*

    for(int i=1; i<=2*n; i++){
        for(int j=i; j<=2*n; j++){
            int k;
            for(int k=1; k<=j; k++){
                cout<<"*";
            }
            for(;k<=(2*n)-(2*i); k++){
                cout<<" ";
            }
            for(;k<=j;k++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
*/}