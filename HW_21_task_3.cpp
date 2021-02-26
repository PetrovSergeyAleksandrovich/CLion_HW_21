#include <iostream>

int JUMP_COUNTER(int x, int k = 3)
{
    if (x < 0) return 0;
    else if (x == 0) return 1;

    int res = 0;
    for (int i = 1 ; i <= k; ++i) {
        res += JUMP_COUNTER(x - i, k);
    }
    return res;
}

int main()
{
    int n = 0, k = 0;
    std::cout << "Type the stair number: ";
    std::cin >> n ;
    std::cout << std::endl;
    std::cout << "Type the max jump length: ";
    std::cin >> k ;
    std::cout << std::endl;
    std::cout << "OUTPUT: " << JUMP_COUNTER(n, k);
}




