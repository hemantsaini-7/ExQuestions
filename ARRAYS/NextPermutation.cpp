#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3};

    sort(arr, arr + 3);

    cout << "The 3! possible permutations with 3 elements:\n";

    cout << "After loop: " << arr[0] << ' '
         << arr[1] << ' ' << arr[2] << '\n';

    return 0;
}