#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream ff;
ff.open("okk.txt",ios::in|ios::out);
cout<<ff.tellg()<<endl;
ff.seekg(2,ios::beg);
char c=ff.get();
cout<<c<<endl;
cout<<ff.tellg()<<endl;
ff.seekg(-2,ios::cur);
c=ff.get();
cout<<c<<endl;
cout<<ff.tellg()<<endl;
ff.seekp(2,ios::beg);
ff.put('w');

return 0;
}