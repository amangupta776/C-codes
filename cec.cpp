#include<iostream>
using namespace std;
template<class T>
class lpu{
T a,b;
public:
void setval(T i, T j){
   a=i;
   b=j; 
}
T sum(){
T z;
z=a+b;
cout<<z<<endl;
}
};
  main(){
lpu <int> obj;
lpu <float> obj2;
obj.setval(11,12);
obj.sum();
obj2.setval(22.2,33.3);
obj2.sum();
return 0;
}