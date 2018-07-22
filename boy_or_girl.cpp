#include <bits/stdc++.h>
using namespace std;
int main(){
     string s;
     cin>>s;
     vector<int>v;
     for(int i=0;i<s.length();i++){
          v.push_back((int)s.at(i));
     }
     sort(v.begin(),v.end());
     v.erase(unique(v.begin(),v.end()),v.end());
     int n=v.size();
     n++;
     if(n%2==1){
          cout<<"CHAT WITH HER!";
     }
     else{
          cout<<"IGNORE HIM!";
     }
     return 0;
}
