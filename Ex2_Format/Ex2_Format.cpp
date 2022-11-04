// Ex2_Format.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

import <iostream>;
import <format>;
import <numbers>;

int main()
{
    const double pi = std::numbers::pi;
    std::cout << "Hello World!\n";
    std::cout << std::format("{:7}|{:7}|{:7}|{:7}|{:7}|\n", 1, -.2, "str", 'c', true);
    std::cout << std::format("{:>7}|{:>7}|{:>7}|{:>7}|{:>7}|\n", 1, -.2, "str", 'c', true);
    std::cout << std::format("{:<7}|{:<7}|{:<7}|{:<7}|{:<7}|\n", 1, -.2, "str", 'c', true);
    std::cout << std::format("{:*<7}|{:*<7}|{:*>7}|{:*>7}|{:*>7}|\n", 1, -.2, "str", 'c', true);
    std::cout << std::format("{:0^7}|{:0^7}|{:^7}|{:^7}|{:^7}|\n", 1, -.2, "str", 'c', true);
    std::cout << std::format("{:-^40}\n", '-');
    std::cout << std::format("Default:{:.2}, fixed: {:.2f}, scientific: {:.2e}, general: {:.2g}\n", pi, pi, pi, pi);
    std::cout << std::format("Default: {}, binary: {:b}, hex: {:x}\n", 314, 314, 314);
    std::cout << std::format("Default: {}, decimal: {:d}, hex: {:x}\n", 'x', 'x', 'x');
    std::cout << std::format("Alternative hex: {:#x}, binary: {:#b}, HEX: {:#X}\n", 314, 314, 314);
    std::cout << std::format("Forced sign: {:+}, space sign: {: }\n", 314, 314);
    std::cout << std::format("All together: {:*<+10.4f}, {:+#09x}, {:*^#9x}\n", pi, 314, 314);
    std::cout << std::format("{:-^40}\n", '-');

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
