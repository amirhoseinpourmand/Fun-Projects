#include <iostream>


int main(){
    std::cout << "hi, pls enter a number : \n";
    uint inp{};
    std::cin >> inp;
    std::cout << "the even numbers: \n";
    for(uint i=1; i <= inp; i++)
    {
        if ((i % 2 ) == 0)
        {
            std::cout << i << '\n';
        }
    }
    std::cout << "the odd numbers: \n";
    for(uint j=1; j <= inp; j++)
    {
        if ((j % 2 ) != 0)
        {
            std::cout << j << '\n';
        }
    }
    return 0;
}
