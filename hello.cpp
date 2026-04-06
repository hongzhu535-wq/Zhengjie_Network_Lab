#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    double mb;
    cout << "===Zhengjie'pro Network Tool===" << endl;
    cout << "Enter size (MB): ";
    cin >> mb;
    double gb = mb / 1024;
    double bits = mb * 8 * 1024 * 1024;
    cout << fixed << setprecision(2);
    cout << "Size in GB: " << gb << " GB" << endl;
    cout << "Size in bits: " << bits << " bits" << endl;
    return 0;
}
