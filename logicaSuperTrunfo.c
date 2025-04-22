#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.


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
    
    /*// Armazenador de resultados
    int resultados[7];*/ // código antigo
   
    // atributo "super poder"
    double superPoder_cid_01, superPoder_cid_02;
    
    // modo de teste (insere valores automaticamente)
    char modoTeste;

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
    scanf("%c", &modoTeste);

    // analisando resposta de modo teste
    if (modoTeste == 'S' || modoTeste == 's')
    {
        getchar();
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
        getchar();  // Consome o '\n' deixado pelo scanf anterior
    printf("Insira o nome da cidade: \n");
    scanf("%[^\n]", cidade_01); // Lê a string para o nome da cidade
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
        getchar();  // Consome o '\n' deixado pelo scanf anterior
    printf("Insira o nome da cidade: \n");
    scanf("%[^\n]", cidade_02); 
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

    // calculando super poder (soma de todos os atributos mais o inverso de densidade populacional)
    superPoder_cid_01 = populacao_cid_01 + area_cid_01 + PIB_cid_01 + ponto_turistico_cid_01 + PIB_per_capita_01 + (1 / densidade_cidade_01);
    superPoder_cid_02 = populacao_cid_02 + area_cid_02 + PIB_cid_02 + ponto_turistico_cid_02 + PIB_per_capita_02 + (1 / densidade_cidade_02);

    /*// comparando resultados (código antigo)
    resultados[0] = (populacao_cid_01 > populacao_cid_02 ? 1 : 2);
    resultados[1] = (area_cid_01 > area_cid_02 ? 1 : 2);
    resultados[2] = (PIB_cid_01 > PIB_cid_02 ? 1 : 2);
    resultados[3] = (ponto_turistico_cid_01 > ponto_turistico_cid_02 ? 1 : 2);
    resultados[4] = (densidade_cidade_01 < densidade_cidade_02 ? 1 : 2); // inverte a comparação, uma vez que, quanto menor melhor
    resultados[5] = (PIB_per_capita_01 > PIB_per_capita_02 ? 1 : 2);
    resultados[6] = (superPoder_cid_01 > superPoder_cid_02 ? 1 : 2);*/

    printf("\n\n");
    // comparando resultados
    printf("Comparando atributo 'Densidade Populacional':\n");
    printf("Carta 1 - %s (%c): %.2f hab/km²\n", cidade_01, Estado_01, densidade_cidade_01);
    printf("Carta 2 - %s (%c): %.2f hab/km²\n", cidade_02, Estado_02, densidade_cidade_02);

    if (densidade_cidade_01 < densidade_cidade_02)
    {
        printf("Vendedor: Carta 1 (%s)\n", cidade_01);
    } else {
        printf("Vencedor: Carta 2 (%s)\n", cidade_02);
    }
    

   /* printf("\n\n");
    // exibindo vencedor (código antigo)

    printf("População - vencedor: Carta %d\n", resultados[0]);
    printf("Área - vencedor: Carta %d\n", resultados[1]);
    printf("PIB - vencedor: Carta %d\n", resultados[2]);
    printf("Pontos Turísticos - vencedor: Carta %d\n", resultados[3]);
    printf("Densisade Populacional - vencedor: Carta %d\n", resultados[4]);
    printf("PIB per Capita - vencedor: Carta %d\n", resultados[5]);
    printf("Super Poder - vencedor: Carta %d\n", resultados[6]);*/

    
    return 0;
}
