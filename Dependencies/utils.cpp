#include <iostream>
#include "utils.h"
namespace utils
{
	template<typename T>
	void printArray(T arr[], size_t size)
	{
		std::cout << "[ ";
		for (size_t i = 0; i < size; i++)
			i == size - 1 ? std::cout << arr[i] << " ]"
			: std::cout << arr[i] << ", ";
	}
	template void printArray(int arr[], size_t size);
	template void printArray(long arr[], size_t size);

	void reverseArray(long* arr, size_t size)
	{
		for (size_t i = 0; i < size/2; i++)
		{
			long tmp = arr[i];
			arr[i] = arr[size - i - 1];
			arr[size - 1 - i] = tmp;
			
		}
	}

	bool bsearch(long* arr, long item, size_t start, size_t end)
	{
		
		if (start == end && arr[start] != item) return false;

		else
		{
			size_t mid = start + end;
			mid =(size_t)std::round((double)mid / 2.0);
			if (arr[mid] == item) return true;
			else if (arr[mid] < item) return bsearch(arr, item, mid, end);
			else if (arr[mid] > item) return bsearch(arr, item, start, mid);

		}
		return true;

	}



}