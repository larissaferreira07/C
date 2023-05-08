#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	
	char nome [20], nome_maior [20];
	float av1, av2, media, media_maior = 0;
	int i = 0;
	
	 
	while (i < 4){
		printf ("\nAluno %d", i);
		printf ("\nNome: "); scanf ("%s", &nome);
		printf ("AV1: ");  scanf ("%f", &av1);
		printf ("AV2: ");  scanf ("%f", &av2);
		
		media = (av1 + av2) / 2;
		
		if (media < 7){
			printf ("O aluno %s possui media %f e esta reprovado", nome, media);
			printf ("\n");
		}
		else{
			printf ("O aluno %s possui media %f e esta aprovado", nome, media);
			printf ("\n");
		}
		
		
		if (media > media_maior){
			media_maior = media;
			strcpy (nome_maior, nome);
		}
		
		printf ("\n");
		i++;
			
	}
 
 	printf ("\n");
	printf ("O aluno com maior media é %s com a nota %.1f", nome_maior, media_maior);
}

