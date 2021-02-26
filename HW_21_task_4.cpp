#include <iostream>

void evendigits(long long number, int& k)
{
    if (number%2==0 || number%10==0) k++;
    if (number/10 < 1) return;
    evendigits(number/10, k);
}

int main()
{
    int res = 0;
    for(long long  i = 0; res <= 9; i++)
    {
        evendigits(i, res);
        std::cout << "number: " << i << " :: " << res << std::endl;
        res = 0;
    }
}
