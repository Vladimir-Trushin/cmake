#include <iostream>

#include "print_lib.hpp"
#include "config.hpp"


int main()
{
    std::cout << project_name << std::endl;
    std::cout << project_version << std::endl;
    std::cout << project_version_major << std::endl;
    std::cout << project_version_minor << std::endl;
    std::cout << project_version_patch << std::endl;

    print_hello();

    return 0;
}