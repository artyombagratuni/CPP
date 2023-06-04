#include <iostream>
#include <vector>

std::vector<int> getArrWithNums(int num)
{
    std::vector<int> arr;

    while (num != 0) {
        arr.push_back(num % 10);
        num /= 10;
    }

    std::cout << sizeof(arr) << std::endl;
    return arr;
}

int main()
{
    int num = 0;
    std::cout << "Enter number: ";
    std::cin >> num;
    std::vector<int> arr = getArrWithNums(num);

    int s = 0, p = 1;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        s += arr[i];
        p *= arr[i];
    }
    std::cout << s << std::endl;
    std::cout << p - s << std::endl;

    return 0;
}

