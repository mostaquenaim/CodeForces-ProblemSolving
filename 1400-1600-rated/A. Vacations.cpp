#include <bits/stdc++.h>
using namespace std;
typedef long long                        ll;
#define N 100000
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

bool isPrimeSqrOrDblSqr(int n)
{
    int x=sqrt(n); ///eg. n=81,x=9
    if(x*x==n) {
        if(isPrime(x)){
            return true;
        }
        else { ///9 is not prime
            int y=sqrt(x); ///y=3,x=9
            if(y*y==x && isPrime(y)){
                return true;
            }
            else return false;
        }
    }
    else return false;

}

bool isPrimeOrSqr(int n){
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            if(n/i==i && isPrime(i))
            return true;
            else return false;
        }
    }

    return true;


}



void solve(){

    int n,a[101],totalrest=0;
    cin>>n;

    int gym[101]={0},rest[101]={0},cont[101]={0};

    rest[0]=1;
    for (int i=1;i<=n;i++) cin>>a[i];

    for(int i=1;i<=n;i++){

        if(a[i]==0)
        {
            rest[i]=1;
         //   cout<<i<<endl;
            totalrest++;
        }
        else if(a[i]==1){
            if(cont[i-1]==0)
                cont[i]=1;
            else
            {
                rest[i]=1;
                totalrest++;
            //    cout<<i<<endl;
            }
        }
        else if(a[i]==2){
            if(gym[i-1]==0)
                gym[i]=1;
            else
            {
                totalrest++;
                rest[i]=1;
              //  cout<<i<<endl;
            }
        }
        else if(a[i]==3){
            if(rest[i-1]==1) {
                   // int threecnt=0;
                while(a[i+1]==3){
                    i++;
                }

            }
            else if(cont[i-1]==0){
                cont[i]=1;
            }
            else gym[i]=1;
        }
    }

    cout<<totalrest;




}

int main(){

 //   int arr[N+1],b=1;
  //  for(int i=1;i<=N;i++){
    //    arr[i]=b;
      //  b+=i+1;
    //}



   // ll test=2,product=0;
//    ll arr[1000000001];

	int t;
	//cin>>t;
    t=1;
	while(t--){
		solve();
}
}