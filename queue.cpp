#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int time;
    int priority;
    int id;
}Process;

Process process[10];
int hm_priority1;
int hm_priority2;
int hm_priority3;
int hm_priority4;
int time;
int i;
int x;
int size;
void clear()
{
	system("pause");
	system("cls");
	printf("ID do Processo + Prioridade + Tempo de execucação restante +\n");
}
int main()
{
	printf("Digite o numero de processos a serem executados: ");
	scanf("%d",&size);
    while(7)
    {
		printf("Insira o tempo de execucao do processo (ate 200s): ");
		scanf("%i",&time);
     	 if(time > 200 || time < 0)
	     {
			printf("Numero invalido !");
		 }
     	 else
     	 {
			process[i].priority = 1;
			process[i].time = time;
			process[i].id = i;
			hm_priority1++;
			i++;
		 }
		 if(hm_priority1 == size)
		 {
		 	break;
		 }
	}
	i = 0;
	system("cls");
	printf("ID do Processo + Prioridade + Tempo de execucação restante +\n");
	while(hm_priority1 > 0)
	{
		if(process[i].priority == 1)
		{
			for(x=0;x<5;x++)
			{
				printf("      %d       +      %i    +         %d +\n",process[i].id,process[i].priority,process[i].time);
            	process[i].time -= 1;
            	if(process[i].time<0)
				{
					break;
				}
			}
			if(process[i].time > 0)
			{
				printf("O processo %d excedeu o tempo limite e foi movido para um nivel menor de prioridade !\n");
				clear();
				process[i].priority = 2;
				hm_priority2++;
			}
			else
			{
				printf("Processo terminado e encerrado !\n");
				clear();
				process[i].priority = -1;
			}
			i++;
			hm_priority1--;
		}
			else
			{
				i++;
				hm_priority1--;
			}
	
	}
		
	i = 0;
		
	while(hm_priority2 > 0)
	{
		if(process[i].priority == 2)
		{
			for(x=0;x<10;x++)
			{
				printf("      %d       +      %i    +         %d +\n",process[i].id,process[i].priority,process[i].time);
		       	process[i].time -= 1;
		       	if(process[i].time<0)
				{
					break;
				}
			}
			if(process[i].time > 0)
			{
				printf("O processo %d excedeu o tempo limite e foi movido para um nivel menor de prioridade !\n");
				clear();
				process[i].priority = 3;
				hm_priority3++;
			}
			else
			{
				printf("Processo terminado e encerrado !\n");
				clear();
				process[i].priority = -1;
			}
			i++;
			hm_priority2--;
		}
		else
		{
			i++;
		}
	}
		
	i = 0;
	while(hm_priority3 > 0)
	{
		if(process[i].priority == 3)
		{
			for(x=0;x<15;x++)	
			{
				printf("      %d       +      %i    +         %d +\n",process[i].id,process[i].priority,process[i].time);
	           	process[i].time -= 1;
	 	 	 	if(process[i].time<0)
				{
					break;
				}
			}
			if(process[i].time > 0)
			{
				printf("O processo %d excedeu o tempo limite e foi movido para um nivel menor de prioridade !\n");
				clear();
				process[i].priority = 4;
				hm_priority4++;
			}
			else
			{
				printf("Processo terminado e encerrado !\n");
				clear();
				process[i].priority = -1;
		   	   	
			}
			hm_priority3--;
			i++;
		}
		else
		{
			i++;
		}
		
	}
			
	i = 0;
	if(hm_priority4>0)
	{
		printf("\n\n\n O proximo nivel de prioridade [ultimo] executara cada processo ate que este seja terminado !");
		system("cls");
		while(hm_priority4 > 0)
		{
			if(process[i].priority==4)
			{
				while(process[i].time > 0)
				{
					printf("      %d       +      %i    +         %d +\n",process[i].id,process[i].priority,process[i].time);
	        		process[i].time -= 1;
				}
				process[i].priority = -1;
				printf("Processo %d terminado e encerrado !\n",process[i].id);
				i++;
				hm_priority4--;	
				clear();
		
			}
			else
			{
				i++;
			}
		}
	}
}
