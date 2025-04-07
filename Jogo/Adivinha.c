#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Imprime o cabeçalho jogo
    printf("#######################################\n");
    printf("# Bem vindo ao meu jogo de advinhação #\n");
    printf("#######################################\n");
    printf("\n");


    // Variaveis do código
    
    //Tipo int
    int iniciar, numeroSecreto,tentativasModoDificil = 30, dificuldadeDoJogo, chuteJogador,qtdTentativas=1, gerarNumero, segundos;


    //Tipo double
    double pontuaçãoJogador = 1000, pontosPerdidios; 

    //Gerar número aleatório
    segundos = time(0);
    srand(segundos);

    gerarNumero = rand();

    numeroSecreto = gerarNumero % 100;

    //Verificar se o usuário vai querer jogar 
    printf("Digite: (1) para INICIAR o jogo ou (0) para SAIR do jogo\n");
    scanf("%d", &iniciar);

    //Verifica se o usúario iniciou o jogo
    if (iniciar == 1) {

        printf("Defina em qual dificuldade você quer jogar: (1) Fácil, (2) Difícil\n");
        scanf("%d", &dificuldadeDoJogo);

        //Verifica se a dificuldade é fácil 
        if (dificuldadeDoJogo == 1){

            printf("Você escolheu o Modo Fácil !\n");

            while(1){

                printf("Digite qual é o seu chute: \n");
                scanf("%d",&chuteJogador);

                if (chuteJogador < 0){
                    printf("Não pode chutar número negativos !\n");
                }else if (chuteJogador != numeroSecreto){
                    printf("Você errou ! Continue Tentando !\n");

                    if(chuteJogador > numeroSecreto){
                        printf("DICA: Seu chute foi maior que o número secreto !\n");
                        printf("\n");

                        }else{
                            printf("DICA: Seu chute foi menor que o número secreto !\n");
                            printf("\n");
                        }

                        //Verifica a pontuaçãoJogador para ela não ser negativa
                        if(chuteJogador < numeroSecreto){
                            pontosPerdidios = (numeroSecreto - chuteJogador) /2.0;
                            pontuaçãoJogador = pontuaçãoJogador - pontosPerdidios;
                        }else{
                            pontosPerdidios = (chuteJogador - numeroSecreto) /2.0;
                            pontuaçãoJogador = pontuaçãoJogador - pontosPerdidios;
                        }

                }else {
                    printf("Parabéns você acertou o número secreto! Sua pontuação foi: %.2lf\n",pontuaçãoJogador);

                    break;
                    
                }

            }
        }

        //Verifica se a dificuldade é dificil
        if (dificuldadeDoJogo == 2) {
            printf("Você escolheu o Modo Difícil! Você tem 30 tentativas para acertar o número secreto !\n");
            printf("\n");

            int qtdErro=0, resposta;

            for(int i = 1; i <= tentativasModoDificil; i++){

                printf("Digite qual é o seu chute: \n");
                scanf("%d",&chuteJogador);

                if (chuteJogador < 0){
                    printf("Não pode chutar número negativos !\n");

                }else if (chuteJogador != numeroSecreto){
                        
                        qtdTentativas++;
                        qtdErro++; 

                        //Pontuação do usuário
                        if(chuteJogador < numeroSecreto){
                            pontosPerdidios = (numeroSecreto - chuteJogador) /2.0;
                            pontuaçãoJogador = pontuaçãoJogador - pontosPerdidios;
                        }else{
                            pontosPerdidios = (chuteJogador - numeroSecreto) /2.0;
                            pontuaçãoJogador = pontuaçãoJogador - pontosPerdidios;
                        }

                        printf("Você errou ! Continue Tentando !\n");

                        if(qtdTentativas == 10){
                            printf("Você Perdeu !\n");
                        }

                        // Dar dicas a cada 2 erros do usuario;
                        if(qtdErro % 2 == 0){

                            if(chuteJogador > numeroSecreto){
                                printf("Dica: Seu chute foi maior que o número secreto!\n");
                                printf("\n");
                            }else{
                                printf("Dica: Seu chute foir menor que o número secreto!\n");
                            }
                        }
                    
                }else {

                    printf("Parabéns você acertou o número secreto com %d tentativas ! e ganhou com: %.2lf Pontos !\n", qtdTentativas,pontuaçãoJogador);
                    break;
                }
            }

        }               
        
    }

    return 0;
}