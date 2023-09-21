#include<stdio.h>
#include<stdlib.h>

void execute_command(const char* cmd)
{
	system( cmd );
}
int main()
{
	int choice;
	char url[100];

printf("Programa de Teste de Redes\n");
	
printf("1 - Ping - Enviar pacotes ICMP para testar a conectividade\n");

printf("2 - Tracert - Rota dos pacotes\n");

printf("3 - NslookUp - Consulta Servidores DNS\n");

printf("4 - Netstat - Exibir as estatísticas de rede\n");

printf("5 - Ipconfig - Exibir as configurações de IP\n");

printf(" Escolha uma opção: \n");

scanf("%d", &choice);

	switch (choice){
		case 1:
			printf("Digite a URL ou IP para teste (ex: google.com): ");
			scanf("%s", url);
			printf("\nExecutando ping para %s...\n\n", url);
			execute_command("ping -n 4"); //Envia 4 pacotes ICMP para o URL ou IP específico
			break;
		
			case 2:
			printf("Digite a URL ou IP para teste: ");
			scanf("%s", url);
			printf("\nExecutando Tracert para %s...\n\n", url);
			execute_command("tracert "); //Mostra a rota tomada pelos pacotes para chegar na URL ou iP específico
		  break;

			case 3:
			printf("Digite o domínio para consulta: ");
			scanf("%s", url);
			printf("\nExecutando nslookup para %s...\n\n", url);
			execute_command("nslookup "); //Consulta os Servidores DNS para obter os detalhes sobre o domínio específico
			break;

			case 4:
			printf("Executando o netstat: ");
			execute_command("netstat "); //Mostra estatística de rede e conexões ativas
			break;

			case 5:
			printf("Executando o IpConfig: ");
			execute_command("ipconfig "); //Mostra estatística de rede e conexões ativas
			break;
		
			default:
			printf("Opção inválida. \n");
	}
	return 0;
}
