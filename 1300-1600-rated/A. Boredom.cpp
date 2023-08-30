#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main (){
    int n;
    cin>>n;

    int maxi=-1;
    vector<ll>a(100005,0);

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[x]++; ///কয়টা নাম্বার আছে a[x] এ
        maxi=max(maxi,x); ///ম্যাক্স নাম্বার ওভারাল বের করার জন্য

    }

    vector<ll>b(100005,0);

    b[0]=0; ///০ হাজারটা থাকলেও ০,০ ই থাকবে
    b[1]=a[1]; ///১ যতগুলা থাকবে যোগ করলে ততই হবে for example: ৩ টা এক এর যোগফল ৩

    for(ll i=2;i<=maxi;i++){
        b[i]=max(b[i-1],b[i-2]+(a[i]*i)); ///for example b[2] equal হবে  max value between b[1] and the summation of b[0] and b[2] মানে a[2]*2
                                        
    }

    cout<<b[maxi];
}
 