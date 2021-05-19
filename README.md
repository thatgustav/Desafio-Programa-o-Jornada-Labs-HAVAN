Guia de utilização do programa desenvolvido por Gustavo Flores Lenz como resposta ao desafio de programação proposto pela HAVAN Labs.
-------------------------------------------------------------------------------------------------------------------------------------
_O código foi escrito utilizando a linguagem C++ pela IDE Visual Studio 2019._


O enunciado propôs a criação de um algoritmo para uma casa de câmbio fictícia.
Para simplificação de operações, utilizei as três moedas mais usadas mundialmente e a do nosso país.
Real, Dólar, Euro e Libra.

Quando o programa executa, solicita primeiramente o nome do cliente para uso como tratamento. Depois de inserido,
é mostrada a tabela de moedas disponíveis para operações, e pergunta qual é a moeda de origem.

Os números de 1 a 4 correspondem cada um à uma moeda.
_(Números diferentes direcionam o usuário a uma tela de erro)._

Depois de definir a moeda de origem, a mesma tabela solicita a moeda destinatária.
_(Definir a mesma moeda como de origem e de destino direciona o usuário a uma tela de erro)._

Logo depois, é solicitado o valor que será convertido.
Dentro do código, existem várias operações relacionais para cada caso de conversão, juntamente com o cálculo da taxa cobrada (10%) pela casa de câmbio.

A cotação das moedas foram pré estabelecidas com os seguintes valores:
_(Comparadas ao Real)_

/Dólar = R$ 5,30;

/Euro = R$ 6,50;

/Libra = R$ 7,50;


Por final, o programa exibe na tela as conversões: o valor convertido, o valor da taxa e o valor incluindo a taxa que seria o valor final.

