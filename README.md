# Banco Estático 
Projeto eletronico desenvolvido para leitura de empuxo dos motores produzidos pela equipe de foguetemodelismo Cactus Rockets
<p align="center"><img src="Imagens/santatop.png" width="600px" /></p>

### Funcionamento

### Componetes e Circuitos

O circuito da placa consiste em um ESP8266 ligado com modulo HX711 responsável fazer a conversão das alterações de valor da resistência dos sensores de ceulas de cargas do tipo strain gauge com seguintes circuito para perfeito funcionamento:

- Devido o local de teste não ser de fácil utilização de fontes sera ultilizados bateria 18650 de 3,7V.
- Circuito de Carregamento Adequado e protenção para baterias de lition.
- Para perfeito funcionamento do circuito e diminuição da oscilação de tensão sera utilizado um elevador de tensão de saida fixa em 5v 
- Regulador de tensão de 3.3v para ESP8266 e HX711.
- Regulador de Tensão de 5V para necessidade de alimentação do circuito com fonte de tensão superior a 5v.
- Conector P4 para ligar fontes maiores de 5V
- Chave tecla para desligar a alimentação 
- Conector SD para conexão entre o Cartão SD e Esp8266
- Conector usb femea e macho para facil conexão da celulas de carga ao HX711
- Conector p2 ou de 3vias para comunicação serial em caso teste ou passar codigo
- Dois Botões tatil uma para reset outra para colocar no modo de programação 

<p align="center"><img src="Imagens/dimensões.png" width="600px" /></p>

## Imagens com os componetes 

<p align="center"><img src = "Imagens/santatop3d.jpg" width = "600">
<img src = "Imagens/santabuttom3d.jpg" width = "600"></p>


## Esquemático

![Schematics](Imagens/Schematics.jpg "Schematics")

## Lista de Componentes 

| Qtde| Item              | Descrição       |
| --- | ---               | ---             |
| 01  | [712-BAT-HLD-001](https://br.mouser.com/ProductDetail/712-BAT-HLD-001)    | Suporte de bateria     |
| 06  | [APHHS1005LSECK/J3-PF](https://br.mouser.com/ProductDetail/604-APHHS1005LSECKJ3)    | LED SMD Vermelho     |
| 04  | [SML-P11DTT86R](https://br.mouser.com/ProductDetail/755-SML-P11DTT86R)  | LED SMD Vermelho Laranja  |
| 05  | [APA2107LVBC/D](https://br.mouser.com/ProductDetail/604-APA2107LVBCD)     | LED SMD Azul Lateral  |
| 01  | [CD4511BPWR](https://br.mouser.com/ProductDetail/595-CD4511BPW)              | Multiplexador|
| 01  | [ATTINY85-20SUR](https://br.mouser.com/ProductDetail/556-ATTINY85-20SU)      | Microcontrolador |
| 01  | [TL3780AF100QG](https://br.mouser.com/ProductDetail/612-TL3780AF100QG)  | Interruptor tátil  |
| 01  | [CRCW04021K20JNTD](https://br.mouser.com/ProductDetail/80-C0805C105K4R7210)| Resistor 1.2k 0402  |
| 01  | [CRGCQ0402F10K](https://br.mouser.com/ProductDetail/279-CRGCQ0402F10K)         | Resistor 10k 0402 |
| 05  | [CR0402-FX-1501GLF](https://br.mouser.com/ProductDetail/652-CR0402FX-1501GLF)      | Resistor 1.5k 0402 |
| 01  | [CR1206-FX-1501ELF](https://br.mouser.com/ProductDetail/652-CR1206FX-1501ELF)       | Resistor 1.5k 1206 |
| 01  | [ATTINY85-20SUR](https://br.mouser.com/ProductDetail/556-ATTINY85-20SU)      | Microcontrolador |
| 01  | [TL3780AF100QG](https://br.mouser.com/ProductDetail/612-TL3780AF100QG)  | Interruptor tátil  |
| 01  | [CRCW04021K20JNTD](https://br.mouser.com/ProductDetail/80-C0805C105K4R7210)| Resistor 1.2k 0402  |
| 01  | [CRGCQ0402F10K](https://br.mouser.com/ProductDetail/279-CRGCQ0402F10K)         | Resistor 10k 0402 |
| 05  | [CR0402-FX-1501GLF](https://br.mouser.com/ProductDetail/652-CR0402FX-1501GLF)      | Resistor 1.5k 0402 |
| 01  | [CR1206-FX-1501ELF](https://br.mouser.com/ProductDetail/652-CR1206FX-1501ELF)       | Resistor 1.5k 1206 |


### Links
- [Relatorio](https://drive.google.com/file/d/1Hbn8Wrecm2mFYuo-eOkDm_AL81IvbxrG/view?usp=sharing)


