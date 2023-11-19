#include<iostream>
using namespace std;
template<class s>
class kk{
   
    public:
    void rr(s a,s b)
    {
        cout<<a+b<<endl;
    }

};
template<class f>
class hh:public kk<f> {
  
    public:
void oo(f a,f b){
    cout<<a-b<<endl;
}

};
 int main(){
hh <int>h;
h.oo(11,7);
h.rr(22,3);
return 0;
}