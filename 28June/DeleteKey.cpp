#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
        cin>>arr[i];
    int k;
    cin>>k;
    int j=0;
    for(int i=0;i<n;++i)
    {
        if(arr[i]!=k)
            arr[j++]=arr[i];
    }
    for(int i=0;i<j;++i)
        cout<<arr[i]<<" ";

}
