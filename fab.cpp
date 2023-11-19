#include<iostream>
using namespace std;
void fab(int n){
    int n0=0;
    int n1=1;
    int next;
    for(int i=1;i<=n;i++){
        cout<<n0<<endl;
        next=n0+n1;//1
        n0=n1;//n0=1
        n1=next;//n1=1
    }
    
}
int main(){
int n;
cin>>n;      
fab(n);
return 0;
}