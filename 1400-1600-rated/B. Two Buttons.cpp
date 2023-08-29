#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,count=0;
    cin>>n>>m;

    if(m>n){
    while(1){
        if(m%2!=0){
        m++;
        count++;
        }
        else{
            m/=2;
            count++;

            if(m<n){
                count+=n-m;
                break;
            }

            else if(m==n){

            break;

            }


        }
        }
        cout<<count;



    }

    else cout<<n-m;
}