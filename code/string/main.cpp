#include <string>
#include <iostream>

int main()
{
    char hello[] = "h";
    std::string s1(hello);
    std::string s2(hello, 7);

    std::cout << "s1 size: " << s1.size() << std::endl;
    std::cout << "s2 size: " << s2.size() << std::endl;
    s1[5] = 'a';
    s2[5] = 'a';
    std::cout << "s1: " << s1.c_str() << std::endl;
    std::cout << "s2: " << s2.c_str() << std::endl;

    return 0;
}
