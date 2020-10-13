//que2

#include<bits/stdc++.h>
using namespace std;
vector<int> issub(string s1, string s2) 
{ 
    vector<int> ans;
    int m,n,i,j;
    m=s1.length();
    n=s2.length();
    for(i=0;i<=n-m;i++) 
    { 
        for(j=0;j<m;j++) 
            if(s2[i+j]!=s1[j]) 
                break; 
        if(j==m) 
            ans.push_back(i); 
    } 
    ans.push_back(-1);
    return ans;
}
int main()
{
    string s1,s2;
    s1="XYYZXZYZXXYZ";
    s2="XYZ";
    int i,j,n;
    vector<char> a;
    vector<pair<int,string> > pi;
    for(i=0;i<s2.length();i++)
    {
        a.push_back(s2[i]);
    }
    do
    {
        string s;
        for(i=0;i<s2.length();i++)
            s+=a[i];
        vector<int> ans=issub(s,s1);
        for(i=0;i<ans.size()-1;i++)
        {
            pi.push_back({ans[i],s});
        }
    }
    while(next_permutation(a.begin(),a.end()));
    sort(pi.begin(),pi.end());
    for(i=0;i<pi.size();i++)
    {
        cout<<"substring "<<pi[i].second<<" is present at index "<<pi[i].first<<endl;
    }
    return 0;
}