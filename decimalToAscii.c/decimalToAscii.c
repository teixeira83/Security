#include<stdio.h>


int main(){
  char string[255];
  FILE *arqWELCOME = fopen("artcode.txt","r");
  FILE *arqSaida = NULL;
  int i,j = 0, cont = 0;

  if( arqWELCOME == NULL ){
    fprintf(stderr, "Erro ao abrir o arquivo artcode.txt");
    return 1;
  }

  char c = fgetc(arqWELCOME);
  while (!feof(arqWELCOME)) {
    printf("%c",c);
    c = fgetc(arqWELCOME);
  }
  fclose(arqWELCOME);
  printf("\n\n\n\n\n");

  printf("Digite o código em decimal:");
  scanf("%s", string);
  arqSaida = fopen("saida.txt","w");
  while ( string[j] != '\0'){
    for( i = 0; i < 2; i++ ){
      printf("%c",string[j]);
      fprintf(arqSaida, "%c", string[j] );
      j++;
    }
      printf("\n");
      fprintf(arqSaida, "\n");
      cont++;
  }
  fclose(arqSaida);
  printf("\n\n\n");
  printf("O código digitado possui %d termos e todos foram exportados para um arquivo de texto > saida.txt", cont);
  printf("\n");
}
