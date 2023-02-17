int main() {
    int a, b;
    for (a = 0; a <= 99; a++) {
        for (b = a; b <= 99; b++) {
            int d1 = a / 10;
            int d2 = a % 10;
            int d3 = b / 10;
            int d4 = b % 10;
            putchar(d1 + '0');
            putchar(d2 + '0');
            putchar(' ');
            putchar(d3 + '0');
            putchar(d4 + '0');
            if (!(a == 99 && b == 99)) {
                putchar(',');
                putchar(' ');
            }
        }
    }
    return 0;
}
