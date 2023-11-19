#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream F;
    F.open("lpu", ios::in | ios::out);
    cout << F.tellg() << endl;
    F.seekg(2, ios::beg);
   char c = F.get();
    cout << c << endl;
cout << F.tellg() << endl;
   F.seekg(2, ios::cur);
 c = F.get();
    cout << c << endl;
  cout << F.tellg() << endl;
    F.seekp(2, ios::beg);
    F.put('Z');
   F.seekg(-3, ios::end);
    cout << "End:" << F.tellg() << endl;
  F.close();
    return 0;
}
