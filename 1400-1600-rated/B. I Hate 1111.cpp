#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    long long x;
    
    cin >> t;  
    
    while (t--) {
        cin>>x;
        
        if(x%11!=0 && (x%11)*10 > x/11) {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
}