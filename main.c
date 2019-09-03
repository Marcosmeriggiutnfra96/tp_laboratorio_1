#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
    float x = 0;
    float y = 0;
    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicasion;
    float resultadoDivicion;
    int resultadoFactorial1;
    int resultadoFactorial2;
    int opcion;
    int flag1=0;
    int flag2=0;
    int flag3=0;

    do
    {

        printf("\n                :: C A L C U L A D O R A ::                    \n\n");

        printf("-------------------------------------------------------------------\n");

        printf("--------------OPCION 1 : INGRESE PRIMER OPERANDO \n");
        printf("--------------OPCION 2 : INGRESE SEGUNDO OPERANDO \n");
        printf("--------------OPCION 3 : REALIZAR CALCULOS \n");
        printf("--------------OPCION 4 : MOSTRAR RESULTADOS DE LOS CALCULOS \n");
        printf("--------------OPCION 5 : SALIR \n");
        printf("operando 1: %.2f\n",x);
        printf("operando 2: %.2f\n",y);
        printf("\n             SELECCIONE UNA OPCION          \n");
        scanf("%d",&opcion);

        switch(opcion)
        {

        case 1 :

            printf("---INGRESASTE OPCION 1-----\n");
            printf("INGRESE EL PRIMER OPERANDO:  ");
            scanf("%f",&x);
            printf("INGRESASTE: %.2f\n",x);
            flag1=1;
            break;

        case 2 :
            if(flag1==1)
            {
                printf("---INGRESASTE OPCION 2-----\n");
                printf("INGRESE EL SEGUNDO OPERANDO:  ");
                scanf("%f",&y);
                while(y==0){
                    printf("INGRESE un numero distinto de 0:  ");
                scanf("%f",&y);
                }
                printf("INGESASTE:%.2f\n",y);
                flag2=1;
                break;
            }
            else
            {

                printf("PRIMERO DEBE INGRESAR OPCION 1 \n");

                break;
            }
        case 3 :
            if(flag2==1)
            {
                printf("---INGRESASTE OPCION 3-----\n");

                resultadoSuma= suma(x,y);

                resultadoResta= resta(x,y);

                resultadoMultiplicasion= multiplicacion(x,y);

                resultadoDivicion=dividir(x,y);

                resultadoFactorial1=factorial(x);

                resultadoFactorial2=factorial(y);

                flag3=1;

                break;
            }
            else
            {

                printf("PRIMERO DEBE INGRESAR LOS 2 OPERANDOS\n");
                break;
            }

        case 4 :
            if(flag3==1)
            {

                printf("---INGRESASTE OPCION 4-----\n");
                printf("EL RESULTADO DE %.2f + %.2f ES: %.2f \n",x,y,resultadoSuma);
                printf("EL RESULTADO DE %.2f - %.2f ES: %.2f\n",x,y,resultadoResta);
                printf("EL RESULTADO DE %.2f * %.2f ES: %.2f\n",x,y,resultadoMultiplicasion);
                printf("EL RESULTADO DE %.2f / %.2f ES: %.2f\n",x,y,resultadoDivicion);
                printf("EL FACTORIAl DE %.2f ES: %d Y EL FACTORIAL DE %.2f ES: %d \n",x,resultadoFactorial1,y,resultadoFactorial2);

                break;
            }
            else
            {

                printf("PRIMERO DEBE HACER LOS CALCULOS\n");
                break;
            }

        case 5 :
            printf(" HASTA LUEGO BYE \n");

            break;

        default:

            printf("LA OPCION INGRESADA NO ES VALIDAS");
            break;
        }

        system("pause");
        system("cls");
    }

    while(opcion!=5);

    return 0;
}
