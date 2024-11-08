#include <iostream>

uint oddNumbers(uint o){
    uint count{0};
    for(uint i=1; i <= o; i++)
    {
        if ((i % 2 ) != 0)
        {
            count = count + 1;
        }
    }
    return count;
}
uint evenNumbers(uint e){
    uint count{0};
    for(uint i=1; i <= e; i++)
    {
        if ((i % 2 ) == 0)
        {
            count = count + 1;
        }
    }
    return count;
}

int main(){
    std::cout << "hi, pls enter a number : \n";
    uint inp{};
    std::cin >> inp;
    std::cout << "number of even numbers is " << evenNumbers(inp) << '\n';
    std::cout << "number of odd numbers is " << oddNumbers(inp) << '\n';
    return 0;
}
