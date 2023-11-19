#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream ff("aman");
ff<<"hello aman\nhello hello jojo\nhello kaju katli"<<endl;
ff.close();
ifstream kk("aman");
string s;

while(kk.eof()==0){
    getline(kk,s);
cout<<s<<endl;
}

kk.close();
fstream dd("aman",ios::app);
dd<<"aman gupta";
return 0;
}