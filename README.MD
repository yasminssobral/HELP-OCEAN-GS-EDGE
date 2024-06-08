# HELP OCEAN - simulação

Este projeto utiliza um Arduino para simular um sistema de alerta onde:
- Um botão representa o alerta que o usuário irá emitir.
- Um LED indica ao usuário que o alerta foi enviado.
- Um display LCD mostra a mensagem de alerta recebida pela ONG.

## Sumário
- [Componentes](#componentes)
- [Conexões](#conexões)
- [Código](#código)
- [Fundionamento](#funcionamento)
- [Integrantes](#integrantes)

## Componentes
- 1 Arduino
- 1 LED
- 1 resistor (220 ohms para o LED)
- 1 botão
- 1 display LCD (compatível com Adafruit_LiquidCrystal)
- Cabos de conexão

## Conexões
1. **LED**:
   - Conecte o anodo do LED ao pino 13 do Arduino através de um resistor de 220 ohms.
   - Conecte o catodo do LED ao GND do Arduino.
   
2. **Botão**:
   - Conecte uma perna do botão ao pino 2 do Arduino.
   - Conecte a outra perna do botão ao GND do Arduino.
   - Adicione um resistor pull-up interno ao botão (digitalWrite(botao, HIGH)) para manter o estado do botão alto quando não pressionado.

3. **Display LCD**:
   - Conecte o display LCD de acordo com a biblioteca `Adafruit_LiquidCrystal` e os pinos definidos no código.

## Código
1. **Biblioteca e Variáveis**:
   - Inclui a biblioteca `Adafruit_LiquidCrystal` para controlar o display LCD.
   - Define as variáveis para o LED, o botão e o estado do botão.

2. **Setup**:
   - Inicializa o display LCD com 16 colunas e 2 linhas.
   - Configura o pino do LED como saída e o pino do botão como entrada.
   - Ativa o resistor pull-up interno para o botão.

3. **Loop**:
   - Lê o estado do botão.
   - Se o botão for pressionado (estado LOW), acende o LED, exibe a mensagem "ALERTA RECEBIDO" no LCD e aguarda 3 segundos.
   - Após 3 segundos, o LED apaga e limpa o LCD.

## Funcionamento
- Quando o botão é pressionado, o LED acende para indicar ao usuário que o alerta foi enviado.
- Simultaneamente, o display LCD exibe a mensagem "ALERTA RECEBIDO", indicando que a ONG recebeu o alerta.
- Após 3 segundos, o LED apaga e a mensagem no display é limpa, preparando o sistema para um novo alerta.

Este projeto simula um sistema de alerta simples e pode ser expandido para incluir funcionalidades adicionais, como envio de dados para um servidor ou notificação via outros meios.

## Integrantes

Yasmin Sobral (558757)
Henrique Azevedo (556707)
