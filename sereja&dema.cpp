#include <bits/stdc++.h>
using namespace std;
int main(){
     int t,a=0,b=0;
     cin>>t;
     vector<int> v;
     for(int i=0;i<t;i++){
          int temp;
          cin>>temp;
          v.push_back(temp);
     }
     sort(v.begin(),v.end(),std::greater<int>());
     for(int i=0;i<t;i++){
          if(i%2==0){
               a+=v.at(i);
          }
          else{
               b+=v.at(i);
          }
     }
     cout<<a<<" "<<b;
     return 0;
}
