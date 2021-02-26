#include <iostream>

void evendigits(long long number, int& k)
{
    if (number < 1) return;
    if (number%2==0 && number%10!=0) k++;
    evendigits(number/10, k);
}

int main()
{
    long long number = 120108; /* your number to check*/
    int res = 0;
    evendigits(number, res);
    std::cout << "evendigits quantity: " << res;
}
