//when we need to execute fast code then we use macros
#include<iostream>

using namespace std;
int main(){
    cout<<__LINE__<<endl;
cout<<__TIME__<<endl;
cout<<__DATE__<<endl;
cout<<__FILE__<<endl;
cout<<__LINE__<<endl;
return 0;
}