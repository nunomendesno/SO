#include <stdio.h>
#include <math.h>
#include <stdlib.h>



/*O novo programa (vector-processes) recebe através dos argumentos da linha comando o limite
superior e o número de processos auxiliares a utilizar nos cálculos, i.e. para serem utilizados dois processos
o programa deve ser executado da seguinte forma:

./vector-processes 1000 2

*  O processo principal divide o cálculo em intervalos e envia-os aos processos filhos, i.e., se utilizarmos dois
processos nos cálculos para um vetor de dimensão 1000, teríamos que o primeiro processo realiza os
cáculos no intervalo entre 0 e 499 e o segundo processo entre 500 e 999. Neste caso deve tirar partido do
facto da chamada de sistema fork() criar um processo através da clonagem do processo pai incluindo o
seu espaço de endereçamento.
* 
* Os processos filhos, no fim do processamento, enviam os resultados ao processo principal através do
mecanismo pipe para que este agregue os resultados e os apresente ao utilizador.
Avalie os tempos de execução entre a versão sequencial e a versão baseada em múltiplos processos variando a
dimensão do vetor. Para esta avaliação pode utilizar o programa time, disponível no sistema Linux, da seguinte
forma:
time ./vetor-processes 1000 2
*/



double clacPi(char * argv){
	long int n;
	double sum=0.0;
	double pi=0.0;
	
	n=atol(argv);	
	if(n>= 10000000000)
	{
		for(int k=1;k< n;++k)
			sum+= pow(-1, k+1) / (2*k-1); 
		 
		pi = 4 * sum;
		printf("\nPI = %.10lf\n", pi);
		return pi;
	}
		else
		{
			printf("Numero de dermos devera ser superior a 10*10^9 e o valor inserido é %ld\n",n);	
		}
	
	
	
	return -1;
	}


double clacPiSun(char * argv , long nProcessos){
	long int n;
	double sum=0.0;
	double pi=0.0;
	
	
	
	n/nProcessos
	
	
	
	
	
	
	n=atol(argv);	
	if(n>= 10000000000)
	{
		for(int k=1;k< n;++k)
			sum+= pow(-1, k+1) / (2*k-1); 
		 
		pi = 4 * sum;
		printf("\nPI = %.10lf\n", pi);
		return pi;
	}
		else
		{
			printf("Numero de dermos devera ser superior a 10*10^9 e o valor inserido é %ld\n",n);	
		}
	
	
	
	return -1;
	}



int main(int argc, char** argv)
{
	
	unsigned long int n;
    unsigned int nChildren;

    if (argc > 2) {
        n = atol(argv[1]);
        nChildren = atoi(argv[2]);
        if (nChildren <1) {
            printf("ERRO: É necessario pelo menos um processos filho!\n");
            exit(1);
            }
    }
    else {
        printf(" Necessario pelo menos um processo para executar programa \n");
        exit(1);
    }
	
	
	
	int pipepi[2];
	
	pid_t parent = getpid();
	
	for (int i = 0; i < nChildren; i++) {
        pipe(pipepi);											//cria pipe
        int retfork = fork();									//cria processo filho retfork
        if (ret < 0) {
            perror("Erro criar fork");
            exit(1);
        }
        
        if(retfork==0)										    // entra processo filho
		{
			
			
			
			
			
			
			
			
		}
			else{												// processo pai		
				
				
				
				
				}
	
	
	}
	
	clacPi(argv[1]);

	
		
	
	 
 return 0;
}
