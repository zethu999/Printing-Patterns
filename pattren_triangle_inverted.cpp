#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter length of the triangle :";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"\n\n";

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n";

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n";
    //***************************************************************************************

    for(int i=n; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"\n\n";

    for(int i=n; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n";

    for(int i=n; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n";
    //**************************************************************************
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"\n\n";

    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n";

    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n";
    //******************************************************************************************************

for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"\n\n";

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n";

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n";
}

