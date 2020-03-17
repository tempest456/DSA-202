#include <iostream>
#include <algorithm>
#include <array>


unsigned int searchBinary(std::array<int, 10>& numbers, int searchKey)
{
    unsigned int low {0}, high {9};
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if(numbers[mid] == searchKey)
            return mid;
        else if (searchKey < numbers[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    
}

int main()
{
    int key {0};
    std::cout << "Enter the number to search:" ;
    std::cin >> key ;
    std::array<int, 10> numbers = 
        {2, 3, 5, 7, 1, 4, 9, 6, 8, 10};
    std::sort(numbers.begin(), numbers.end());
    unsigned int index {0};
    index = searchBinary(numbers, key);
    std::cout << "The number is at index " << index << std::endl;
}
