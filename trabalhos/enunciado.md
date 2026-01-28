# Trabalho Prático — Listas Encadeadas em C

**CRUD de Clientes e Produtos**

## Descrição

Uma empresa de pequeno porte deseja informatizar o controle básico de **clientes** e **produtos** por meio de uma aplicação simples executada no **terminal**.

O objetivo deste trabalho é desenvolver um sistema na linguagem **C** que utilize **listas simplesmente encadeadas** para armazenar e manipular os dados dinamicamente, implementando operações completas de **CRUD**.

---

## Funcionalidades

O sistema deve possuir um **menu principal** com três opções:

- Gerenciamento de Clientes
- Gerenciamento de Produtos
- Modo Compra

---

## Clientes

O sistema deve permitir:

- Cadastrar cliente (CPF, nome, email, telefone, data de nascimento);
- Listar todos os clientes;
- Buscar cliente pelo CPF;
- Editar dados de um cliente;
- Remover cliente;

---

## Produtos

O sistema deve permitir:

- Cadastrar produto (código único, nome ,preço, quantidade);
- Listar todos os produtos;
- Buscar produto pelo código;
- Editar dados de um produto;
- Remover produto;

---

## Modo Compra

O sistema deve permitir:

- Um cliente incluir produtos que deseja comprar no carrinho;
- Listar os produtos do carrinho de um cliente e informar quantidade de itens e valor total da compra;
- Retirar os produtos do carrinho de um cliente;

---

## Requisitos Técnicos

- Implementação **exclusivamente em C**;
- Repositório git com contribuição de todos os membros do grupo e espaçados ao longo do tempo;
- Uso obrigatório de **listas simplesmente encadeadas**;
- Uso de **alocação dinâmica de memória** (`malloc`, `calloc`, `realloc` e `free`);
- **Proibido** o uso de variáveis globais;
- Manipulação das listas por **passagem de parâmetros**;
- Menu funcional via terminal;

---

### Apresentações

- **Somente o código rodando via terminal e vscode para explicação do código.**

- Grupos de 3 pessoas:
  - Quarta-feira, dia 04/02, às 14h.
 
- Grupos de 2 pessoas:
  - Quinta-feira, dia 05/02, às 14h .

---

## Critérios de Avaliação

| ITEM                             | VALOR  |
| -------------------------------- | ------ |
| CRUD de Clientes                 | 2,0    |
| CRUD de Produtos                 | 1,0    |
| CRUD de Carrinhos dos Cliente    | 2,0    |
| Uso correto de listas            | 2,0    |
| Uso correto de alocação dinâmica | 1,0    |
| Organização do código, repositório e execução | 2,0    |
| **TOTAL**                        | **10** |
