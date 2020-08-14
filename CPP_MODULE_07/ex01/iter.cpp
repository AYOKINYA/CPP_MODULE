#include <string>
#include <iostream>

template<typename T>
void iter(T *arr, int arr_len, void (*fp)(T &elem))
{
    for (int i = 0; i < arr_len; ++i)
        fp(arr[i]);
}

template<class T>
void fp(T &x) 
{ 
    std::cout << x << std::endl;
}

int main(void)
{
    std::cout << "==============" << std::endl;
    std::string arr[3] =
    {
        "hi",
        "hello",
        "annyung"
    };
    iter(arr, 3, fp);
    std::cout << "==============" << std::endl;
    int arr2[4] = {1, 2, 3, 4};
    iter(arr2, 4, fp);
    std::cout << "==============" << std::endl;
    float arr3[4] = {10.0f, 20.0f, 30.0f, 40.0f};
    iter(arr3, 4, fp);
    std::cout << "==============" << std::endl;
    double arr4[4] = {-10.0, -20.0, -30.0, -40.0};
    iter(arr4, 4, fp);
    std::cout << "==============" << std::endl;
    return (0);
}