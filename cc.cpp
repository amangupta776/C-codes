#include<iostream>
using namespace std;
int main(int argc,char*argv[]){
int i;
cout<<"number if arguments are:"<<argc<<endl;
for(int i=0;i<argc;i++){
    cout<<argv[i]<<endl;
}
return 0;
}