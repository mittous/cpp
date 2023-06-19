#include "Array.hpp"

int main()
{
    Array<int> arr(5);
    Array<int> arr2(5);
    std::cout << arr[0] << std::endl;

    for (int i = 0; i < (int)arr.size(); i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < (int)arr.size(); i++)
    {
        std::cout << "arr[" <<i<<"] = " << arr[i] << std::endl;
    }
    
    try
    {
        std::cout << arr[10] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    arr2 = arr;


    for (int i = 0; i < (int)arr2.size(); i++)
    {
        std::cout << "arr2[" <<i<<"] = " << arr2[i] << std::endl;
    }

    try
    {
        std::cout << arr[-20] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    Array<int> arr3(arr);
    for (int i = 0; i < (int)arr3.size(); i++)
    {
        std::cout << "arr3[" <<i<<"] = " << arr3[i] << std::endl;
    }
}