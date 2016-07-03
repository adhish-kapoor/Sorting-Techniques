#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1]){
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
