## 练习 7-1: 
    分析下面的代码段。能列出其中发现的问题吗？这个练习中，不需要修复这些问
    题，这将是练习 7-2 的任务。
    ```
    const size_t numberOfElements { 10 };
    int* values { new int[numberOfElements] };

    // Set values to their index value.
    for (int index { 0 }; index < numberOfElements; ++index) {
    values[index] = index;
    }

    // Set last value to 99.
    values[10] = 99;

    // Print all values.
    for (int index { 0 }; index <= numberOfElements; ++index) {
    print("{} ", values[index]);
    }
    ```
## 练习 7-2: 
    使用现代安全的 C++ 构造重写练习 7-1 中的代码片段。

## 练习 7-3: 
    编写一个基本的类来存储一个具有 x、y 和 z 坐标的 3D 点, 包括一个接受
    x、y 和 z 参数的构造函数，还有一个函数，它接受一个 3D 点并使用 std::print()
    打印出其坐标。在 main() 函数中，动态分配类的实例，然后调用函数。

## 练习 7-4: 
    本章中展示了以下函数，用于处理越界内存访问。能用安全的 C++ 替代方案现
    代化这个函数吗？在 main() 函数中测试你的解决方案。
    ```
    void fillWithM(char* text)
    {
        int i { 0 };
        while (text[i] != '\0') {
        text[i] = 'm';
        ++i;
        }
    }
    ```
