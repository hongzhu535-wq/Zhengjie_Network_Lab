#include <iostream>
#include <string> // 必须引入，处理 IP 字符串全靠它
using namespace std;

// === 定义函数：检查是否为私有网段 (192. 或 10. 开头) ===
bool isPrivateIP(string ip) {
    // find() 函数查找子串，如果返回 0，表示在字符串最开头找到了
    if (ip.find("192.") == 0 || ip.find("10.") == 0 ||ip.find("172.") == 0) {
        return true;
    }
    return false;
}

int main() {
    string myIP;
    cout << "=== 🌐 Zhengjie's IP Scanner ===" << endl;
    cout << "请输入一个 IP 地址 (例如 172.16.1.1): ";
    cin >> myIP;

    // 1. 获取长度 (Length)
    cout << "检测到输入长度: " << myIP.length() << " 位字符" << endl;

    // 2. 查找特定字符（比如查找第一个点号的位置）
    size_t firstDot = myIP.find('.');
    if (firstDot != string::npos) {
        cout << "第一个段的长度是: " << firstDot << " 位" << endl;
    }

    // 3. 调用逻辑函数进行分类
    if (isPrivateIP(myIP)) {
        cout << "结果: [🏠 Internal] 这是一个私有局域网地址。" << endl;
    } else {
        cout << "结果: [🌍 External] 这是一个公网或其它网段地址。" << endl;
    }

    return 0;
}