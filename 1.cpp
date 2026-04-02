#include <iostream>

// 使用递归 constexpr 函数
constexpr long long sum_const(int n) {
    return (n <= 0) ? 0 : n + sum_const(n - 1);
}

int main() {
    // 编译器在编译阶段就计算出了 5050，并直接替换到这里
    constexpr long long result = sum_const(100);

    std::cout << "1 到 100 的和是: " << result << std::endl;
    return 0;
}