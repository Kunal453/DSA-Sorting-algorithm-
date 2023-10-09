#include <iostream>

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i += 2)
    {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout<<std::endl;
    return 0;
}



