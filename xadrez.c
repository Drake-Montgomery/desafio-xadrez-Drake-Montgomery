#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tabuleiro [8][8], rows, columns;
void mov_Torre(int direcao) {
    if(direcao == 1) {
        for( int rows = 0; rows < 8; rows++) {
            printf("\n");
            for( int columns = 0; columns < 8; columns ++) {
                switch (rows)
                {
                    case 0:
                        tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;  
                        break;
                    case 1:
                        tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                        break;
                    case 2:
                        tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                        break;
                    case 3:
                    tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                        break;
                    case 4:
                    tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                        break;
                    case 5:
                    tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                        break;
                    case 6:
                    tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                        break;
                    case 7:
                    tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                        break;
                    default:
                        tabuleiro[rows][columns] = 0;
                        break;
                }
                printf("[%d] ", tabuleiro[rows][columns]);
                }
            }
            printf("\n");
            printf("O movimento feito foi: \n");
            int x = 0;
            while (x !=  8)
            {
                printf("Cima\n");
                x++;
            };
            printf("============================================\n");
    } else if(direcao == 2) {
        for( int rows = 0; rows < 8; rows++) {
            printf("\n");
            for( int columns = 0; columns < 8; columns ++) {
                if(rows == 7){
                        switch (columns) {
                            case 0:
                                tabuleiro[rows][columns] = 1;
                                break;
                            case 1:
                                tabuleiro[rows][columns] = 1;
                                break;
                            case 2:
                                tabuleiro[rows][columns] = 1;
                                break;
                            case 3:
                                tabuleiro[rows][columns] = 1;
                                break;
                            case 4:
                                tabuleiro[rows][columns] = 1;
                                break;
                            case 5:
                                tabuleiro[rows][columns] = 1;
                                break;
                            case 6:
                                tabuleiro[rows][columns] = 1;
                                break;
                            case 7:
                                tabuleiro[rows][columns] = 1;
                                break;
                        }
                } else {
                    tabuleiro[rows][columns] = 0;
                }
                printf("[%d] ", tabuleiro[rows][columns]);
                }
            }
            printf("\n");
            printf("O movimento feito foi: \n");
            int x = 0;
            while (x !=  8)
            {
                printf("Direita\n");
                x++;
            };
            printf("============================================\n");

        }
};

