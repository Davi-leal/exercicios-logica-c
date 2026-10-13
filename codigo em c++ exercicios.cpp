#include <stdio.h>
#define ALUNOS 5
#define COLUNAS 3

void lerNotas(float notas[][3], int alunos);
float cacularMedia(float notas[][3], int aluno);
void exibirSituacao(float media);
float calcularMediaTurma(float notas[][3]);
float encontrarMelhorAluno(float media[5]);

int main(){
	float notas[5][3];
	float media[5];
	int alunos;
	float media_turma, maior_media;
	
	lerNotas(notas, alunos);
	
	for(int i=0; i<ALUNOS; i++){
		media[i] = cacularMedia(notas, i);
		printf("media das notas do aluno %d: %.2f\n", i+1, media[i]);
		exibirSituacao(media[i]);
	}
	media_turma = calcularMediaTurma(notas);
	printf("\n\n A media da turma foi %.2f\n", media_turma);
	maior_media = encontrarMelhorAluno(media);
	for(int i=0; i<5; i++){
		if(maior_media == media[i]){
			printf("o aluno com a maior media: %d, sua media foi de %.2f", i+1, media[i]);
			break;
		}
	}
}


void lerNotas(float notas[][3], int alunos){
	printf("--- CADASTRO DAS NOTAS ---\n\n");
	for(int i=0; i<ALUNOS; i++){
		printf("digite a nota do aluno %d\n", i+1);
		for(int j=0; j<COLUNAS; j++){
			do {
				printf("digite a nota %d: ", j+1);
				scanf("%f", &notas[i][j]);
				if (notas[i][j] > 10 || notas [i][j] < 0){
				printf("nota invalida, as notas devem ser de 0 a 10\n");
				printf("digite outra nota.\n");
				}
			} while (notas[i][j] > 10 || notas [i][j] < 0);
		}	
	}
	printf("\n");
}

float cacularMedia(float notas[][3], int aluno){
	float soma = 0;
		for(int j=0; j<COLUNAS; j++){	
			soma += notas[aluno][j];
		}
	return soma/3;
}

void exibirSituacao(float media){
	if(media >= 7.0){
		printf("aprovado!\n");
	}
	else if(media >= 5.0){
		printf("recuperacao!\n");
	}
	else{
		printf("reprovado!\n");
	}
}

float calcularMediaTurma(float notas[][3]){
	float mediaT = 0;
	for(int i=0; i<ALUNOS; i++){
		for(int j=0; j<COLUNAS; j++){
			mediaT+=notas[i][j];
		}	
	}
	return mediaT/15;	
}

float encontrarMelhorAluno(float media[5]){
	float maior_media = media[0];
	for(int i=0; i<5; i++){
		if (maior_media < media[i]){
			maior_media = media[i];
		}
	}
	return maior_media;
}
































