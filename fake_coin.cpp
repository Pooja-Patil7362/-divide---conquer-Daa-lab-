#include <iostream>
using namespace std;

// Function to find fake coin index
int findFake(int arr[], int low, int high) {
    // Base case: only one coin
    if (low == high)
        return low;

    int mid = (low + high) / 2;

    // Calculate sum of left half
    int leftSum = 0;
    for (int i = low; i <= mid; i++)
        leftSum += arr[i];

    // Calculate sum of right half
    int rightSum = 0;
    for (int i = mid + 1; i <= high; i++)
        rightSum += arr[i];

    // Fake coin is in the lighter half
    if (leftSum < rightSum)
        return findFake(arr, low, mid);
    else
        return findFake(arr, mid + 1, high);
}

int main() {
    int n;
    cout << "Enter number of coins: ";
    cin >> n;

    int arr[n];
    cout << "Enter weights of coins:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int index = findFake(arr, 0, n - 1);

    cout << "Fake coin found at position: " << index;
    cout << "\nWeight: " << arr[index];

    return 0;
}