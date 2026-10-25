#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

int main() {
    int n;
    std::cout << "请输入整数个数：";
    std::cin >> n;

    if (n < 0) {
        std::cout << "个数不能为负数\n";
        return 1;
    }

    std::vector<int> numbers(n);
    std::cout << "请输入 " << n << " 个整数：";
    for (int& number : numbers) {
        std::cin >> number;
    }

    std::sort(numbers.begin(), numbers.end());

    std::set<int> uniqueNumbers(numbers.begin(), numbers.end());

    std::cout << "排序去重结果：";
    for (int number : uniqueNumbers) {
        std::cout << number << ' ';
    }
    std::cout << '\n';

    return 0;
}