#include <stdio.h>
int main() {

float nums[6] = {0, 0, 0, 0, 0, 0};
float min=10, max=0, avg =0;

for (int i = 0; i < 6; i++)
{
    printf("calificacion %d = ", i + 1);

    scanf("%f", &nums[i]);

    if (nums[i]>10 || nums[i]<0)
    {
        printf("El valor ingresado no es correcto, se debe volver a ingresar\n");
        i--;
    }
}
//algoritmo max y min
for (int i = 0; i < 6; i++)
{
    if(nums[i]>max)
    {
        max=nums[i];
    }
     if(nums[i]<min)
    {
        min=nums[i];
    }
//promedio
        avg=avg+nums[i];
}
        avg=avg/6;

    printf("La calificacion mas alta es: %.2f\n", max);
    printf("La calificacion mas baja es: %.2f\n", min);
    printf("EL promedio es: %.2f\n", avg);

return 0;
}
