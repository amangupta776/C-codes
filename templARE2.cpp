#include<iostream>
using namespace std;
template<class G,class O>
class gar{
    public:
    void display(G a,O b){
        cout<<a<<" "<<b<<endl;
    }
};
 main(){
gar<int, string> obj;

obj.display(11,"aman");

return 0;
}