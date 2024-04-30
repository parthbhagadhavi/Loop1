
       #include <stdio.h>

int main() {
    int num, sum = 0;
    
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    
    for(int i = 1; i <= num; i++) {
        sum += i;
    }
    
    
    printf("The sum of all numbers: %d\n", sum);
    
    return 0;
}
