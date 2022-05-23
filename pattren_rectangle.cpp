#include<iostream>
using namespace std;
int main()
{
    int rows,col;
    cout<<"Enter the number of rows and columns of rectangle"<<endl;
    cin>>rows>>col;
    
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"\n\n";
     for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<i ;
        }
        cout<<endl;
    }
    cout<<"\n\n";
     for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<j ;
        }
        cout<<endl;
    }

    return 0;
}