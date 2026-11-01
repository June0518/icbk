#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    string line;
    // 读取一整行输入句子
    getline(cin, line);

    stringstream ss(line);
    string word;
    vector<string> words;

    // 拆分单词存入vector
    while (ss >> word)
    {
        words.push_back(word);
    }

    // 输出单词个数
    cout << "单词个数: " << words.size() << endl;

    // 逆序输出
    cout << "逆序输出: ";
    for (int i = words.size() - 1; i >= 0; i--)
    {
        cout << words[i];
        if(i > 0)
        {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}