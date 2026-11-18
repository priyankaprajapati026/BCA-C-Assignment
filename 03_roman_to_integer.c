int value(char r) {
    if (r == 'I') return 1;
    if (r == 'V') return 5;
    if (r == 'X') return 10;
    if (r == 'L') return 50;
    if (r == 'C') return 100;
    if (r == 'D') return 500;
    if (r == 'M') return 1000;
    return 0;
}

int romanToInt(char* s) {
    int total = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        int s1 = value(s[i]);
        int s2 = value(s[i + 1]);
        if (s1 < s2) {
            total -= s1;
        } else {
            total += s1;
        }
    }
    return total;
}
