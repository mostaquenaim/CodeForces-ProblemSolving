
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    

    
    
    while(t--){
        long long n,k;
        cin>>n>>k; 
        
        if(k >= n) 
        {
            cout<<"1"<<endl;
        }
        
        else{
            long long temp=2;
            bool flag=true;
            
            long long ans=n;
            
            while(temp <= sqrt(n) && temp <= k){
                if(n % temp == 0){
                    
                    if(n / temp <= k)
                    {
                        ans = temp;
                        flag=false; 
                        break;
                    }
                    else {
                        ans = n/temp;
                        flag=false;
                    }
                }
                temp++;
            }
            
            if(flag){
                cout<<n<<endl;
            }
            else{
                cout<<ans<<endl;
            }
        }
        
        
    }
}