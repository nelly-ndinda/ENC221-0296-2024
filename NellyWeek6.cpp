#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
using namespace std;

int main() {
    srand(time(0)); // seed the random number generator

    int numbers[20];       // original array
    int oddArr[20], evenArr[20]; // arrays to hold odd and even values
    int oddCount = 0, evenCount = 0;

    // Generate 20 random numbers between 1 and 100
    for (int i = 0; i < 20; i++) {
        numbers[i] = (rand() % 100) + 1;
    }

    // Separate numbers into odd and even arrays
    for (int i = 0; i < 20; i++) {
        if (numbers[i] % 2 == 0) {
            evenArr[evenCount++] = numbers[i];
        } else {
            oddArr[oddCount++] = numbers[i];
        }
    }

    // Display results
    cout << "Original Array: ";
    for (int i = 0; i < 20; i++) cout << numbers[i] << " ";

    cout << "\nOdd Array: ";
    for (int i = 0; i < oddCount; i++) cout << oddArr[i] << " ";

    cout << "\nEven Array: ";
    for (int i = 0; i < evenCount; i++) cout << evenArr[i] << " ";

    cout << endl;
    return 0;
}
