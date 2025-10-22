# 🃏 Super Trunfo - Comparação de Cartas em C

Este projeto é uma versão **simples e didática** do jogo **Super Trunfo**, desenvolvida em linguagem **C**.  
O objetivo é comparar **duas cartas de países** com base em **dois atributos diferentes** escolhidos pelo jogador.

---

##  Objetivo do Programa

O jogador deve escolher **dois atributos numéricos diferentes** para comparar duas cartas (países).  
O sistema compara os valores, soma os resultados e informa **qual carta venceu**, ou se houve **empate**.

---

##  Funcionalidades

###  Requisitos Funcionais Atendidos

1. **Escolha de Dois Atributos**  
   O jogador escolhe dois atributos diferentes por meio de menus interativos.  
   O sistema impede a escolha repetida do mesmo atributo.

2. **Comparação com Múltiplos Atributos**  
   Os dois atributos são comparados individualmente.  
   - Regra geral: vence o maior valor.  
   - Exceção: Densidade demográfica — vence o **menor** valor.

3. **Soma dos Atributos**  
   Após as comparações, o programa soma os valores dos dois atributos para cada carta.  
   A carta com a **maior soma** vence a rodada.

4. **Tratamento de Empates**  
   Se as somas forem iguais, o programa exibe:  
   `"Empate!"`

5. **Menus Dinâmicos**  
   Após o jogador escolher o primeiro atributo, ele **não aparece mais** como opção no segundo menu.

6. **Exibição Clara do Resultado**  
   O resultado final mostra:
   - Nome dos países  
   - Dois atributos escolhidos  
   - Valores de cada atributo  
   - Soma dos atributos  
   - Resultado (vitória ou empate)

---

## ⚙️ Requisitos Não Funcionais

| Requisito | Descrição |
|------------|------------|
| **Usabilidade** | Interface simples e intuitiva, com mensagens claras e passo a passo. |
| **Performance** | Execução rápida e leve, sem uso de recursos pesados. |
| **Manutenibilidade** | Código organizado, indentado e comentado. Nomes de variáveis descritivos. |
| **Confiabilidade** | Tratamento de entradas inválidas com mensagens adequadas (uso de `default` em `switch`). |

---

##  Tecnologias Utilizadas

- Linguagem: **C**
- Compilador recomendado: **GCC**
- Ambiente sugerido:  
  - Code::Blocks  
  - Dev-C++  
  - Terminal com `gcc`
