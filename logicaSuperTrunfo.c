#include <stdio.h>

// Desafio Super Trunfo - Cidades


int main() {

    // Definindo variáveis

    // Estados
    char Estado_01, Estado_02;    
    // Código das cartas
    char cod_carta_01[4] = "A01";
    char cod_carta_02[4] = "B02";
    // Cidades
    char cidade_01[30] = "São Paulo";
    char cidade_02[30] = "Rio de Janeiro";
    // População das cidades
    long int populacao_cid_01, populacao_cid_02;    
    // Área da cidade
    float area_cid_01, area_cid_02;    
    // Produto interno bruto das cidades
    float PIB_cid_01, PIB_cid_02;
    double PIB_decimal_cid_01, PIB_decimal_cid_02;    
    // Número de pontos turísticos
    int ponto_turistico_cid_01, ponto_turistico_cid_02;    
    // Densidade populacional
    float densidade_cidade_01, densidade_cidade_02;    
    // PIB per capta
    float PIB_per_capita_01, PIB_per_capita_02;    
    // atributo super poder
    double superPoder_cid_01, superPoder_cid_02;    
    // modo de teste (insere valores automaticamente)
    char modoTeste;
    // opção para escolha de atributo a ser comparado
    int opcaoAtributo1, opcaoAtributo2;
    // atributos que serão somados ao final
    double Atributo_a_Carta1, Atributo_a_Carta2, Atributo_b_Carta1, Atributo_b_Carta2;
    // resultado final
    double resultadoFinal_carta1, resultadoFinal_carta2;
    

    // mensagem de boas vindas
    printf("============================================\n"
        "Bem-vindo ao jogo Super Trunfo Cidades!\n"
        "Prepare-se para desafiar seus conhecimentos!\n"
        "============================================\n");
    
    // aguardando resposta do usuário
    getchar();

    // "limpando a tela"
    printf("\n\n\n\n\n\n\n\n\n");

    // mensagem de início
    printf("Iniciar modo de teste (S / N)?.\n");
    scanf(" %c", &modoTeste);

    // analisando resposta de modo teste
    if (modoTeste == 'S' || modoTeste == 's')
    {
        printf("Modo Automático ativado! Atribuindo valores automaticamente.\n");
        printf("Pressione enter para prosseguir\n");
        getchar();

    // atribuindo dados automaticamente caso modo teste ativado
        Estado_01 = 'A';
        Estado_02 = 'B';
        populacao_cid_01 = 12325000;
        populacao_cid_02 = 6748000;
        area_cid_01 = 1521.11;
        area_cid_02 = 1200.25;
        PIB_cid_01 = 699.28;
        PIB_cid_02 = 300.50;
        ponto_turistico_cid_01 = 50;
        ponto_turistico_cid_02 = 30;
    } else {    

    // solicitando dados do usuário caso modo teste desativado
    // Leitura dos dados da carta 01
    printf("DADOS DA CARTA 01\n");
    printf("Digite o Estado (representado por uma letra de 'A' a 'H'): \n");
    scanf(" %c", &Estado_01); // Lê o caracter representando o Estado
    printf("Insira o código da carta A letra do estado seguida de um número de 01 a 04 (ex: A01): \n"); 
    scanf("%s", cod_carta_01); // Lê a string para o código da carta
    printf("Insira o nome da cidade: \n");
    scanf(" %[^\n]", cidade_01); // Lê a string para o nome da cidade
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%ld", &populacao_cid_01);
    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area_cid_01); // Lê o tamanho da área da cidade
    printf("Informe o Produto Interno Bruto da cidade: \n");
    scanf("%f", &PIB_cid_01); // Lê o PIB da cidade
    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &ponto_turistico_cid_01); // Lê a quantidade de pontos turísticos da cidade

    printf("\n\n\n");

    // Leitura dos dados da carta 02
    printf("DADOS DA CARTA 02\n");
    printf("Digite o Estado (representado por uma letra de 'A' a 'H'): \n");
    scanf(" %c", &Estado_02); 
    printf("Insira o código da carta A letra do estado seguida de um número de 01 a 04 (ex: A01): \n"); 
    scanf("%s", cod_carta_02);
    printf("Insira o nome da cidade: \n");
    scanf(" %[^\n]", cidade_02); 
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%ld", &populacao_cid_02);
    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area_cid_02); 
    printf("Informe o Produto Interno Bruto da cidade: \n");
    scanf("%f", &PIB_cid_02); 
    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &ponto_turistico_cid_02); 

    printf("\n\n\n");
    }

    // Transformando PIB para decimal (para calcular PIB per capita)
    PIB_decimal_cid_01 = (double)PIB_cid_01 * 1e9;
    PIB_decimal_cid_02 = (double)PIB_cid_02 * 1e9;
    // Calculando Densidade
    densidade_cidade_01 = populacao_cid_01 / area_cid_01;
    densidade_cidade_02 = populacao_cid_02 / area_cid_02;
    // calculando PIB per capta
    PIB_per_capita_01 = PIB_decimal_cid_01 / populacao_cid_01;
    PIB_per_capita_02 = PIB_decimal_cid_02 / populacao_cid_02;

    // Exibindo os dados da carta 01
    printf("Carta 01\n");
    printf("Estado: %c\n", Estado_01); // Imprime o Estado
    printf("Código: %s\n", cod_carta_01); // Imprime o código da carta
    printf("Nome da Cidade: %s\n", cidade_01); // Imprime o nome da cidade
    printf("População: %ld\n", populacao_cid_01); // Imprime a população da cidade
    printf("Área: %.2f km²\n", area_cid_01); // Imprime a área da cidade
    printf("PIB: %.2f bilhões de Reais\n", PIB_cid_01); // Imprime o PIB da cidade
    printf("Números de Pontos Turísticos: %d\n", ponto_turistico_cid_01); // Imprime o número de pontos turísticos da cidade
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_cidade_01); // Imprime a densidade populacional da cidade
    printf("PIB per Capita: R$ %.2f\n", PIB_per_capita_01); // Imprime o PIB per capita da cidade

    printf("\n\n");

    // Exibindo os dados da carta 02
    printf("Carta 02\n");
    printf("Estado: %c\n", Estado_02); 
    printf("Código: %s\n", cod_carta_02);
    printf("Nome da Cidade: %s\n", cidade_02); 
    printf("População: %ld\n", populacao_cid_02); 
    printf("Área: %.2f km²\n", area_cid_02); 
    printf("PIB: %.2f bilhões de Reais\n", PIB_cid_02); 
    printf("Números de Pontos Turísticos: %d\n", ponto_turistico_cid_02);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_cidade_02);
    printf("PIB per Capita: R$ %.2f\n", PIB_per_capita_02);

    printf("\n\n");

    // calculando super poder (soma de todos os atributos mais o inverso de densidade populacional)
    superPoder_cid_01 = populacao_cid_01 + area_cid_01 + PIB_cid_01 + ponto_turistico_cid_01 + PIB_per_capita_01 + ((1 / densidade_cidade_01) * 100000);
    superPoder_cid_02 = populacao_cid_02 + area_cid_02 + PIB_cid_02 + ponto_turistico_cid_02 + PIB_per_capita_02 + ((1 / densidade_cidade_02) * 100000);
    // * a multiplicação da densidade por 100.000 é para equilibrar o valor do atributo em comparação aos demais

    // menu interativo (escolha de atributo)
    printf("Dados das cartas preenchidos.\n");
    printf("A seguir escolha 2 atributos que deseja comparar.\n\n");
    // escolha do atributo 1
    printf("# Escolha o primeiro atributo #\n");
    printf("1 - População.\n");
    printf("2 - Área.\n");
    printf("3 - PIB.\n");
    printf("4 - Pontos Turísticos.\n");
    printf("5 - Densidade Populacional.\n");
    printf("6 - PIB per Capita.\n");
    printf("7 - Super Poder.\n");
    scanf("%d", &opcaoAtributo1);
    printf("\n");

    // escolha do atributo 2
    printf("# Agora escolha o segundo atributo #\n");
    printf("1 - População.\n");
    printf("2 - Área.\n");
    printf("3 - PIB.\n");
    printf("4 - Pontos Turísticos.\n");
    printf("5 - Densidade Populacional.\n");
    printf("6 - PIB per Capita.\n");
    printf("7 - Super Poder.\n");
    scanf("%d", &opcaoAtributo2);
    if (opcaoAtributo1 == opcaoAtributo2)
    {
        printf("** Escolha um atributo diferente do primeiro!! **\n");
    } else 
    {    

    printf("\n\n");

    // comparação atributo 1
    switch (opcaoAtributo1)
    {
    case 1:
        printf("Primeiro atributo escolhido: População.\n");
        printf("População de %s: %li\n", cidade_01, populacao_cid_01);
        printf("População de %s: %li\n", cidade_02, populacao_cid_02);
        // salvando o valor do atributo para a soma com o atributo 2
        Atributo_a_Carta1 = populacao_cid_01;
        Atributo_a_Carta2 = populacao_cid_02;
        
        if (populacao_cid_01 > ponto_turistico_cid_02)
        {
            printf("Vencedor: %s\n", cidade_01);
        } 
            else if (populacao_cid_01 < ponto_turistico_cid_02)
        {
            printf("Vencedor: %s\n", cidade_02);
        }
            else {
                printf("Empate!\n");
            }
        break;

    case 2:
        printf("Primeiro atributo escolhido: Área.\n");
        printf("Área de %s: %.2f km²\n", cidade_01, area_cid_01);
        printf("Área de %s: %.2f km²\n", cidade_02, area_cid_02);
        // salvando o valor do atributo para a soma com o atributo 2
        Atributo_a_Carta1 = area_cid_01;
        Atributo_a_Carta2 = area_cid_02;
        
        if (area_cid_01 > area_cid_02)
        {
            printf;("Vencedor: %s\n", cidade_01);
        } 
            else if (area_cid_01 < area_cid_02)
        {
            printf("Vencedor: %s\n", cidade_02);
        }
            else {
                printf("Empate!\n");
            }
        break;

    case 3:
        printf("Primeiro atributo escolhido: PIB.\n");
        printf("PIB de %s: %.2f bilhões de Reais\n", cidade_01, PIB_cid_01);
        printf("PIB de %s: %.2f bilhões de Reais\n", cidade_02, PIB_cid_02);
        // salvando o valor do atributo para a soma com o atributo 2
        Atributo_a_Carta1 = PIB_decimal_cid_01;
        Atributo_a_Carta2 = PIB_decimal_cid_02;
        
        if (PIB_cid_01 > PIB_cid_02)
        {
            printf("Vencedor: %s\n", cidade_01);
        } 
            else if (PIB_cid_01 < PIB_cid_02)
        {
            printf("Vencedor: %s\n", cidade_02);
        }
            else {
                printf("Empate!\n");
            }
        break;

    case 4:
        printf("Primeiro atributo escolhido: Pontos Turísticos.\n");
        printf("Pontos Turísticos de %s: %d\n", cidade_01, ponto_turistico_cid_01);
        printf("Pontos Turísticos de %s: %d\n", cidade_02, ponto_turistico_cid_02);
        // salvando o valor do atributo para a soma com o atributo 2
        Atributo_a_Carta1 = ponto_turistico_cid_01;
        Atributo_a_Carta2 = ponto_turistico_cid_02;
        
        if (ponto_turistico_cid_01 > ponto_turistico_cid_02)
        {
            printf("Vencedor: %s\n", cidade_01);
        } 
            else if (ponto_turistico_cid_01 < ponto_turistico_cid_02)
        {
            printf("Vencedor: %s\n", cidade_02);
        }
            else {
                printf("Empate!\n");
            }
        break;

    case 5:
        printf("Primeiro atributo escolhido: Densidade Populacional.\n");
        printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade_01, densidade_cidade_01);
        printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade_02, densidade_cidade_02);
        // salvando o valor do atributo para a soma com o atributo 2
        Atributo_a_Carta1 = densidade_cidade_01;
        Atributo_a_Carta2 = densidade_cidade_02;
        
        if (densidade_cidade_01 < densidade_cidade_02)
        {
            printf("Vencedor: %s\n", cidade_01);
        } 
            else if (densidade_cidade_01 > densidade_cidade_02)
        {
            printf("Vencedor: %s\n", cidade_02);
        }
            else {
                printf("Empate!\n");
            }
        break;

    case 6:
        printf("Primeiro atributo escolhido: PIB per Capita.\n");
        printf("PIB per Capita de %s: R$ %.2f\n", cidade_01, PIB_per_capita_01);
        printf("PIB per Capita de %s: R$ %.2f\n", cidade_02, PIB_per_capita_02);
        // salvando o valor do atributo para a soma com o atributo 2
        Atributo_a_Carta1 = PIB_per_capita_01;
        Atributo_a_Carta2 = PIB_per_capita_02;
        
        if (PIB_per_capita_01 > PIB_per_capita_02)
        {
            printf("Vencedor: %s\n", cidade_01);
        } 
            else if (PIB_per_capita_01 < PIB_per_capita_02)
        {
            printf("Vencedor: %s\n", cidade_02);
        }
            else {
                printf("Empate!\n");
            }
        break;

    case 7:
        printf("Primeiro atributo escolhido: Super Poder.\n");
        printf("Super Poder de %s: %.2f\n", cidade_01, superPoder_cid_01);
        printf("Super Poder de %s: %.2f\n", cidade_02, superPoder_cid_02);
        // salvando o valor do atributo para a soma com o atributo 2
        Atributo_a_Carta1 = superPoder_cid_01;
        Atributo_a_Carta1 = superPoder_cid_02;
        
        if (superPoder_cid_01 > superPoder_cid_02)
        {
            printf("Vencedor: %s\n", cidade_01);
        } 
            else if (superPoder_cid_01 < superPoder_cid_02)
        {
            printf("Vencedor: %s\n", cidade_02);
        }
            else {
                printf("Empate!\n");
            }
        break;
    
    default:
    printf("Opção inválida! Saindo do jogo.\n");
        break;
    }

    // comparação atributo 2
    switch (opcaoAtributo2)
    {
    case 1:
        printf("Segundo atributo escolhido: População.\n");
        printf("População de %s: %li\n", cidade_01, populacao_cid_01);
        printf("População de %s: %li\n", cidade_02, populacao_cid_02);
        // salvando o valor do atributo para a soma com o atributo 1
        Atributo_b_Carta1 = populacao_cid_01;
        Atributo_b_Carta2 = populacao_cid_02;
        
        if (populacao_cid_01 > ponto_turistico_cid_02)
        {
            printf("Vencedor: %s\n", cidade_01);
        } 
            else if (populacao_cid_01 < ponto_turistico_cid_02)
        {
            printf("Vencedor: %s\n", cidade_02);
        }
            else {
                printf("Empate!\n");
            }
        break;

    case 2:
        printf("Segundo atributo escolhido: Área.\n");
        printf("Área de %s: %.2f km²\n", cidade_01, area_cid_01);
        printf("Área de %s: %.2f km²\n", cidade_02, area_cid_02);
        // salvando o valor do atributo para a soma com o atributo 1
        Atributo_b_Carta1 = area_cid_01;
        Atributo_b_Carta2 = area_cid_02;
        
        if (area_cid_01 > area_cid_02)
        {
            printf;("Vencedor: %s\n", cidade_01);
        } 
            else if (area_cid_01 < area_cid_02)
        {
            printf("Vencedor: %s\n", cidade_02);
        }
            else {
                printf("Empate!\n");
            }
        break;

    case 3:
        printf("Segundo atributo escolhido: PIB.\n");
        printf("PIB de %s: %.2f bilhões de Reais\n", cidade_01, PIB_cid_01);
        printf("PIB de %s: %.2f bilhões de Reais\n", cidade_02, PIB_cid_02);
        // salvando o valor do atributo para a soma com o atributo 1
        Atributo_b_Carta1 = PIB_decimal_cid_01;
        Atributo_b_Carta2 = PIB_decimal_cid_02;
        
        if (PIB_cid_01 > PIB_cid_02)
        {
            printf("Vencedor: %s\n", cidade_01);
        } 
            else if (PIB_cid_01 < PIB_cid_02)
        {
            printf("Vencedor: %s\n", cidade_02);
        }
            else {
                printf("Empate!\n");
            }
        break;

    case 4:
        printf("Segundo atributo escolhido: Pontos Turísticos.\n");
        printf("Pontos Turísticos de %s: %d\n", cidade_01, ponto_turistico_cid_01);
        printf("Pontos Turísticos de %s: %d\n", cidade_02, ponto_turistico_cid_02);
        // salvando o valor do atributo para a soma com o atributo 1
        Atributo_b_Carta1 = ponto_turistico_cid_01;
        Atributo_b_Carta2 = ponto_turistico_cid_02;
        
        if (ponto_turistico_cid_01 > ponto_turistico_cid_02)
        {
            printf("Vencedor: %s\n", cidade_01);
        } 
            else if (ponto_turistico_cid_01 < ponto_turistico_cid_02)
        {
            printf("Vencedor: %s\n", cidade_02);
        }
            else {
                printf("Empate!\n");
            }
        break;

    case 5:
        printf("Segundo atributo escolhido: Densidade Populacional.\n");
        printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade_01, densidade_cidade_01);
        printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade_02, densidade_cidade_02);
        // salvando o valor do atributo para a soma com o atributo 1
        Atributo_b_Carta1 = densidade_cidade_01;
        Atributo_b_Carta2 = densidade_cidade_02;
        
        if (densidade_cidade_01 < densidade_cidade_02)
        {
            printf("Vencedor: %s\n", cidade_01);
        } 
            else if (densidade_cidade_01 > densidade_cidade_02)
        {
            printf("Vencedor: %s\n", cidade_02);
        }
            else {
                printf("Empate!\n");
            }
        break;

    case 6:
        printf("Segundo atributo escolhido: PIB per Capita.\n");
        printf("PIB per Capita de %s: R$ %.2f\n", cidade_01, PIB_per_capita_01);
        printf("PIB per Capita de %s: R$ %.2f\n", cidade_02, PIB_per_capita_02);
        // salvando o valor do atributo para a soma com o atributo 1
        Atributo_b_Carta1 = PIB_per_capita_01;
        Atributo_b_Carta2 = PIB_per_capita_02;
        
        if (PIB_per_capita_01 > PIB_per_capita_02)
        {
            printf("Vencedor: %s\n", cidade_01);
        } 
            else if (PIB_per_capita_01 < PIB_per_capita_02)
        {
            printf("Vencedor: %s\n", cidade_02);
        }
            else {
                printf("Empate!\n");
            }
        break;

    case 7:
        printf("Segundo atributo escolhido: Super Poder.\n");
        printf("Super Poder de %s: %.2f\n", cidade_01, superPoder_cid_01);
        printf("Super Poder de %s: %.2f\n", cidade_02, superPoder_cid_02);
        // salvando o valor do atributo para a soma com o atributo 1
        Atributo_b_Carta1 = superPoder_cid_01;
        Atributo_b_Carta2 = superPoder_cid_02;
        
        if (superPoder_cid_01 > superPoder_cid_02)
        {
            printf("Vencedor: %s\n", cidade_01);
        } 
            else if (superPoder_cid_01 < superPoder_cid_02)
        {
            printf("Vencedor: %s\n", cidade_02);
        }
            else {
                printf("Empate!\n");
            }
        break;
    
    default:
    printf("Opção inválida! Saindo do jogo.\n");
        break;
    }

    // somando valores dos atributos escolhidos
    while (getchar() != '\n'); // limpando o buffer
    printf("A seguir serão somados os valores dos 2 tipos de atributo\n");
    printf("escolhidos para determinar a carta vencedora da rodada\n\n");
    printf("Pressione Enter para prosseguir: \n");
    getchar();
    printf("\n");
    if (opcaoAtributo1 == 5) {
         Atributo_a_Carta1 = (1 / Atributo_a_Carta1) * 100000; // a multiplicação por 100.000 serve para equilibrar o atributo com os demais após a inversão
         Atributo_a_Carta2 = (1 / Atributo_a_Carta2) * 100000;
    }
    if (opcaoAtributo2 == 5) {
        Atributo_b_Carta1 = (1 / Atributo_b_Carta1) * 100000;
        Atributo_b_Carta2 = (1 / Atributo_b_Carta2) * 100000;
   }

   printf(" Atributo a carta 1: %.2f\n", Atributo_a_Carta1);
   printf(" Atributo a carta 2: %.2f\n", Atributo_a_Carta2);
   printf(" Atributo b carta 1: %.2f\n", Atributo_b_Carta1);
   printf(" Atributo b carta 2: %.2f\n", Atributo_b_Carta2);
    
    resultadoFinal_carta1 = Atributo_a_Carta1 + Atributo_b_Carta1;
    resultadoFinal_carta2 = Atributo_a_Carta2 + Atributo_b_Carta2;
    printf("A soma dos 2 atributos da carta 1 é: %.2f\n", resultadoFinal_carta1);
    printf("A soma dos 2 atributos da carta 2 é: %.2f\n", resultadoFinal_carta2);
    if (resultadoFinal_carta1 > resultadoFinal_carta2)
    {
        printf("Vencedor da rodada: Carta 1");
    } else if (resultadoFinal_carta2 > resultadoFinal_carta1)
    {
        printf("Vencedor da rodada: Carta 2");
    } else {
        printf("Que coisa! A rodada terminou empatada.");
    }
    
    }     

    
    return 0;
}
