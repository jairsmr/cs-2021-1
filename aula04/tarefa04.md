## Git e GitHub (tarefa04.md)

1. Qual o nome do branch padrão do Git?
<pre>Master</pre>

2. O que o comando **<code>git branch nome</code>** realiza?
<pre>Permite criar, listar, renomear e excluir ramificações</pre>

3. Como criar um branch a partir de um commit específico?
<pre>git branch (nome) (commit)</pre>

4. Em um repositório, qual o efeito do comando **<code>git checkout -b bugfix/234</code>**?
<pre>Cria uma nova task com o nome bugfix234</pre>

5. Qual o comando para se alternar para um branch de nome **experimento2**?
<pre>git checkout experimento2</pre>

6. Em um repositório com dois branches, **b1** e **b2**, onde b1 é o corrente, qual o efeito do comando **<code>git branch</code>**?
<pre>Mostra estes dois branches mas, o b1 estará com um asterisco.</pre>

7. O que o comando **<code>git checkout -b</code>** nome faz?
<pre>A especificação faz com que (nome) seja verificado.</pre>

8. Qual a função do <code>**comando git branch -d teste</code>**?
<pre>Deleta o branch de nome teste</pre>

9. Durante o desenvolvimento de um software é comum, por exemplo, utilizar um novo recurso por meio de experimentação. Talvez uma nova tecnologia, uma nova biblioteca que pode ser útil ao que está em desenvolvimento, ou até mesmo uma nova versão de um produto já empregado. Para que o uso deste novo recurso não interfira com o que é considerado pronto, um branch pode ser criado para a experimentação. Código que for criado para a experimentação existirá apenas no branch criado. Se eventualmente o experimento demonstrar um resultado satisfatório, as alterações realizadas no branch poderão ser incorporadas no que é considerado pronto, ou seja, no branch principal (master). Esta última ação é conhecida por merge. Neste item, crie uma sequência de comandos que simula um caso simples de criação e uso seguido de merge empregando um branch para ilustrar uma experimentação conforme acima. A sequência deve incluir, obrigatoriamente: (a) criação de um ou mais branches; (b) chaveamento para pelo menos dois branches e (c) merge.

<pre>
    git branch develop
	git checkout develop
	arquivo teste.txt é criado
	git add teste.txt
	git commit -m “Commit inicial”
	git branch develop2
	git checkout develop2
	arquivo teste.txt é alterado
	git add -u
	git commit -m “Alteração no arquivo teste.txt”
    git checkout master 
    git merge develop
	git merge develop2
</pre>

INSTRUÇÕES:

1. No seu repositório pessoal, criar a pasta aula04.
2. Commitar este arquivo respondido nesta pasta.
3. A data limite para concluir esta tarefa é dia 31/07/2021, as 23h59min.