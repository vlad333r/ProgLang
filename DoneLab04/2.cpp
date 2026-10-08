#include <iostream>
#include <iomanip>

int main()
{
    int        dec_small = 42;
    long       dec_long  = 1000000L;
    long long  dec_ll    = 9000000000LL;

    int oct1 = 052;
    int oct2 = 0777;

    int hex1 = 0x2A;
    unsigned int hex2 = 0XDEADBEEF;
    int hex3 = 0xFF;

    int bin1 = 0b101010;
    int bin2 = 0B1111'0000'1111'0000;

    unsigned int       u1 = 42u;
    unsigned long      u2 = 4000000000UL;
    unsigned long long u3 = 18446744073709551615ULL;

    long long ll1 = 123LL;
    unsigned long long ull1 = 123ULL;

    int code = '#';

    std::cout << std::dec << dec_small << ' ' << dec_long << ' ' << dec_ll << '\n';
    std::cout << oct1 << ' ' << oct2 << '\n';
    std::cout << std::dec << hex1 << ' ' << hex2 << ' ' << hex3 << '\n';
    std::cout << bin1 << ' ' << bin2 << '\n';
    std::cout << u1 << ' ' << u2 << ' ' << u3 << '\n';
    std::cout << ll1 << ' ' << ull1 << '\n';
    std::cout << code << '\n';
    std::cout << sizeof(int) << ' ' << sizeof(long) << ' ' << sizeof(long long) << '\n';
    return 0;
}
