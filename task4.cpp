#include <iostream>

int main()
{
    int x[] = {4, 6, 32, 8, 33, 63, 5};

    int count = 0;

    for (int i = 1; i < sizeof(x) / sizeof(x[0]); ++i) {
        if (x[i] % i == 0) {
            count++;
        }
    }
    std::cout << count << std::endl;

    return 0;
}
