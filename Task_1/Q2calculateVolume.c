#include<stdio.h>
#include<math.h>

#define PI  3.1416

double VolumeSphere(float fRad)
{
    double dValue = 0.0;
    

    dValue = (4.0 / 3.0) * PI  * fRad * fRad * fRad ;

    return dValue;
}

int main()
{
    float fRadius = 0.0f;
    
    double dVolume = 0.0;

    printf("========================================\n");
    printf("Enter the radius of sphere : ");
    scanf("%lf",&fRadius);
    printf("========================================\n");
    

    dVolume = VolumeSphere (fRadius);

    printf("========================================\n");
    printf("Volume of sphere is : %lf\n",dVolume);
    printf("========================================\n");

}