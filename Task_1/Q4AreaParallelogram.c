#include<stdio.h>
#include<math.h>

float AreaParallelogram(float fNo1, float fNo2)
{
    float fValue = 0.0f;

    fValue = fNo1*fNo2;

    return fValue;
    
}

int main()
{
    float fBase = 0.0f;
    float fHight = 0.0f;
    float fArea = 0.0f;

    printf("========================================\n");
    printf("Enter the Base of Parallelogram :==>> ");
    scanf("%f",&fBase);
    printf("========================================\n");
    printf("Enter the Hight of Parallelogram :==>> ");
    scanf("%f",&fHight);
    printf("========================================\n");
    
    fArea = AreaParallelogram(fBase,fHight);

    printf("========================================\n");
    printf("Area of Parallelogram is :==>>> %f\n",fArea);
    printf("========================================\n");

}