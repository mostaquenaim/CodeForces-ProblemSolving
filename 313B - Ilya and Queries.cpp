
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int m,l,r,c[100001];
    
    c[0]=0;
    c[1]=0;
    
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            c[i+1]=c[i]+1;
        }
        else{
            c[i+1]=c[i];
        }
    }
    
    
    cin>>m;
    
    for(int i=0;i<m;i++){
        cin>>l>>r;
        cout<<c[r]-c[l]<<endl;
    }
}
