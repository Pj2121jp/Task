// surface area of sphere

#include<stdio.h>
#include<math.h>

#define PI 3.1416

float SurfaceSphere(float fNo)
{
    float fValue = 0.0f;

    fValue = 4*PI*fNo*fNo;

    return fValue;
    
}

int main()
{
    float fRadius = 0.0f;
   
    float fArea = 0.0f;

    printf("========================================\n");
    printf("Enter the Radius :==>> ");
    scanf("%f",&fRadius);
    printf("========================================\n");
    
    fArea = SurfaceSphere(fRadius);

    printf("========================================\n");
    printf("Area of surface sphere :==>>> %f\n",fArea);
    printf("========================================\n");

    return 0;
}
    