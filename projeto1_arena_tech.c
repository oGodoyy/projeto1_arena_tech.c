#include <stdio.h>
#include <math.h>




int main (){
 int participantes;
 int jogadoresPorTime;
 int computadores; 

 int quantidadeTimes;
 
 
 float potenciaComputador;
 float duracaoEvento;
 float precoKwh;
 float precoKit;
 float outosCustos;

 float consumoEnergia;
 float custoEnergia;
 float custoAlimentação; 
 float custoTotal; 
 float custoMedio;

 
 printf("Numero de Participantes?: ");
 scanf("%d", &participantes);
 
 printf("Quantos jogadores por time?: ");
 scanf("%d", &jogadoresPorTime);
 
 printf("Qual a quantidade de computadores?: ");
 scanf("%d", &computadores);
 
 

 
 
 printf("Qual a potencia do computador em W?: ");
 scanf("%f", &potenciaComputador);
 
 printf("Qual a duração do evento em horas?: ");
 scanf("%f", &duracaoEvento);
 
 printf("Digite o preço do kWh: ");
 scanf("%f", &precoKwh);
 
 printf("Digite o preço do Kit Alimentação: ");
 scanf("%f", &precoKit);
 
 printf("Digite outros custos: ");
 scanf("%f", &outosCustos);
 

// calculo da quantidade de time
 quantidadeTimes = (int)ceil((float)participantes / jogadoresPorTime);
   
// calculo do consumo de energia durante o evento 
 consumoEnergia = (potenciaComputador / 1000) * computadores * duracaoEvento;
 
// calculo do custo de energia 
 custoEnergia = consumoEnergia * precoKwh; 

// calculo do custo alimentação 
custoAlimentação = participantes * precoKit;

// calculo custo custo Total
custoTotal = custoAlimentação + custoEnergia + outosCustos;

// calculo custo medio para cada participante
custoMedio = custoTotal / participantes;



printf("\n ===== Relatorio ===== \n");

printf("Quantidade de times: %d\n", quantidadeTimes);
printf("Consumo de energia: %.2f\n kWh", consumoEnergia);
printf("Custo da energia: R$%.2f\n", custoEnergia);
printf("Custo da Alimentação: R$%.2f\n", custoAlimentação);
printf("Custo total do evento: R$%.2f\n", custoTotal);
printf("Custo medio por participantes: R$%.2f\n", custoMedio);
 

    return 0;
}
