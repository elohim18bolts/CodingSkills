#pragma once
#include <vector>
namespace utils
{
	template<typename T> void printArray(T[], size_t);
	template<typename T> void printArray(std::vector<T>);
	template<typename T> int bs_insert(T[],T,size_t);
	template<typename T> int bs_insert(std::vector<T>, T, size_t);
	void reverseArray(long* arr, size_t size);
	bool bsearch(long* arr, long item, size_t start, size_t end);
}
