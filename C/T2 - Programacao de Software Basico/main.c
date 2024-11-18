#include <stdio.h>

void exibir_permissoes(int permissao) {
    char permissoes[10] = "-rwxrwxrwx"; 

    for (int i = 0; i < 3; i++) {
        int perm = (permissao >> (6 - i * 3)) & 0x7; 
        if ((perm & 0x4) == 0) permissoes[1 + i * 3] = '-'; 
        if ((perm & 0x2) == 0) permissoes[2 + i * 3] = '-'; 
        if ((perm & 0x1) == 0) permissoes[3 + i * 3] = '-'; 
    }
    permissoes[9] = '\0';

    printf("%s arquivo.txt\n", permissoes);
}

int main() {
    int permissao;

    printf("Digite as permissoes do arquivo [em formato octal]): ");
    scanf("%o", &permissao); 

    exibir_permissoes(permissao);

    return 0;
}
