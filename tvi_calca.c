#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//Importamos as bibliotecas necessárias para a realização dos calculos e verificação

int main(){

//declaração das variaveis que iremos usar
float x, y, e = 2.718282, k, dist, centro, t;


//input para pedir os valores do intervalo
printf("Digite o primeiro valor do intervalo:\n");
scanf("%f", &x);
printf("Digite o segundo valor do intervalo:\n");
scanf("%f", &y);

if(x > y){
    t = x;
    x = y;
    y = t;
}
//função para aplicar os valores na fórmula e obter o valor intermediario
float valori(float j){
    k = pow(e, -j) - 2 * pow(j, 2) + 4;
    return k;
}


//função que verifica se há raizes. caso os valores sejam menores que 0 e opostos, então há um mometo em que o eixo x é cortado
bool oposicao(float a, float b) {
   if(a <= 0 && b >= 0){return true;}
    if(a >= 0 && b <= 0){return true;}
    else {return false;}
}


//verifica se há oposição entre o vi de x, y e valor do centro. calcula a distancia entre eles e 
if(oposicao(valori(x), valori(y))){
    dist = y - x;
    while (dist > 0.1) {
        centro = x + (dist/2);
        if (oposicao(valori(x), valori(centro))) {
        y = centro;
        } 
        else if (oposicao(valori(centro), valori(y))) {
            x = centro;
        }
    dist = y - x;
}

//printa a menagem ao usuario
printf("A equacao tem pelo menos uma solucao neste intervalo: [%f , %f]\n", x, y);
} 
else {
    printf("Nao e possivel afirmar que existe solucao neste intervalo, tente outros dois numeros.\n");
}
return 0;
}