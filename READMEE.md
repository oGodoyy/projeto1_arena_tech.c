# Arena Tech – Planejador de Maratona Gamer

Nome: João Pedro Pereira de Godoy -  46914064

## Sobre o projeto

O projeto Arena Tech consiste no desenvolvimento de um programa em linguagem C
para auxiliar no planejamento de uma maratona gamer.
O programa recebe informações sobre participantes, equipes, computadores,
potência dos computadores, duração do evento e custos.
A partir desses dados, realiza cálculos relacionados à quantidade de times,
consumo de energia, alimentação e demais despesas do evento.
Ao final, o programa apresenta um relatório com os principais resultados,
incluindo o custo total e o custo médio por participante

## Tecnologias utilizadas

- Linguagem C
- Biblioteca `stdio.h
- Biblioteca `math.h
- GitHub

## Funcionamento

O programa solicita ao usuário os dados necessários para o planejamento da
maratona gamer, como número de participantes, jogadores por equipe,
quantidade de computadores, potência dos computadores, duração do evento
e valores dos custos.
Com essas informações, o programa calcula a quantidade de times necessária,
o consumo de energia em kWh, o custo da energia, o custo da alimentação,
o custo total do evento e o custo médio por participante.
Os resultados são apresentados ao usuário por meio de um relatório no terminal
## Cálculos realizados

### Quantidade de times
A quantidade de times é calculada dividindo o número de participantes
pelo número de jogadores por time. A função `ceil()` é utilizada para
arredondar o resultado para cima quando houver uma equipe incompleta.

### Consumo de energia
O consumo de energia é calculado convertendo a potência dos computadores
de watts para quilowatts e multiplicando pela quantidade de computadores
e pela duração do evento.

### Custos 
- O custo da energia é obtido multiplicando o consumo de energia pelo preço
do kWh.
- O custo da alimentação é calculado multiplicando o número de participantes
pelo preço do kit de alimentação.
- O custo total corresponde à soma do custo da energia, custo da alimentação
e outros custos do evento.
- Por fim, o custo médio por participante é calculado dividindo o custo total
pelo número de participantes.

## Teste realizado

Foi realizado um teste utilizando os dados fornecidos no enunciado:
- Participantes: 25
- Jogadores por time: 3
- Computadores: 20
- Potência por computador: 600 W
- Duração do evento: 2 horas
- Preço do kWh: R$ 1,00
- Preço do kit de alimentação: R$ 25,00
- Outros custos: R$ 200,0

### Resultado esperado

- Quantidade de times: 9
- Consumo de energia: 24,00 kWh
- Custo da energia: R$ 24,00
- Custo da alimentação: R$ 625,00
- Custo total: R$ 849,00
- Custo médio por participante: R$ 33,96

 ## Estrutura do projeto

```text
Arena-Tech/
│
├── projeto1_arena_tech.c
└── README.md
