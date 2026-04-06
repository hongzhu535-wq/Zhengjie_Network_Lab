#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "请输入本次扫描的封包数量: ";
    cin >> n;

    int packets[100]; // 假设最多扫描100个
    int dangerCount = 0;
    int maxPkg = 0;

    // 第一步：录入数据
    for (int i = 0; i < n; i++) {
        cout << "输入第 " << i + 1 << " 个包的大小 (Bytes): ";
        cin >> packets[i];
    }

    // 第二步：扫描异常
    cout << "\n--- 🔍 正在扫描异常大包 ---" << "\n";
    for (int i = 0; i < n; i++) {
        if (packets[i] > 1500) {
            cout << "[⚠️ 警告] 发现异常包: 索引 " << i << " , 大小: " << packets[i] << " 字节" << endl;
            dangerCount++;
        }
    if (packets[i] > maxPkg) {
        maxPkg = packets[i];
       
    }
        
    }
    //插入
    
    // 第三步：输出报告
    cout << "---------------------------" << endl;
    cout << "扫描完毕。共发现 " << dangerCount << " 个非法大包。" << endl;
    cout << "最大包大小: " << maxPkg << " 字节" << endl;

    return 0;
}