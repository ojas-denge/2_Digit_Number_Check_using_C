//If a number is greater than 9 & less than 100 -> true
 #include <stdio.h>
 int main () {
    int n1;

    printf("Enter a number to check if its greater than 9 and less than 100.\n");
    scanf("%d", &n1);
    
    printf("[1] TRUE, [0] FALSE.\n");
    printf("%d", n1>9 && n1<100);
    
    return 0;
 }