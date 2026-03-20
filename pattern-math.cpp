#include <iostream>
using namespace std;

// 1. Prime Number Check
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// 2. GCD (Euclidean Algorithm)
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// 3. Armstrong Number
bool isArmstrong(int n) {
    int original = n, sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
    return sum == original;
}

// 4. Palindrome Number
bool isPalindrome(int n) {
    int original = n, rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev == original;
}

// 5. Pattern 1: Square
void squarePattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// 6. Pattern 2: Right Triangle
void trianglePattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// 7. Pattern 3: Number Triangle
void numberTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int num = 153;

    cout << "Prime Check (7): " << (isPrime(7) ? "Yes" : "No") << endl;
    cout << "GCD of 12 and 18: " << gcd(12, 18) << endl;
    cout << "Armstrong (153): " << (isArmstrong(num) ? "Yes" : "No") << endl;
    cout << "Palindrome (121): " << (isPalindrome(121) ? "Yes" : "No") << endl;

    cout << "\nSquare Pattern:\n";
    squarePattern(4);

    cout << "\nTriangle Pattern:\n";
    trianglePattern(4);

    cout << "\nNumber Triangle:\n";
    numberTriangle(4);

    return 0;
}
