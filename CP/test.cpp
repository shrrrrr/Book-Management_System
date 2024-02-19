#include <iostream>
#include<vector>
#define ll long long
#define pb push_back
using  namespace std;
int tt,a,b,c,k;
 
int main(){
 
    cin>>tt>>k;
    vector<int>st;
 
    while(tt--){
        string str;
        cin>>str;
        int n=str.size();
        st.pb(n);
        }
        int cnt=0;
        int prev=st[0];
        int n=st.size();
        for(int i=1;i<st.size();i++){
            st[i]++;
            if(st[i]+prev==k){
                cnt++;
                if(i+1<n){
                    prev=st[i+1];
                    i++;
                }else{
                    prev=0;
                }
            }else if(st[i]+prev>k){
                cnt++;
                prev=st[i]-1;

            }else{
                prev+=st[i];
            }
        }
      
        if(prev!=0) cnt++;
        cout<<cnt<<endl;
 
 
}