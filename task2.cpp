#include <iostream>
#include <iomanip> // 为了控制小数点
using namespace std;

int main() {
    long long total = 0;
    long long current;

    cout << "=== 🚀 5秒流量采样开始 ===" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "第 " << i << " 秒流量 (Bytes): ";
        cin >> current;
        total += current; // 累加
    }

    // 计算平均值，注意：除法要保留小数，得转成 double
    double average = total / 5.0;

    cout << "---------------------------" << endl;
    cout << "总流量: " << total << " Bytes" << endl;
    cout << "平均速率: " << fixed << setprecision(2) << average << " B/s" << endl;

    return 0;
}