#include <stdio.h>
int main ()
{

    float mass, acceleration, force;
    printf("Enter mass (in kg): ");
    scanf("%f", &mass);

    printf("Enter acceleration (in m/s^2): ");
    scanf("%f", &acceleration);

    force = mass * acceleration;

    printf("Force = %fN\n", force);

    return 0;
}
