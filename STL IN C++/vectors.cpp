#include <iostream>
#include <vector>

using namespace std;

void explainVector() 
{
    vector <int> v;
    
    // or it can be as vector<pair<int,int>>;
    
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    
    for(auto it = v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    
    for(auto it : v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    //delete a element in vector
    v.erase(v.begin()+1);
    for(auto it : v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    vector <int> v1;
    
    // or it can be as vector<pair<int,int>>;
    
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    
     v1.erase(v1.begin()+1,v1.begin()+3);//+1 index
     for(auto it : v1)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    
    //insert
    v.insert(v.begin(),99);
    for(auto it : v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    v.insert(v.begin()+1,v1.begin(),v1.end());
    for(auto it : v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    
    //small functions
    
    v.pop_back();
    for(auto it : v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    cout<<v.size();
    cout<<endl;
    v1.swap(v);
    
    for(auto it : v1)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    v1.clear();
     //   v1.push_back(10);
    cout<<v1.empty();
    

}

int main() {
    explainVector();
    return 0;
}
