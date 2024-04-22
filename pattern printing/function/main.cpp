#include <iostream>

int sumOfEvenNumbers(int n) {
    int sum = 0;

    // Use a for loop to iterate through numbers from 1 to n
    for (int i = 1; i <= n; ++i) {
        // Check if the current number is even
        if (i % 2 == 0) {
            // If even, add it to the sum
            sum += i;
        }
    }

    return sum;
}

int main() {
    // Example: Find the sum of even numbers between 1 and 10
    int n ;
    int result = sumOfEvenNumbers(n);

    // Display the result
    std::cout << "The sum of even numbers between 1 and " << n << " is: " << result << std::endl;

    return 0;
}
