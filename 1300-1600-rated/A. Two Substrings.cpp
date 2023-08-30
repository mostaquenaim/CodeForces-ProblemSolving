 
#include <iostream>
 
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    
    bool AB=false;
    bool BA=false;
    
    for(int i=0;i<s.length()-1;i++){
        if(s[i]=='A' && s[i+1]=='B' && !AB){
            if(s[i+2]=='A' && !BA){
                i+=3;
                for(int j=i;j<s.length()-1;j++){
                    if( (s[j]=='A' && s[j+1]=='B') || (s[j]=='B' && s[j+1]=='A') ){
                        AB=true;
                        BA=true;
                        break;
                    }
            }
            }
            else{
            AB=true;
            i++;
            }
        }
        else if(s[i]=='B' && s[i+1]=='A' && !BA){
            if(s[i+2]=='B' && !AB){
                i+=3;
                for(int j=i;j<s.length()-1;j++){
                    if( (s[j]=='A' && s[j+1]=='B') || (s[j]=='B' && s[j+1]=='A') ){
                        AB=true;
                        BA=true;
                        break;
                    }
            }
            }
            else{
            BA=true;
            i++;
            }
            }
            
        }
        
        
    
    if(AB && BA) cout<<"YES";
    else cout<<"NO";
}