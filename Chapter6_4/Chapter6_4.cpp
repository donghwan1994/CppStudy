#include <iostream>

using namespace std;

void printArray(const int array[], const int length)
{
	for (int index = 0; index < length; ++index)
		cout << array[index] << " ";
	cout << endl;
}

int main()
{
	const int length = 5;

	int array[length] = { 3, 5, 2, 1, 4 };

	printArray(array, length);

	// selection sort
	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[smallestIndex] > array[currentIndex])
			{
				smallestIndex = currentIndex;
			}
		}

		// swap two values in the array
		// std::swap(array[smallestIndex], array[startIndex])
		{
			int temp = array[smallestIndex];
			array[smallestIndex] = array[startIndex];
			array[startIndex] = temp;
		}

		printArray(array, length);
	}

	int arr[length] = { 5, 4, 3, 2, 1 };

	printArray(arr, length);

	// bubble sort
	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		for (int currentIndex = 0; currentIndex < length - 1; ++currentIndex)
		{
			if (arr[currentIndex] > arr[currentIndex + 1])
			{
				std::swap(arr[currentIndex], arr[currentIndex + 1]);
			}
		}

		printArray(arr, length);
	}

	return 0;
}