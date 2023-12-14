#include<bits/stdc++.h>
#define int long long int

int binpowRec(int a,int b){
    if(b==0) return 1; // Base case
    int res=binpowRec(a,b/2); // In each case power is dividing by two
    if(b&1){
        return a*res*res;
    }else{
        return res*res;
    }
} 

int binpowIter(int a,int b){
    int ans=1;
    while(b>0){
        if(b&1){
            ans=ans*a;
        }
        a=a*a;
        b=b>>1; // Dividing b by 2  or b=b/2;
    }
    return ans;
}

void solve(){
   int a,b;
   std::cin>>a>>b;
   int ans1=binpowRec(a,b);
   int ans2=binpowIter(a,b);
   std::cout<<ans1<<"\n"<<ans2<<"\n";
}
 
int32_t main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
 
    int t=1;
    for(int i=0 ; i<t  ; i++){
        solve();
    }
 
    return 0;
}
