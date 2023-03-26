int main() {
	FILE *fp_old, *fp_new;
	char nome_arquivo[] = "arquivo.txt";
	int linha_para_remover = 3; // remover a terceira linha
		
	fp_old = fopen(nome_arquivo, "r");
	if (fp_old == NULL) {
		printf("Erro ao abrir o arquivo original\n");
		exit(1);
	}
		
	fp_new = fopen("temp.txt", "w");
	if (fp_new == NULL) {
		printf("Erro ao criar o arquivo temporário\n");
		exit(1);
	}
		
	int linha_atual = 1;
	char linha[100];
		
	while (fgets(linha, 100, fp_old)) {
		if (linha_atual != linha_para_remover) {
			fputs(linha, fp_new);
		}
		linha_atual++;
	}
		
	fclose(fp_old);
	fclose(fp_new);
		
	if (remove(nome_arquivo) != 0) {
		printf("Erro ao remover o arquivo original\n");
		exit(1);
	}
		
	if (rename("temp.txt", nome_arquivo) != 0) {
		printf("Erro ao renomear o arquivo temporário\n");
		exit(1);
	}
		
	printf("Linha removida com sucesso\n");
		
	return 0;
}
