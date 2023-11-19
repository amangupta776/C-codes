#include<iostream>
using namespace std;
int kk(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
         fac=fac*i;
        
    }
    cout<<fac<<endl;
}
int main(){
int n;
cin>>n;
kk(n);
return 0;
}