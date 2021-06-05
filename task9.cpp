#include <iostream>

namespace MyNamespace
{
    void cout(std::string input)
    {
     std::cout<<"Your input is "<<input<<std::endl;
    }
    
}

int main()
{
    std::string input;
    std::cout<<"Write your input:"<<std::endl;
    std::getline(std::cin,input);
    MyNamespace::cout(input);
    
  
}