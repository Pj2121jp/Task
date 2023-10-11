//  area of equliateral triangle

#include<stdio.h>
#include<math.h>

float EquliateralTriangle(float fNo)
{
    float fValue = 0.0f;

    fValue =  sqrt (3)*fNo*fNo/4;

    return fValue;
    
}

int main()
{
    float fSide = 0.0f;
   
    float fArea = 0.0f;

    printf("========================================\n");
    printf("Enter the Side :==>> ");
    scanf("%f",&fSide);
    printf("========================================\n");
    
    fArea = EquliateralTriangle(fSide);

    printf("========================================\n");
    printf("Area of equliateral triangle :==>>> %f\n",fArea);
    printf("========================================\n");

    return 0;
}
    