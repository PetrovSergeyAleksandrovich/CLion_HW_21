#include <iostream>
#include <vector>

void swap(std::vector<int>& vec, int* ary)
{
    for (int i = 0, tmp = 0; i < vec.size(); i++)
    {
        tmp = vec[i];
        vec[i] = ary[i];
        ary[i] = tmp;
    }
}

int main()
{
    std::vector<int> my_vector = {1, 2, 3, 4, 5};
    int my_array[] = {2, 4, 6, 8, 10};

    swap(my_vector, my_array);

    for(int i = 0; i < my_vector.size(); ++i)
    {
        std::cout << my_vector[i] << " ";
    }

    std::cout << std::endl;

    for(int i = 0; i < sizeof(my_array)/sizeof(int); ++i)
    {
        std::cout << my_array[i] << " ";
    }

}

