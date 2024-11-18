#ifndef BIBFUNC_H
#define BIBFUNC_H

float fatorial(int v);
float somatorio(int v);

#endif

/*se por engano esse arquivo for incluído mais de uma vez, haverá uma duplicidade de todas as definições
Como isso pode acontecer facilmente, acrescentamos 3 linhas no arquivo .h:
Essas linhas contêm comandos do pré-processador, que definem um símbolo BIBFUNC_H caso este ainda não exista
Se existir, é porque o arquivo já foi incluído e portanto, o pré-processador pula o código até o #endif*/