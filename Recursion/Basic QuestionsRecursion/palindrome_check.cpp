#include<bits/stdc++.h>
using namespace std;

int fn(string str,int i,int flag)
{
    if(i>= (str.length())/2)
    {
        return flag;
    }

    if(str[i]!=str[(str.length())-i-1])
    {
        flag=0;
        return flag;
    }
    return(fn(str,i+1,flag));

}

int main()
{
    string str;
    cin>>str;

    //fn(str,0,1);

    if(fn(str,0,1))
    {
        cout<<"it is PAL";
    }
    else
    {
        cout<<"NNNNNNNNNNNNNN";
    }


return 0;
}