#include <bits/stdc++.h>
using namespace std;
vector<string> res;
void fun(string str, int i ,int n)
{
    if(i==n)
        res.push_back(str);
    else
    {
        for(int j=i;j<=n;j++)
        {
            char temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            
            fun(str,i+1,n);
            
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        res.clear();
        //sort(str.begin(),str.end());
        fun(str,0,str.size()-1);
        sort(res.begin(),res.end());
        int i;
        for( i=1;i<res.size();i++)
        {
            if(res[i]!=res[i-1])
            cout<<res[i-1]<<" ";
        }
        cout<<res[i-1]<<" ";
        cout<<endl;
        
    }
    return 0;
}
