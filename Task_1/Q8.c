// Volume of cube


#include<stdio.h>
#include<math.h>

float VolumeCube(float fNo)
{
    float fValue = 0.0f;

    fValue = (pow(fNo,3));

    return fValue;
    
}

int main()
{
    float fEdge = 0.0f;
   
    float fVolume = 0.0f;

    printf("========================================\n");
    printf("Enter the Edge of Cube :==>> ");
    scanf("%f",&fEdge);
    printf("========================================\n");
    
    fVolume = VolumeCube(fEdge);

    printf("========================================\n");
    printf("Volume of Cube is  :==>>> %f\n",fVolume);
    printf("========================================\n");

    return 0;
}
    