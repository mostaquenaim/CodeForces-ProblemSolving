#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int m,s,tmh,tml=1,maxi[101],mini[101],n,flag=false;
    cin>>m>>s;
    tmh=m;

    if(s==0){
        if(m==1) cout<<"0 0";
        else cout<<"-1 -1";
    }
    else if((s+8)/9>m) cout<<"-1 -1"<<endl;
    else{
            for(int i=9;i>1;i--){

            n= s/i;
            if(n>0)
            {
                flag=true;


            while((n--)-1){
                maxi[tml++]=i;
                mini[tmh--]=i;
            }

            maxi[tml++]=i; ///index 1 e 9 max


            if(s/i==m){
                mini[tmh--]=i;
            }

            else if(s%i==0 && s/i!=m){
                mini[tmh--]=i-1;
                mini[1]=1;
                while(1){

                if(tmh!=1) mini[tmh--]=0;
                if(tml<m+1) maxi[tml++]=0;
                else break;
                }
            }


            if(s%i!=0){
                    mini[tmh--]=i; ///min er last index 9, now ...9
                maxi[tml++]=s%i; ///max er 2nd index 2, now 92...

            if(tmh==1) {

               mini[1]=s%i;

                }
                else{
                    mini[1]=1;
                    mini[tmh--]=(s%i)-1;
                    maxi[tml++]=0;
                    while(1){
                            if(tmh==1) break;
                            maxi[tml++]=0;
                    mini[tmh--]=0;

                    }
                }
            }
            }


            if(flag) break;

        }
        if(!flag){
            mini[tml]=1;
            maxi[tml++]=1;
            while(1){
                mini[tml]=0;
                maxi[tml++]=0;
                if(tml>m) break;
            }
        }

        tmh=1;
        while(1){
                cout<<mini[tmh++];
                if(tmh>m) break;
            }
            tmh=1;
            cout<<" ";

            while(1){
                cout<<maxi[tmh++];
                if(tmh>m) break;
            }
    }
    }
 