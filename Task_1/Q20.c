// surface area of Cuboid

#include<stdio.h>


float SurfaceAreaCube(float fL , float fW , float fH)
{
    float fValue = 0.0f;

    fValue = ( 2* ( (fL*fW) + (fW*fH) + (fH*fL) ) );

    return fValue;
    
}

int main()
{
    float fLength = 0.0f;
    float fWidth = 0.0f;
    float fHight = 0.0f;
   
    float fArea = 0.0f;

    printf("========================================\n");
    printf("Enter the Length :==>> ");
    scanf("%f",&fLength);
    printf("========================================\n");

    printf("========================================\n");
    printf("Enter the Width :==>> ");
    scanf("%f",&fWidth);
    printf("========================================\n");

    printf("========================================\n");
    printf("Enter the Hight :==>> ");
    scanf("%f",&fHight);
    printf("========================================\n");
    
    fArea = SurfaceAreaCube(fLength,fWidth,fHight);

    printf("========================================\n");
    printf("Area of surface Cube :==>>> %f\n",fArea);
    printf("========================================\n");

    return 0;
}
    