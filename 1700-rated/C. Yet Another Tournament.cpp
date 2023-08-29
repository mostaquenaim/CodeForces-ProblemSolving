#include <bits/stdc++.h>
using namespace std;
typedef long long                        ll;
 
void bubbleSort(int array[], int size) {
 
  // loop to access each array element
  for (int step = 0; step < size; ++step) {
 
    // loop to compare array elements
    for (int i = 0; i < size - step; ++i) {
 
      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {
 
        // swapping elements if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
 
void solve(){
    int n,m;
    cin>>n>>m;
 
    int counts[1001]={0},count=0;
    int arr[n+1];
    int sortedArr[n+1];
 
    for(int i=0;i<n;i++){
        cin>>arr[i];
        counts[arr[i]]++;
        sortedArr[i]=arr[i];
       // cout<<"sorted[i]= "<<sortedArr[i]<<endl;
    }
 
   // for(int i=0;i<n;i++){
     //   cout<<arr[i]<<endl;
   // }
 
 
    //int x=sizeof(sortedArr) / sizeof(sortedArr[0]);
    sort(sortedArr,sortedArr+n);
 
    int sum=0;
 
 //   for(int i=0;i<n;i++){
   //     cout<<sortedArr[i]<<endl;
   // }
 
    for(int i=0;i<n;i++){
         //   sum+=sortedArr[i];
        if(sum+sortedArr[i]<=m){
             //   cout<<"sum, sortedarray[i],m= "<<sum<< " "<<i<<" "<<sortedArr[i]<<" "<<m<<endl;
                if(sum+sortedArr[i]+arr[i+1]<=m)
                {
                 //   cout<<"sum, sortedarr[i], arr[i+1]= "<<sum<<" "<<sortedArr[i]<<" "<<arr[i+1]<<endl;
                   // cout<<"!"<<endl;
                    count++;
                    sum+=sortedArr[i];
                }
                else if(sum+sortedArr[i]+sortedArr[i+1]<=m)
                {
                 //   cout<<"sum, sortedarr[i], arr[i+1]= "<<sum<<" "<<sortedArr[i]<<" "<<arr[i+1]<<endl;
                   // cout<<"!"<<endl;
                    count++;
                    sum+=sortedArr[i];
                }
                else if(sum+arr[i+1]<=m)
                {
                 //   cout<<"@"<<endl;
                    count+=2;
                    sum+=arr[i+1];
                    break;
                }
                else{
               //         cout<<"#"<<endl;
                    count++;
                    sum+=sortedArr[i];
                    break;
                }
 
        }
        else if(sum+=arr[i]<=m)
        {
            count++;
            break;
        }
    }
    
    if(n+1-count>0)
    cout<<n+1-count<<endl;
    else cout<<"1"<<endl;
 
}
 
int main(){
 
   // ll test=2,product=0;
//    ll arr[1000000001];
 
	int t;
	cin>>t;
  //  t=1;
	while(t--){
		solve();
}
}