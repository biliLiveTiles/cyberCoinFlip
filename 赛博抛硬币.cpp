#include <bits/stdc++.h> // ����ͷ

using namespace std; // �����ռ�

// ��������
string cyberCoinFlip(const string& str1, const string& str2);

int main() {
    string input1, input2;

    // ��ȡ�û�����������ַ���
    cout << "�������һ��ѡ��: ";
    cin >> input1;
    cout << "������ڶ���ѡ��: ";
    cin >> input2;

    // ����������Ӳ��
    string result = cyberCoinFlip(input1, input2);

    cout << "������Ӳ�ҽ��: " << result << endl;

    // �ڳ��������ȴ��û����������
    system("pause");

    return 0;
}

string cyberCoinFlip(const string& str1, const string& str2) {
    // ʹ�õ�ǰʱ����Ϊ����ֵ
    auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 gen(seed);
    uniform_int_distribution<> dis(0, 1); // ���� 0 �� 1
     // ��Ӳ��
    int result = dis(gen);

    // ���ؽ���ַ���
    return (result == 0) ? str1 : str2;
}
