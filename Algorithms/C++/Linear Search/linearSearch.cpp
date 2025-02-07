// C++ code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1

#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int search(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

// Driver code
int main(void)
{
    time_t t1,t2;
    srand(time(0));	
	
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);

    time(&t1);
    int result = search(arr, n, x);
    time(&t2);
	
    //ternary operator
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;

    cout << endl;
	double sort_time = t2-t1;
    cout << "Time taken by sortArray: " << sort_time << " seconds" << endl << endl;

    return 0;
}