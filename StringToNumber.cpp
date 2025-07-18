#include <iostream>
#include <climits>
using namespace std;

int myAtoi(string s) {
    int i = 0, n = s.length();
    long result = 0;
    int sign = 1;

    // Step 1: Ignore leading whitespaces
    while (i < n && s[i] == ' ') {
        i++;
    }

    // Step 2: Handle optional sign
    if (i < n && (s[i] == '+' || s[i] == '-')) {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    // Step 3: Convert digits to integer
    while (i < n && s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';

        result = result * 10 + digit;

        // Step 4: Clamp to 32-bit range
        if (sign * result >= INT_MAX) return INT_MAX;
        if (sign * result <= INT_MIN) return INT_MIN;

        i++;
    }

    return static_cast<int>(sign * result);
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int number = myAtoi(input);
    cout << "Converted integer: " << number << endl;

    return 0;
}
