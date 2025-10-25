#include <stdio.h>

int main() {
    int units;
    float bill;

    
    printf("Enter units consumed: ");
    scanf("%d", &units);

   
    if (units <= 100) {
        bill = units * 1.5;
    } 
    else if (units > 100 && units <=200) {
        bill = units * 2;
    } 
    else if (units > 200 && units <=300) {
        bill = units * 3;
    } 
    else {
        units * 5;
    }

  
    printf("Total Bill = Rs%f", bill);

    return 0;
}

