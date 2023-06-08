#include <stdio.h>

int main(){
    int arreglo [100];
   //llenar arreglo
   for(int i = 0; i< 100; i++){
    arreglo[i] = (i + 1) * 2;
   } 
   //Mostrar el arreglo en pantalla
for (int i = 0; i< 100; i++){
printf("arreglo[%d] = %d\n", i , arreglo[i]);
}
return 0;

}