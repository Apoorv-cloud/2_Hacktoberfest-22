#include <iostream>
#include <map>
#include <vector>
 
// Driver
int main()
{
    // Iterating over whole array
    std::vector<int> v = { 0, 1, 2, 3, 4, 5 };
    for (auto i : v)
        std::cout << i << ' ';
 
    std::cout << '\n';
 
    // the initializer may be a braced-init-list
    for (int n : { 0, 1, 2, 3, 4, 5 })
        std::cout << n << ' ';
 
    std::cout << '\n';
 
    // Iterating over array
    int a[] = { 0, 1, 2, 3, 4, 5 };
    for (int n : a)
        std::cout << n << ' ';
 
    std::cout << '\n';
 
    // Just running a loop for every array
    // element
    for (int n : a)
        std::cout << "In loop" << ' ';
 
    std::cout << '\n';
 
    // Printing string characters
    std::string str = "Geeks";
    for (char c : str)
        std::cout << c << ' ';
 
    std::cout << '\n';
 
    // Printing keys and values of a map
    std::map<int, int> MAP(
        { { 1, 1 }, { 2, 2 }, { 3, 3 } });
    for (auto i : MAP)
        std::cout << '{' << i.first << ", " << i.second
                  << "}\n";
}