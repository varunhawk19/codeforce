#include <bits/stdc++.h>
using namespace std;
int main(){
     int n,counter=0,temp_counter=0;
     cin>>n;
     int a[3];
     for(int i=0;i<n;i++){
          cin>>a[0]>>a[1]>>a[2];
          int temp_sum=0;
          temp_sum=a[0]+a[1]+a[2];
          if(temp_sum>=2)
          counter++;
     }

     cout<<counter;
     return 0;
}
