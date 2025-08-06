#include<bits/stdc++.h>
using namespace std;


/*void fn(int arr[],int s,int l)
{
    if(s>=l)
    {
        return ;
    }
    swap(arr[s],arr[l]);

    fn(arr,s+1,l-1);

}
*/

void fn(int arr[],int i,int n)
{
    if(i>=n-i-1 ) //i>=n/2
    {
        return ;
    }

    swap(arr[i],arr[n-i-1]);

    fn(arr,i+1,n);


}

int main()
{
    int n=0;
    cin>>n;
    int arr[n];

    for(int i =0 ;i<n;i++)
    {
        cin>>arr[i];
    }

 //fn(arr,0,n-1);
 fn(arr,0,n);

     for(int i =0 ;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    



    return 0;
}
