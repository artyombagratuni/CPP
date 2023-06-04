#include <iostream>

int odd_count(int left, int right) {
    int count = 0;

    if (left > right) {
        return count;
    }

    for (int i = left; i <= right; ++i) {
        if (i % 2 == 1) {
            count++;
        }
    }
    return count;
}

int main()
{
    std::cout << odd_count(10, 7) << std::endl;

    return 0;
}
