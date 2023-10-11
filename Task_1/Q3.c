// are of pentagon
#include<stdio.h>
#include<math.h>

float AreaPentagon(float fNo)
{
    float fPentgon = 0.0f;

    fPentgon = (sqrt(5*(5+2*(sqrt(5))))*fNo*fNo)/4;

    return fPentgon;
}

int main()
{
    float fLength = 0.0f;
    float fArea = 0.0f;

    printf("========================================\n");
    printf("Enter the length of side:==>> ");
    scanf("%f",&fLength);
    printf("========================================\n");
    
    fArea = AreaPentagon(fLength);

    printf("========================================\n");
    printf("Area of Pentagon is :==>>> %f\n",fArea);
    printf("========================================\n");

}