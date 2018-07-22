#include <bits/stdc++.h>
using namespace std;
int main(){
     string a,b;
     cin>>a>>b;
     transform(a.begin(),a.end(),a.begin(),::tolower);
     transform(b.begin(),b.end(),b.begin(),::tolower);
     int u=0,v=0;
     for(int i=0;i<a.length();i++){
          v+=((int)a.at(i));
          u+=(int)b.at(i);
     }
     if(v>u){
          cout<<"1";
     }
     else if(u>v){
          cout<<"-1";
     }
     else if(u=v) cout<<"0";
     return 0;
}
