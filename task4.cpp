#include <iostream>
#include <string>
using namespace std;

// === 1. 定义函数 (Function Definition) ===
// void 表示这个函数只负责执行动作，不返回数值
string checkTraffic(long long rate) {
    cout << "--- 📊 正在进行协议分析 ---" << endl;
    if (rate > 2000) {
        cout << "状态: [🚨 Extreme] 建议开启流量清洗！" << endl;
    } else if (rate >= 1000) {
        cout << "状态: [🟡 High] 请监控链路负载。" << endl;
    } else {
        cout << "状态: [🟢 Normal] 链路运行平稳。" << endl;
    }
    return "分析完成";

}

int main() {
    long long myRate;
    cout << "请输入当前实时速率 (Bytes/s): ";
    cin >> myRate;

    // === 2. 调用函数 (Function Call) ===
    // 就像调脚本一样，把数据传给它就行
   
string result = checkTraffic(myRate);
cout << "函数返回值: " << result << endl;
    return 0;
}