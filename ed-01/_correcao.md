- Excluir os arquivos objeto do repositório - atualizar o `.gitignore`

- Nós nunca devemos chamar o destrutor explicitamente. Quem chama é sempre o compilado no momento que o objeto sai da pilha. No caso do erro de validação, as saídas possíveis são:
	- Lançar uma exceção (ainda vamos ver isso)
	- Imprimir mensagem de erro (cerr) e deixar objeto em estado inválido
	- Imprimir mensagem de erro e terminar o programa

- Tem código duplicado. O construtor pode chamar o método `ajusta*()`

- Se um método altera um valor de atributo, a convenção é usar o prefixo `set`. Se ele retorna um valor, a gente pode usar o prefixo `get`.

```cpp
void setHora(int hora) { ... }
void setMinuto(int minuto) { ... }

// usar o calcula como vc usou tá certo tbm
int getHorarioEmMinutos() { ... }
```