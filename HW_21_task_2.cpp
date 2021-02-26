#include <iostream>

int JUMP_COUNTER(int x)
{
    if (x < 0) return 0;
    else if (x == 0) return 1;

    int res = 0;
    for (int i = 1 ; i <= 3; ++i) {
        res += JUMP_COUNTER(x - i);
    }
    return res;
}

int main()
{
    int n = 0;
    std::cout << "Type the stair number: ";
    std::cin >> n ;
    std::cout << std::endl;
    std::cout << "OUTPUT: " << JUMP_COUNTER(n);
}



