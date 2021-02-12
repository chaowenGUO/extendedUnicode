#include <iostream>

int main()
{
    static_assert(static_cast<unsigned>(U'\U00010035') == 0x10035);
    static_assert(static_cast<char32_t>(0x10035) == U'\U00010035');
    std::cout << "\U00010035" << std::endl;
}
