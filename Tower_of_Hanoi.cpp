#include<iostream>
using namespace std;


void TowerofHanoi(int n, char src, char dest, char helper) {
    if(n==0){
        return;
    }
    TowerofHanoi(n-1, src, helper, dest); 
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    TowerofHanoi(n-1, helper, dest, src);
}

int main() {
    int n;
    cout<<"Enter number of disks : ";
    cin>>n;
    TowerofHanoi(n,'A','C','B');
}
