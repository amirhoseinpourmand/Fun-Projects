#include <iostream>

uint forFunction(uint n=0){
    uint result{};
    for (uint i = 1; i <= n; i++)
    {
        result = result + i;
    }
    return result;
}

int main(){

    std::cout << "hi, pls enter a number : \n";
    uint inp{};
    std::cin >> inp;
    std::cout << "the result is : " << forFunction(inp) << '\n';

    return 0;
}