// surface area of Cube

#include<stdio.h>


float SurfaceAreaCube(float fNo)
{
    float fValue = 0.0f;

    fValue = 6*fNo*fNo;

    return fValue;
    
}

int main()
{
    float fEdge = 0.0f;
   
    float fArea = 0.0f;

    printf("========================================\n");
    printf("Enter the Radius :==>> ");
    scanf("%f",&fEdge);
    printf("========================================\n");
    
    fArea = SurfaceAreaCube(fEdge);

    printf("========================================\n");
    printf("Area of surface Cube :==>>> %f\n",fArea);
    printf("========================================\n");

    return 0;
}
    