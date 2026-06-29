#include <stdio.h>

int main() { 
    int number, remainder; 
    int new_num = 0; 
    
    printf("Enter a number: "); 
    scanf("%d", &number); 
    
    while (number != 0) {
        remainder = number % 10; 
        new_num = new_num * 10 + remainder; 
        number = number / 10; 
    }
    
    printf("Reversed number: %d\n", new_num); 
    
    return 0; 
}