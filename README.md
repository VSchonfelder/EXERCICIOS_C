1-  A conjectura de Goldbach (ainda não provada) afirma que qualquer número par maior ou
igual a 4 é a soma de dois números primos. Desenvolva um programa que, ao receber
um número P par (2 ≤ P ≤ 4.294.967.294), retorne dois números inteiros
correspondentes aos dois números primos cuja soma seja igual ao número par P.

Considere as seguintes regras:
i. Os valores de saída devem ser ordenados em ordem crescente.
ii. Se houver mais de uma combinação possível, retorne aquela cujo primeiro valor seja
o menor.


2-  Problema de Josephus é assim conhecido por causa da lenda de Flavius Josephus,
um historiador judeu que viveu no século 1. Segundo o relato de Josephus do cerco de
Yodfat, ele e seus companheiros (40 soldados) foram presos em uma caverna, cuja
saída foi bloqueada pelos romanos. Eles preferiram suicidar-se a serem capturados, e
decidiram que iriam formar um círculo e começar a matar-se pulando de três em três.
Josephus afirma que, por sorte ou talvez pela mão de Deus, ele permaneceu por último
e preferiu entregar-se aos romanos a suicidar-se. Elabore um programa em C que leia
um inteiro representando a quantidade de casos de teste. Para cada caso de teste,
retorne a posição do sobrevivente, após ler dois números inteiros: (i) numero e (ii)
salto. O número numero representa a quantidade de pessoas no círculo, numeradas
de 1 até numero. O número salto representa o tamanho do salto de um homem até o
próximo homem que será morto.


3- Elabore um programa em C que implemente a Cifra de César. Devem ser recebidos
como entradas três argumentos: (i) uma string formada por caracteres ASCII, chamada
mensagem, (ii) um valor inteiro chamado pulo e (iii) um caractere chamado direcao,
que pode assumir dois valores: ‘E’ para esquerda ou ‘D’ para direita. O programa deverá
codificar a mensagem ao trocar cada caractere da mensagem pelo seu respectivo
caractere localizado na posição mensagem[i] + pulo, caso direcao seja ‘D’ ou
mensagem[i] - pulo, caso direcao seja ‘E’. Considere o alfabeto
compreendendo os valores da tabela ASCII pertencentes ao intervalo [33, 126]. Os
espaços não devem ser codificados. Obs.: atente-se aos casos de fronteira: caso a
codificação ASCII de um caractere for 126, pulo for igual a 3 e direção igual a ‘D’, o
caractere escolhido será o 35 e vice-versa. Ao final, o programa deve exibir a
mensagem criptografada.
