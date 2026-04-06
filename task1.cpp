#include <iostream>
using namespace std;
int main() {
    int KB,Bytes,bits;
    cout<<"Enter the size in KB: ";
    cin>>KB;
    Bytes=KB*1024;
    bits=Bytes*8;
    cout<<"Size in Bytes: "<<Bytes<<endl;
    cout<<"Size in bits: "<<bits<<endl;
    return 0;
}