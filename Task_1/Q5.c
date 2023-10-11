// area of square
#include<stdio.h>
#include<math.h>

float AreaSquare(float fNo)
{
    float fValue = 0.0f;

    fValue = fNo*fNo;

    return fValue;
    
}

int main()
{
    float fSide = 0.0f;
   
    float fArea = 0.0f;

    printf("========================================\n");
    printf("Enter the side of square :==>> ");
    scanf("%f",&fSide);
    printf("========================================\n");
    
    fArea = AreaSquare(fSide);

    printf("========================================\n");
    printf("Area of square Exactly is :==>>> %f\n",fArea);
    printf("========================================\n");
    printf("Area of square total is :==>>> %2.f\n",fArea);
    printf("========================================\n");

}