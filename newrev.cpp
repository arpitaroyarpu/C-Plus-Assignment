#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n, row, col, count=1;

    cout<<"Enter the number of lines: ";
    cin>>n;

    for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            cout<<" ";
        }
        for(col=1; col<=row; col++)
        {
            cout<<col;
        }
        for(col=row-1; col>=1; col--)
        {
            cout<<col;
        }
        cout<<endl;
    }
}



