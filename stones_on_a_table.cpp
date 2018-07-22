#include <bits/stdc++.h>
using namespace std;
int main(){
     std::vector<char> v;
     int n,counter=0;
     cin>>n;
     for(int i=0;i<n;i++){
          char temp;
          cin>>temp;
          v.push_back(temp);
     }
     for(auto it=v.begin();it!=v.end();++it){
          if(*it==*(it+1)){
               it=v.erase(it);
               counter++;
          }
     }
     cout<<counter;
     return 0;
}
