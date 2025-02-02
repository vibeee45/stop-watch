#include <stdio.h>
#include <unistd.h>
int main() {
    int a, i, h, s, m;
    printf("Enter time in seconds: ");
    scanf("%d", &a);
    printf("Stopwatch for %d seconds\n", a);
    for(i = a; i >= 0; i--) {
        h = i / 3600;
        m = (i % 3600) / 60;
        s = i % 60;  
        printf("%02d:%02d:%02d\n", h, m, s);
        sleep(1); 
    }
    printf("Stopwatch stopped!\n"); 
    return 0;
}
