#include <bits/stdc++.h> // 万能头

using namespace std; // 命名空间

// 函数声明
string cyberCoinFlip(const string& str1, const string& str2);

int main() {
    string input1, input2;

    // 获取用户输入的两个字符串
    cout << "请输入第一种选择: ";
    cin >> input1;
    cout << "请输入第二种选择: ";
    cin >> input2;

    // 进行赛博抛硬币
    string result = cyberCoinFlip(input1, input2);

    cout << "赛博抛硬币结果: " << result << endl;

    // 在程序结束后等待用户按下任意键
    system("pause");

    return 0;
}

string cyberCoinFlip(const string& str1, const string& str2) {
    // 使用当前时间作为种子值
    auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 gen(seed);
    uniform_int_distribution<> dis(0, 1); // 生成 0 或 1
     // 抛硬币
    int result = dis(gen);

    // 返回结果字符串
    return (result == 0) ? str1 : str2;
}
