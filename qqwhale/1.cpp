#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {0, 1, 2, 3, 4, 5};
 
    for (const int& i : v) // 以 const 引用访问
        std::cout << i << ' ';
    std::cout << '\n';
 
    for (auto i : v) // 以值访问，i 的类型是 int
        std::cout << i << ' ';
    std::cout << '\n';
 
    for (auto&& i : v) // 以转发引用访问，i 的类型是 int&
        std::cout << i << ' ';
    std::cout << '\n';
 
    const auto& cv = v;
 
    for (auto&& i : cv) // 以转发引用访问，i 的类型是 const int&
        std::cout << i << ' ';
    std::cout << '\n';
 
    for (int n : {0, 1, 2, 3, 4, 5}) // 初始化器可以是花括号包围的初始化器列表
        std::cout << n << ' ';
    std::cout << '\n';
 
    int a[] = {0, 1, 2, 3, 4, 5};
    for (int n : a) // 初始化器可以是数组
        std::cout << n << ' ';
    std::cout << '\n';
 
    for ([[maybe_unused]] int n : a)  
        std::cout << 1 << ' '; // 不必使用循环变量
    std::cout << '\n';
 
    for (auto n = v.size(); auto i : v) // 初始化语句（C++20）
        std::cout << --n + i << ' ';
    std::cout << '\n';
 
    for (typedef decltype(v)::value_type elem_t; elem_t i : v)
    // typedef 声明作为初始化语句（C++20）
        std::cout << i << ' ';
    std::cout << '\n';
 
    for (using elem_t = decltype(v)::value_type; elem_t i : v)
    // 别名声明作为初始化语句，同上（C++23）
        std::cout << i << ' ';
    std::cout << '\n';
}