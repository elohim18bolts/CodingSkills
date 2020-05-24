#include <iostream>
#include <vector>
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
	template<typename T>
	void printArray(std::vector<T> vector)
	{
		std::cout << "[ ";
		for (size_t i = 0; i < vector.size(); i++)
			i == vector.size() - 1 ? std::cout << vector[i] << " ]"
			: std::cout << vector[i] << ", ";
	}
	template void printArray(int arr[], size_t size);
	template void printArray(long arr[], size_t size);
	template void printArray(std::vector<int> vector);

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
	/*Get the index of the element to be
	inserted in the ordered list maintaining the
	list order
	*/
	template<typename T>
	int bs_insert(T arr[],T e,size_t size)
	{
		if (size == 0) return 0;
		else if (size == 1 || size == 2) return e < arr[0] ? 0 : 1;
		int low = 0;
		int high = size;
		int i = 0;
		while (true)
		{
			i = (int)((low + high) / 2);
			if (high - low == 1) break;
			//std::cout << "low = " << low << "\t" << "high = " << high << "\t" << "i = " << i << std::endl;
			if (arr[i] > e) high = i;
			else if (arr[i] < e) low = i;
			else break;
			//else return i;
			
			
			
		}
		if (i == 0) return 0;
		return i+1;
	}
	template<typename T>
	int bs_insert(std::vector<T> arr, T e, size_t size)
	{
		if (size == 0) return 0;
		else if (size == 1 || size == 2) return e < arr[0] ? 0 : 1;
		int low = 0;
		int high = size;
		int i = 0;
		while (true)
		{
			i = (int)((low + high) / 2);
			if (high - low == 1 || low == high) break;
			//std::cout << "low = " << low << "\t" << "high = " << high << "\t" << "i = " << i << std::endl;
			if (arr[i] > e) high = i;
			else if (arr[i] < e) low = i;
			else break;
			//else return i;



		}
		if ( i == 0) return 0;
		return i + 1;
	}
	template int bs_insert(int arr[], int e,size_t size);
	template int bs_insert(std::vector<int> arr, int e, size_t size);



}