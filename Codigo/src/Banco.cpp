#include <Arduino.h>
#include <SPI.h>          // Biblioteca de comunicação SPI Nativa
#include <SD.h>           // Biblioteca de comunicação com cartão SD Nativa
#include <HX711.h>
#include <Wire.h>

File myFile;
float led;
float peso;
//configuracao dos pinos para o modulo HX711
//const int PINO_DT = 3;  //Arduino
//const int PINO_SCK = 2; //Arduino

const int PINO_DT = D1;   //ESP
const int PINO_SCK = D2;

//declaracao do intervalo de espera
const int TEMPO_ESPERA = 500;

HX711 escala; //declaracao do objeto ESCALA na classe HX711 da biblioteca

const int FATOR_CALIBRACAO = -45000; //esse valor deve ser alterado para o valor de calibracao obtido com o outro codigo

//Inicializa o cartão sd
void sdini() {
  Serial.print("Inicializando o cartão SD...");
  // verifica se o cartão SD está presente e se pode ser inicializado
  //if (!SD.begin(8)) {                                            //Arduino CS Pino 8
  if (!SD.begin(D4)) {                                             //ESP GPIO02 D4
    Serial.println("Falha, verifique se o cartão está presente."); //programa encerrado
    while (1);                                                     //Continua verificando se SD foi conectado
    //return;                                                      //Verifica uma vez e continua o codigo
  }

  myFile = SD.open("data.txt", FILE_WRITE);                        //Cria arquivo data.txt e abre
  //Escreve dados no arquivo
  if (myFile) {
    Serial.print("Writing...");

    myFile.println("Time, Empuxo");
    myFile.close();

    Serial.println("Done.");
  } else {
    Serial.println("Error opening data.txt");
  }
}
//Grava dados em formato de string
void writeOnSD(float time, float empuxo, float pes) {
  String str;
  myFile = SD.open("data.txt", FILE_WRITE);

  if (myFile) {
    Serial.print("Writing...");

    str = String(time, 3) + "," + String(empuxo, 3) + "," + String(pes, 3) + "\n";
    Serial.println(str);
    myFile.println(str);
    myFile.close();

    Serial.println("Done.");
  } else {
    Serial.println("Error opening data.txt");
  }
}

void setup() {
  Serial.begin(115200);
  sdini();
  escala.begin (PINO_DT, PINO_SCK); //inicializacao e definicao dos pinos DT e SCK dentro do objeto ESCALA

  escala.tare(); //zera a escala

  escala.set_scale(FATOR_CALIBRACAO); //ajusta a escala para o fator de calibracao
}

void loop() {


  //verifica se o modulo esta pronto para realizar leituras
  if (escala.is_ready())
  {
    //mensagens de leitura no monitor serial
    peso = escala.get_units(), 10;
    Serial.println("Led aceso");
    led = 1;
    Serial.print(peso);
    Serial.print(" kg ");
    digitalWrite(LED_BUILTIN, HIGH);   // Turn the LED on (Note that LOW is the voltage level
    writeOnSD(millis() / 1000.0, led, peso);
    led = 0;
    Serial.println("Led apagado");
  }
  else
  {
    Serial.println(" Aguarde  . . . ");
  }
  delay(TEMPO_ESPERA); //intervalo de espera para leitura

}