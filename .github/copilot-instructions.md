# Instruções para Agentes IA - programacaoC

## Visão Geral
Este é um repositório educacional para aprendizado de programação em C. O projeto contém exemplos práticos e exercícios de C.

## Estrutura do Projeto
- **olamundo.c**: Arquivo principal para programas em C
- Adicione novos exercícios/programas como arquivos `.c` na raiz ou em subdiretórios

## Convenções de Codificação C

### Estrutura Básica de Programas
- Inclua `#include <stdio.h>` para entrada/saída padrão
- Inclua `#include <stdlib.h>` para funções utilitárias
- Função `main()` retorna `int` e deve retornar 0 em sucesso: `int main() { ... return 0; }`

### Estilo de Código
- **Indentação**: Use 4 espaços (não tabs)
- **Nomenclatura**: `snake_case` para variáveis e funções (ex: `calcular_media()`, `numero_total`)
- **Constantes**: `UPPER_SNAKE_CASE` (ex: `MAX_SIZE`, `PI`)
- **Comentários**: Use `//` para comentários de linha única e `/* */` para múltiplas linhas
- **Chaves**: Estilo K&R ou Allman, mantenha consistência no arquivo

### Boas Práticas
- Sempre declare variáveis no início das funções (C89 compatibility)
- Use `const` para variáveis que não mudam
- Evite variáveis globais quando possível
- Manipule erros: verifique retornos de funções como `scanf`, `fopen`, `malloc`
- Libere memória alocada com `malloc()` usando `free()`

### Compilação e Testes
```bash
# Compilar um programa
gcc -Wall -Wextra -o programa programa.c

# Executar
./programa
```

## Padrões de Projeto Comuns
- **Entrada/Saída**: Use `printf()` para saída e `scanf()` para entrada
- **Arrays**: Declare com tamanho fixo ou use alocação dinâmica com `malloc()`
- **Funções**: Prefira funções pequenas e focadas em uma responsabilidade
- **Strings**: Use `char array[MAX_SIZE]` ou `char *string` com alocação dinâmica

## Próximos Passos ao Adicionar Código
1. Descreva o propósito do programa nos comentários iniciais
2. Implemente a solução seguindo as convenções acima
3. Teste a compilação sem warnings: `gcc -Wall -Wextra`
4. Adicione exemplos de entrada/saída esperada em comentários
