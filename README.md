# 🎯 Jogo de Adivinhação em C

Este é um simples e divertido jogo de adivinhação feito em linguagem C, onde o jogador precisa descobrir um número secreto gerado aleatoriamente pelo computador. O jogo possui dois modos de dificuldade e sistema de pontuação! Fiz esse jogo como desafio proposto e ensinado na formação em C da plataforma Alura.

## 🕹️ Como jogar

1. Ao iniciar o programa, você será saudado com uma mensagem de boas-vindas.
2. Você pode escolher entre:
   - `1` para iniciar o jogo
   - `0` para sair
3. Escolha o nível de dificuldade:
   - `1` para **Fácil** (tentativas ilimitadas)
   - `2` para **Difícil** (apenas 30 tentativas)
4. Comece a digitar seus chutes até acertar o número secreto (entre 0 e 99).
5. O jogo fornece dicas caso você erre, indicando se seu chute foi maior ou menor que o número secreto.
6. Sua pontuação diminui conforme a distância entre seu chute e o número correto.

## 💡 Funcionalidades

- Geração aleatória do número secreto com base no horário do sistema.
- Sistema de pontuação baseado na precisão dos chutes.
- Dicas a cada dois erros no modo difícil.
- Validação para impedir chutes negativos.
- Mensagens interativas para maior imersão.

## 🧠 Lógica do jogo

- O número secreto é um valor aleatório entre 0 e 99.
- A pontuação inicial é `1000 pontos`.
- A cada erro, pontos são perdidos proporcionalmente à diferença entre o chute e o número secreto.
- No modo difícil, o jogador tem no máximo **30 tentativas**.

## 🛠️ Como compilar e executar

### No Linux ou MacOS:
```bash
gcc jogo_adivinhacao.c -o jogo
./jogo
```

### No Windows (com MinGW instalado):
```bash
gcc jogo_adivinhacao.c -o jogo.exe
jogo.exe
```
## 🎓 Certificado
![image](https://github.com/user-attachments/assets/847e9efe-bee3-40ae-83a1-0bfb1c3702cf)
