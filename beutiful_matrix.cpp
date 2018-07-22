#include <bits/stdc++.h>
using namespace std;
int main(){
     int a[5][5],tempa,tempb,i,j;
     for(i=0;i<5;i++){
          for(j=0;j<5;j++){
               cin>>a[i][j];
               if(a[i][j]==1){
                    tempa=i;
                    tempb=j;
               }
          }
     }
     tempa=abs(tempa-2);
     tempb=abs(tempb-2);
     cout<<tempa+tempb;

     return 0;
}
