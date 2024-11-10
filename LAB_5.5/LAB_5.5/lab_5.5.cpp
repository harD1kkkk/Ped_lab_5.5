#include <iostream>
#include <climits> 

using namespace std;

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return (n % 10) + sumOfDigits(n / 10);
    }
}

int countOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return 1 + countOfDigits(n / 10);
    }
}

int maxDigit(int n, int currentMax) {
    if (n == 0) {
        return currentMax;
    }
    else {
        int digit = n % 10;
        if (digit > currentMax) {
            currentMax = digit;
        }
        return maxDigit(n / 10, currentMax);
    }
}

int minDigit(int n, int currentMin) {
    if (n == 0) {
        return currentMin;
    }
    else {
        int digit = n % 10;
        if (digit < currentMin) {
            currentMin = digit;
        }
        return minDigit(n / 10, currentMin);
    }
}

int calculateDepth(int n) {
    int depth = 0;
    while (n != 0) {
        n /= 10;
        depth++;
    }
    return depth;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;


    int sum = sumOfDigits(n); 
    int count = countOfDigits(n); 
    int maxDigitValue = maxDigit(n, INT_MIN); 
    int minDigitValue = minDigit(n, INT_MAX); 
    int depth = calculateDepth(n); 

    cout << "Sum of digits: " << sum << endl; 
    cout << "Count of digits: " << count << endl; 
    cout << "Maximum digit: " << maxDigitValue << endl;
    cout << "Minimum digit: " << minDigitValue << endl;
    cout << "Depth of recursion: " << depth << endl;

    return 0;
}
