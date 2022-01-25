#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    std::cout << "Number size : " << numbers.size() << std::endl;

    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    std::cout << "set value in number & mirror" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    Array<int> tmp = numbers;
    Array<int> test(tmp);
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\nNumber value reset" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
        }
    }
    std::cout << "\ntmp and number" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (tmp[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
        }
    }
    std::cout << "\ntmp and test" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (tmp[i] != test[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
        }
    }
    delete [] mirror;
	// system("leaks Array");
	return 0;
}