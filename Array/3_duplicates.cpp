#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            cout<<a[i]<<endl;
        }
    }

}
