#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // for sleep() on Linux/macOS
// #include <windows.h> // for Sleep() on Windows

int main() {
    int a, b, sum;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Pretend to calculate
    sum = a + b;

    // Clear screen & tell user to maximize
    system("clear || cls");  
    printf("👉 Please maximize your terminal for best results!\n\n");

    printf("Calculating the sum of %d and %d", a, b);

    // Add  loading with dots
    for (int i = 0; i < 5; i++) {
        printf(".");
        fflush(stdout);  // force print immediately
        sleep(1);        // 1 sec delay (use Sleep(1000) for Windows)
    }

    printf("\n\nSurprise! Here's your result:\n\n");

    // Rickroll
    system("curl -L ascii.live/rick");

    return 0;
}
