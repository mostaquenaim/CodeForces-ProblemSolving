#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,t,i=0,j=0,sum=0,count=0,maxB=0;
    cin>>n>>t;
    int a[n];





    while(n--){
        cin>>a[i];
//cout<<"a="<<a[i]<<" sum="<<sum<<" count="<<count<<" max="<<maxB<<endl;
        if(sum+a[i]<=t){
            sum+=a[i];

            count++;
        }

        else {
                sum+=a[i];
                count++;
                while(sum>t){
                    count--;
                    sum-=a[j++];
                }
        }

        maxB=max(maxB,count);
        i++;
    }

    

    cout<<maxB;
}
int main()
{
    int t;
    t=1;

    while(t--){

        solve();
    }



}