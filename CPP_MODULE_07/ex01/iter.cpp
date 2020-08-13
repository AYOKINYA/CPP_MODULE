#include <string>
#include <iostream>

template<typename T1, typename T2>
void iter(T1 &arr, int arr_len, T2* fp)
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
    std::string arr[3] =
    {
        "hi",
        "hello",
        "annyung"
    };

    iter(arr, 3, &fp);
    return (0);
}