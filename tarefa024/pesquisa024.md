# Tarefa 024 - Configuração de software em tempo de execução - 10/11/2021

1. Considere o título desta tarefa. Para compreendê-lo, solicito que seja efetuada uma pesquisa a respeito de qualquer um dos seguintes temas:

  1.1 Profile.

  1.2 IoC Inversão de Controle (Inversion of Control).

  1.3 Injeção de Dependências.

2. Elaborar um resumo descritivo com o resultado obtido na pesquisa do tema selecionado.

**INSTRUÇÕES**
1. Esta pesquisa é parte do conteúdo destinado para a complementação de carga horária, para o cumprimento da carga regimental de 128hs alocada à disciplina.
2. A entrega deve ser feita no seu repositório pessoal no _github_, na _branch_, dentro de uma pasta chamada **tarefa024**.
4. O prazo para entrega desta tarefa é as 23h59min do dia 10/11/2021.


# IoC Inversão de Controle (Inversion of Control):


Um fluxo normal de execução acontece quando um determinado programa cria chamadas para outros programas e assim sucessivamente, deixando a criação dos componentes, o início da execução e o fim da execução sob o controle do programador.

A inversão de controle ocorre quando ao invés de se criar explicitamente um código, ou acompanhar todo o ciclo de vida de uma execução, o programador delega alguma dessas funcionalidades para um terceiro.

Basicamente, a Inversão de Controle é uma forma diferente que temos para manipular o controle sobre um objeto. É um padrão. Gosto de pensar na Inversão de Controle como sendo a mudança de conhecimento que uma classe tem em relação à outra.

O que aconteceria se em determinado momento surgisse à necessidade dessa aplicação ser vendida para outras companhias, cada uma com regras de negócio específicas para uma mesma situação? Por exemplo, em uma aplicação de automação comercial onde a referência dos produtos é gerada automaticamente pelo sistema, mas cada cliente possui uma regra diferente para a criação dessas referências (sequências numéricas, alfanuméricas, com datas, etc.).


