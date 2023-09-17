#include <iostream>
#include <cstdlib>
using namespace std;


int getRandomNumber(int From, int To)
{
	return rand() % (To - From +1) + From;
}

void readTwoArrays(int arr1[100], int arr2[100],  int &length)
{
	cout << "enter the array length?\n";
	cin >> length;

	for (int i = 0; i < length; i++)
	{
		arr1[i] = getRandomNumber(1, 100);
	}

	for (int i = 0; i < length; i++)
	{
		arr2[i] = getRandomNumber(1, 100);
	}
}

void sumTwoArrays(int arr1[100], int arr2[100], int arr3[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
	}
}

void printArrayElements(int arr[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int arr1[100]; int arr2[100]; int arr3[100]; int length;

	readTwoArrays(arr1, arr2, length);
	sumTwoArrays(arr1, arr2, arr3, length);

	cout << "Array 1: "; printArrayElements(arr1, length);
	cout << "Array 2: "; printArrayElements(arr2, length);
	cout << "Sum Of Two Arrays: "; printArrayElements(arr3, length);


	return 0;

}