# Tarefa 025 - Técnicas de construção baseadas em estado e tabelas - 10/11/2021.

1. Considere o título desta tarefa. Para compreendê-lo, solicito que seja efetuada uma pesquisa a respeito do padrão de projeto _State_, considerando sua aplicabilidade não somente ao escopo de um ou outro objeto do sistema, mas ao próprio sistema:
2. Elaborar um resumo descritivo do resultado da pesquisa.

**INSTRUÇÕES**
1. Esta pesquisa é parte do conteúdo destinado para a complementação de carga horária, para o cumprimento da carga regimental de 128hs alocada à disciplina.
2. A entrega deve ser feita no seu repositório pessoal no _github_, na _branch_, dentro de uma pasta chamada **tarefa025**.
4. O prazo para entrega desta tarefa é as 23h59min do dia 10/11/2021.

# Pesquisa padrão de projeto _State_

O State é um padrão de projeto comportamental que permite que um objeto altere seu comportamento quando seu estado interno muda. Parece como se o objeto mudasse de classe.

A ideia principal é que, em qualquer dado momento, há um número finito de estados que um programa possa estar. Dentro de qualquer estado único, o programa se comporta de forma diferente, e o programa pode ser trocado de um estado para outro instantaneamente. Contudo, dependendo do estado atual, o programa pode ou não trocar para outros estados. Essas regras de troca, chamadas transições, também são finitas e pré determinadas.

