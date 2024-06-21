#include <iostream>

using namespace std;
void Bubble_sort(int arr[], int n);
int main()
{
    int arr[10] = {23, 1, 32, 11, 20, 2, 4, 5, 44, 3};
    int n = 10;

    Bubble_sort(arr, n);

    cout << "Sort the array according small to big : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    cout << endl;
    return 0;
}

void Bubble_sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}