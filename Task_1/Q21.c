// surface area of Cylinder

#include<stdio.h>
#include<math.h>

#define PI 3.1416

float SurfaceAreaCylinder(float fRed , float fHig)
{
    float fValue = 0.0f;

    fValue = ( ( 2 * (PI) * (fRed*fHig) ) + ( 2 * (PI) * (fRed*fRed) ) );

    return fValue;
    
}

int main()
{
    float fRadius = 0.0f;
    float fHight = 0.0f;
   
    float fArea = 0.0f;

    printf("========================================\n");
    printf("Enter the Radius :==>> ");
    scanf("%f",&fRadius);
    printf("========================================\n");

    printf("========================================\n");
    printf("Enter the Hight :==>> ");
    scanf("%f",&fHight);
    printf("========================================\n");
    
    fArea = SurfaceAreaCylinder(fRadius,fHight);

    printf("========================================\n");
    printf("Area of surface Cylinder :==>>> %f\n",fArea);
    printf("========================================\n");

    return 0;
}
    