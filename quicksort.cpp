#include <iostream>

using namespace std;
void quickSort(int a[], int low, int high);
int partition(int a[], int low, int high);

int main()
{
	int a[] = {2, 5, 3, 1, 8, 2};
	
	int low = 0, high = sizeof(a)/4-1;
	quickSort(a, low, high);
	for (int i = 0; i < sizeof(a)/4; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

	void quickSort(int a[], int low, int high) {
		if (low < high) {
			int q = partition(a, low, high);
			quickSort(a, low, q - 1);
			quickSort(a, q + 1, high);

		}
	}

	int partition(int a[], int low, int high) {
		int pivot = a[low];
		while (low < high) {
			while (low<high && a[high] >=pivot)
				high--;
			a[low] = a[high];
			while (low <high && a[low]<pivot)
				low++;
			a[high] = a[low];
		}

		a[low] = pivot;
		return low;
	}
