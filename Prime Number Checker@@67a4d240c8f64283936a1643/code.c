int isPrime(int a) {
    if (a <= 1) {
        return 0; // 1 and numbers less than 1 are not prime
    }
    if (a <= 3) {
        return 1; // 2 and 3 are prime
    }
    if (a % 2 == 0 || a % 3 == 0) {
        return 0; // Numbers divisible by 2 or 3 are not prime
    }
    for (int i = 5; i * i <= a; i += 6) {
        if (a % i == 0 || a % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}
