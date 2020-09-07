// By Sharan Sherpunja
// Function to count parity, parity 0 if number of 1 is even, parity 1 if number of 1 is odd
int parity(unsigned long long int number1) {
    int count = 0;
    for (int i = 0; i < 32; ++i) {
        count += number1%2;
        number1 /= 2;
    }
    return count%2;
}
