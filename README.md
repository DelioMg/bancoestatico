# Banco Estático 
Projeto eletronico desenvolvido para leitura de empuxo dos motores produzidos pela equipe de foguetemodelismo Cactus Rockets
<p align="center"><img src="/Fotos/af6209759e237ef2a5ed_570x427_0_1_1_1.jpg" width="600px" /></p>

### Funcionamento

O circuito da placa consiste em um microcontrolador ESP8266 que reponsavel por receber as leituras do modulo HX711, que é responsável fazer a conversão das alterações de valor da resistência dos sensores de ceulas de cargas do tipo strain gauge, realiza a calibração dos valores e fazer os calculos de empuxo. Em que após esses calculos os valores são armazenados num cartão sd e transmitido para outro microcontrolador via wireless do próprio ESP para que seja exibido em tempo real e como segunda fonte de armazenamento.

Foi escolhido colocar uma conexão usb macho e femea entre as celulas de carga e hx711 para que possa fazer alteração do valor maximo de leitura inserindo mais celulas ou diminuindo sem a necessidade de mexer no resto do circuito. Sendo necessario apenas realizar a calibração das celulas via codigo.

### Componetes e Circuitos


- Microcontrolador ESP8266 no modulo esp-12
- HX711 amplifica e converte os valores lidos da celulas de carga 
- Celulas de cargas de 50kg
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


## Imagens com os componetes 

<p align="center"><img src = "/Fotos/Mont.jpg" width = "600">
<p align="center"><img src = "/Fotos/montin.jpg" width = "600">
<p align="center"><img src = "/Fotos/pcbcom.jpg" width = "600">

## Dimensões
  
<p align="center"><img src = "/Fotos/dimMont.jpg" width = "600">
  
## Esquemático

### Alimentação 
![Schematics](/Esquematicos/esqalim.png "Schematics")

### Geral
![Schematics](/Esquematicos/espcom.jpg "Schematics")


## Lista de Componentes 

| Qtde| Item              | Descrição       |
| --- | ---               | ---             |
| 01  | [Caixa 18650 AAx1](https://pt.aliexpress.com/item/1005001621877085.html)     | Suporte de bateria     |
| 06  | [ESP01](https://pt.aliexpress.com/item/1005001622047352.html)                |Microcontrolador com comunicador serial - receptor |
| 04  | [ESP8266 - D1 MINI](https://pt.aliexpress.com/item/1005001621784437.html)    |Microcontrolador com comunicador serial - transmissor |
| 05  | [APA2107LVBC/D](https://pt.aliexpress.com/item/1005001621693956.html)        |Carregador de bateria de lítio 18650 |
| 01  | [Mini360 ](https://pt.aliexpress.com/item/1005001621737620.html)             |Step-down |
| 01  | [P4](https://pt.aliexpress.com/item/1005001621748858.html)                   |Conector de alimentação dc |
| 01  | [SD](https://pt.aliexpress.com/item/1005001621606994.html)                   |Leitor SD |
| 01  | [CRCW04021K20JNTD](https://br.mouser.com/ProductDetail/80-C0805C105K4R7210)         | Resistor 1.2k 0402  |
| 01  | [CRGCQ0402F10K](https://br.mouser.com/ProductDetail/279-CRGCQ0402F10K)              | Resistor 10k 0402 |
| 05  | [CR0402-FX-1501GLF](https://br.mouser.com/ProductDetail/652-CR0402FX-1501GLF)       | Resistor 1.5k 0402 |
| 01  | [CR1206-FX-1501ELF](https://br.mouser.com/ProductDetail/652-CR1206FX-1501ELF)       | Resistor 1.5k 1206 |
| 01  | [ATTINY85-20SUR](https://br.mouser.com/ProductDetail/556-ATTINY85-20SU)             | Microcontrolador |
| 01  | [TL3780AF100QG](https://br.mouser.com/ProductDetail/612-TL3780AF100QG)              | Interruptor tátil  |
| 01  | [CRCW04021K20JNTD](https://br.mouser.com/ProductDetail/80-C0805C105K4R7210)         | Resistor 1.2k 0402  |
| 01  | [CRGCQ0402F10K](https://br.mouser.com/ProductDetail/279-CRGCQ0402F10K)              | Resistor 10k 0402 |
| 05  | [CR0402-FX-1501GLF](https://br.mouser.com/ProductDetail/652-CR0402FX-1501GLF)       | Resistor 1.5k 0402 |
| 01  | [CR1206-FX-1501ELF](https://br.mouser.com/ProductDetail/652-CR1206FX-1501ELF)       | Resistor 1.5k 1206 |


### Links
- [Relatorio](https://drive.google.com/file/d/1Hbn8Wrecm2mFYuo-eOkDm_AL81IvbxrG/view?usp=sharing)

  






























