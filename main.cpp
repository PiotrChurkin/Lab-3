#include <iostream>

int main()
{
    int A;
    short N;

    std::cin >> A >> N;

    A = (A >> N) & 1;

    std::cout << A;

    return 0;
}