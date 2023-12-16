
#include <stdio.h>
#include <math.h> 

int main()
{
    float a, b, c;
    float root1, root2, imaginary;
    float disc;
    
    printf("Enter values of a, b, c of quadratic equation : ");
    scanf("%f%f%f", &a, &b, &c);
    
    disc = (b * b) - (4 * a * c);
    
   
    if(disc > 0)
    {
        root1 = (-b + sqrt(disc)) / (2*a);
        root2 = (-b - sqrt(disc)) / (2*a);

        printf("The roots are: %.2f and %.2f", root1, root2);
    }
    else if(disc == 0)
    {
        root1 = root2 = -b / (2 * a);

        printf("The roots are: %.2f and %.2f", root1, root2);
    }
    else if(disc < 0)
    {
     
        printf("No real roots");
    }

    return 0;
}