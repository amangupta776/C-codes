#include<iostream>
using namespace std;
template<class R>
void display(R t){
    cout<<t<<endl;

}
void display(int a){
    cout<<a+1<<endl;
}
 main(){
display(12);
display(12.1);
display("aman");
return 0;
}