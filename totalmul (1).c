
#include <stdio.h>

int main() {
    int num, fac= 1;
    
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    
    for(int i = 1; i <= num; i++) {
        fac*= i;
    }
    
    
    printf("The factorial is: %d\n", fac);
    
    return 0;
}
