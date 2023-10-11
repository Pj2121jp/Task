// Area of Right Angle Trangle
#include<stdio.h>


float AreaTrangle(float fNo1, float fNo2)
{
    float fValue = 0.0f;

    fValue = fNo1*fNo2/2;

    return fValue;
    
}

int main()
{
    float fBase = 0.0f;
    float fHight = 0.0f;
    float fArea = 0.0f;

    printf("========================================\n");
    printf("Enter the Base of Trangle :==>> ");
    scanf("%f",&fBase);
    printf("========================================\n");
    printf("Enter the Hight of Trangle :==>> ");
    scanf("%f",&fHight);
    printf("========================================\n");
    
    fArea = AreaTrangle(fBase,fHight);

    printf("========================================\n");
    printf("Area of Right Angle Trangle is :==>>> %f\n",fArea);
    printf("========================================\n");

}