void mov_Rainha(int direcao_inicial) {
    switch (direcao_inicial)
    {
        case 1:
        //Esquerda
            for( int rows = 0; rows < 8; rows++) {
                printf("\n");
                for( int columns = 0; columns < 8; columns ++) {
                    if(rows == 7) {
                        tabuleiro[rows][columns] = (columns == 2 || columns == 3 ) ? 1 : 0; 
                        printf("[%d] ", tabuleiro[rows][columns]);    
                    }
                    else {
                        tabuleiro[rows][columns] = 0;
                        printf("[%d] ", tabuleiro[rows][columns]);   
                    }
                    }
                }
                printf("\n");
                break;
        case 2:
            //Diagonal Esqueda
            for( int rows = 0; rows < 8; rows++) {
                printf("\n");
                for( int columns = 0; columns < 8; columns ++) {
                    tabuleiro[rows][columns] = (rows == 6 && columns == 2 || rows == 7 && columns == 3 ) ? 1 : 0;
                    printf("[%d] ", tabuleiro[rows][columns]);
                    }
            }
            printf("\n");
            break;
        case 3:
            //Cima
            for( int rows = 0; rows < 8; rows++) {
                printf("\n");
                for( int columns = 0; columns < 8; columns ++) {
                    tabuleiro[rows][columns] = (rows == 6 && columns == 3 || rows == 7 && columns == 3 ) ? 1 : 0;
                    printf("[%d] ", tabuleiro[rows][columns]);
                    }
            }
            printf("\n");
            break;
        case 4:
            //Diagonal Direita 
            for( int rows = 0; rows < 8; rows++) {
                printf("\n");
                for( int columns = 0; columns < 8; columns ++) {
                    tabuleiro[rows][columns] = (rows == 6 && columns == 4 || rows == 7 && columns == 3 ) ? 1 : 0;
                    printf("[%d] ", tabuleiro[rows][columns]);
                    }
            }
            printf("\n");
            break;
        case 5:
            //Direita
            for( int rows = 0; rows < 8; rows++) {
                printf("\n");
                for( int columns = 0; columns < 8; columns ++) {
                    tabuleiro[rows][columns] = (rows == 6 && columns == 4 || rows == 7 && columns == 3 ) ? 1 : 0;
                    printf("[%d] ", tabuleiro[rows][columns]);
                    }
            }
            printf("\n");
            break;
        default:
            break;
    }
    printf("\n");
};

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    int tabuleiro [8][8], rows, columns;
    void mov_Torre(int direcao) {
        if(direcao == 1) {
            for( int rows = 0; rows < 8; rows++) {
                printf("\n");
                for( int columns = 0; columns < 8; columns ++) {
                    switch (rows)
                    {
                        case 0:
                            tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;  
                            break;
                        case 1:
                            tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                            break;
                        case 2:
                            tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                            break;
                        case 3:
                        tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                            break;
                        case 4:
                        tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                            break;
                        case 5:
                        tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                            break;
                        case 6:
                        tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                            break;
                        case 7:
                        tabuleiro[rows][columns] = (columns == 0 ) ? 1 : 0;
                            break;
                        default:
                            tabuleiro[rows][columns] = 0;
                            break;
                    }
                    printf("[%d] ", tabuleiro[rows][columns]);
                    }
                }
                printf("\n");
                printf("O movimento feito foi: \n");
                int x = 0;
                while (x !=  8)
                {
                    printf("Cima\n");
                    x++;
                };
                printf("============================================\n");
        } else if(direcao == 2) {
            for( int rows = 0; rows < 8; rows++) {
                printf("\n");
                for( int columns = 0; columns < 8; columns ++) {
                    if(rows == 7){
                            switch (columns) {
                                case 0:
                                    tabuleiro[rows][columns] = 1;
                                    break;
                                case 1:
                                    tabuleiro[rows][columns] = 1;
                                    break;
                                case 2:
                                    tabuleiro[rows][columns] = 1;
                                    break;
                                case 3:
                                    tabuleiro[rows][columns] = 1;
                                    break;
                                case 4:
                                    tabuleiro[rows][columns] = 1;
                                    break;
                                case 5:
                                    tabuleiro[rows][columns] = 1;
                                    break;
                                case 6:
                                    tabuleiro[rows][columns] = 1;
                                    break;
                                case 7:
                                    tabuleiro[rows][columns] = 1;
                                    break;
                            }
                    } else {
                        tabuleiro[rows][columns] = 0;
                    }
                    printf("[%d] ", tabuleiro[rows][columns]);
                    }
                }
                printf("\n");
                printf("O movimento feito foi: \n");
                int x = 0;
                while (x !=  8)
                {
                    printf("Direita\n");
                    x++;
                };
                printf("============================================\n");
    
            }
    };
    void mov_Rainha(int direcao_inicial) {
        switch (direcao_inicial)
        {
            case 1:
            //Esquerda
                for( int rows = 0; rows < 8; rows++) {
                    printf("\n");
                    for( int columns = 0; columns < 8; columns ++) {
                        if(rows == 7) {
                            tabuleiro[rows][columns] = (columns == 2 || columns == 3 ) ? 1 : 0; 
                            printf("[%d] ", tabuleiro[rows][columns]);    
                        }
                        else {
                            tabuleiro[rows][columns] = 0;
                            printf("[%d] ", tabuleiro[rows][columns]);   
                        }
                        }
                    }
                    printf("\n");
                    break;
            case 2:
                //Diagonal Esqueda
                for( int rows = 0; rows < 8; rows++) {
                    printf("\n");
                    for( int columns = 0; columns < 8; columns ++) {
                        tabuleiro[rows][columns] = (rows == 6 && columns == 2 || rows == 7 && columns == 3 ) ? 1 : 0;
                        printf("[%d] ", tabuleiro[rows][columns]);
                        }
                }
                printf("\n");
                break;
            case 3:
                //Cima
                for( int rows = 0; rows < 8; rows++) {
                    printf("\n");
                    for( int columns = 0; columns < 8; columns ++) {
                        tabuleiro[rows][columns] = (rows == 6 && columns == 3 || rows == 7 && columns == 3 ) ? 1 : 0;
                        printf("[%d] ", tabuleiro[rows][columns]);
                        }
                }
                printf("\n");
                break;
            case 4:
                //Diagonal Direita 
                for( int rows = 0; rows < 8; rows++) {
                    printf("\n");
                    for( int columns = 0; columns < 8; columns ++) {
                        tabuleiro[rows][columns] = (rows == 6 && columns == 4 || rows == 7 && columns == 3 ) ? 1 : 0;
                        printf("[%d] ", tabuleiro[rows][columns]);
                        }
                }
                printf("\n");
                break;
            case 5:
                //Direita
                for( int rows = 0; rows < 8; rows++) {
                    printf("\n");
                    for( int columns = 0; columns < 8; columns ++) {
                        tabuleiro[rows][columns] = (rows == 6 && columns == 4 || rows == 7 && columns == 3 ) ? 1 : 0;
                        printf("[%d] ", tabuleiro[rows][columns]);
                        }
                }
                printf("\n");
                break;
            default:
                break;
        }
        printf("\n");
    };