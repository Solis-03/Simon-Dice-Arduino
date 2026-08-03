// salidas led
int ledVerde = 9;
int ledRojo = 10;
int ledAzul = 11;
int ledAmarillo = 12;

// Entradas pulsadores
int pullVerde = 4;
int pullRojo = 5;
int pullAzul = 6;
int pullAmarillo = 7;
int inicio = 8;

//Vector de secuenciaPP
int secuencia[4];
int secuencia1[6];
int secuencia2[8];
int secuenciaTotal[4] = { ledVerde, ledRojo, ledAzul, ledAmarillo };
int comprobacion[4];
int comprobacion1[6];
int comprobacion2[8];

// variables de comprobacion
int valido;
int valido1;
int valido2;
int valido3;

void setup() {
  //Pines de salida (leds)
  pinMode(ledVerde, OUTPUT);
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);

  //Pines de entrada (pulsadores)
  pinMode(pullVerde, INPUT);
  pinMode(pullRojo, INPUT);
  pinMode(pullAzul, INPUT);
  pinMode(pullAmarillo, INPUT);
  pinMode(inicio, INPUT);

  //Semilla de randon
  randomSeed(analogRead(A0));
  Serial.begin(9600);
}



void loop() {



  // Nivel 1
  // inicializacion de la secuencia
  if (digitalRead(inicio) == 0) {
    delay(2000);
    for (int i = 0; i < 4; i++) {
      secuencia[i] = random(9, 13);
      digitalWrite(secuencia[i], HIGH);
      Serial.println(secuencia[i]);
      delay(1000);
      digitalWrite(secuencia[i], LOW);
      delay(1000);
    }
    Serial.println();

    // inicializacion de los botones repeticion

    for (int i = 0; i < 4; i++) {

      while (digitalRead(pullVerde) == HIGH && digitalRead(pullRojo) == HIGH && digitalRead(pullAzul) == HIGH && digitalRead(pullAmarillo) == HIGH) {
      }
      if (digitalRead(pullVerde) == LOW) {
        comprobacion[i] = ledVerde;
        delay(500);
      } else if (digitalRead(pullRojo) == LOW) {
        comprobacion[i] = ledRojo;
        delay(500);
      } else if (digitalRead(pullAzul) == LOW) {
        comprobacion[i] = ledAzul;
        delay(500);
      } else if (digitalRead(pullAmarillo) == LOW) {
        comprobacion[i] = ledAmarillo;
        delay(500);
      }

      Serial.println(comprobacion[i]);
      while (digitalRead(pullVerde) == LOW || digitalRead(pullRojo) == LOW || digitalRead(pullAzul) == LOW || digitalRead(pullAmarillo) == LOW) {
      }
    }
    Serial.println();
    // comprobacion de la secuencia y botones
    if (comprobacion[0] == secuencia[0] && comprobacion[1] == secuencia[1] && comprobacion[2] == secuencia[2] && comprobacion[3] == secuencia[3]) {
      valido = HIGH;
    } else {
      valido = LOW;
    }
    if (valido == HIGH) {
      for (int i = 0; i < 4; i++) {
        digitalWrite(secuenciaTotal[i], HIGH);
      }
    }
    delay(3000);
    for (int i = 0; i < 4; i++) {
      digitalWrite(secuenciaTotal[i], LOW);
    }




    // Nivel 2
    if (valido == HIGH) {
      delay(2000);
      for (int i = 0; i < 4; i++) {
        secuencia[i] = random(9, 13);
        digitalWrite(secuencia[i], HIGH);
        Serial.println(secuencia[i]);
        delay(1000);
        digitalWrite(secuencia[i], LOW);
        delay(1000);
      }
      Serial.println();

      // inicializacion de los botones repeticion

      for (int i = 0; i < 4; i++) {

        while (digitalRead(pullVerde) == HIGH && digitalRead(pullRojo) == HIGH && digitalRead(pullAzul) == HIGH && digitalRead(pullAmarillo) == HIGH) {
        }
        if (digitalRead(pullVerde) == LOW) {
          comprobacion[i] = ledVerde;
          delay(500);
        } else if (digitalRead(pullRojo) == LOW) {
          comprobacion[i] = ledRojo;
          delay(500);
        } else if (digitalRead(pullAzul) == LOW) {
          comprobacion[i] = ledAzul;
          delay(500);
        } else if (digitalRead(pullAmarillo) == LOW) {
          comprobacion[i] = ledAmarillo;
          delay(500);
        }

        Serial.println(comprobacion[i]);
        while (digitalRead(pullVerde) == LOW || digitalRead(pullRojo) == LOW || digitalRead(pullAzul) == LOW || digitalRead(pullAmarillo) == LOW) {
        }
      }
      Serial.println();
      // comprobacion de la secuencia y botones
      if (comprobacion[0] == secuencia[0] && comprobacion[1] == secuencia[1] && comprobacion[2] == secuencia[2] && comprobacion[3] == secuencia[3]) {
        valido1 = HIGH;
      } else {
        valido1 = LOW;
      }
      if (valido1 == HIGH) {
        for (int i = 0; i < 4; i++) {
          digitalWrite(secuenciaTotal[i], HIGH);
        }
      }
      delay(3000);
      for (int i = 0; i < 4; i++) {
        digitalWrite(secuenciaTotal[i], LOW);
      }




      // nivel 3
      if (valido1 == HIGH) {
        delay(2000);
        for (int i = 0; i < 6; i++) {
          secuencia1[i] = random(9, 13);
          digitalWrite(secuencia1[i], HIGH);
          Serial.println(secuencia1[i]);
          delay(1000);
          digitalWrite(secuencia1[i], LOW);
          delay(1000);
        }
        Serial.println();

        // inicializacion de los botones repeticion

        for (int i = 0; i < 6; i++) {

          while (digitalRead(pullVerde) == HIGH && digitalRead(pullRojo) == HIGH && digitalRead(pullAzul) == HIGH && digitalRead(pullAmarillo) == HIGH) {
          }
          if (digitalRead(pullVerde) == LOW) {
            comprobacion1[i] = ledVerde;
            delay(500);
          } else if (digitalRead(pullRojo) == LOW) {
            comprobacion1[i] = ledRojo;
            delay(500);
          } else if (digitalRead(pullAzul) == LOW) {
            comprobacion1[i] = ledAzul;
            delay(500);
          } else if (digitalRead(pullAmarillo) == LOW) {
            comprobacion1[i] = ledAmarillo;
            delay(500);
          }

          Serial.println(comprobacion1[i]);
          while (digitalRead(pullVerde) == LOW || digitalRead(pullRojo) == LOW || digitalRead(pullAzul) == LOW || digitalRead(pullAmarillo) == LOW) {
          }
        }
        Serial.println();
        // comprobacion de la secuencia y botones
        if (comprobacion1[0] == secuencia1[0] && comprobacion1[1] == secuencia1[1] && comprobacion1[2] == secuencia1[2] && comprobacion1[3] == secuencia1[3]
            && comprobacion1[4] == secuencia1[4] && comprobacion1[5] == secuencia1[5]) {
          valido2 = HIGH;
        } else {
          valido2 = LOW;
        }
        if (valido2 == HIGH) {
          for (int i = 0; i < 4; i++) {
            digitalWrite(secuenciaTotal[i], HIGH);
          }
        }
        delay(3000);
        for (int i = 0; i < 4; i++) {
          digitalWrite(secuenciaTotal[i], LOW);
        }




        // Nivel 4
        if (valido2 == HIGH) {
          delay(2000);
          for (int i = 0; i < 8; i++) {
            secuencia2[i] = random(9, 13);
            digitalWrite(secuencia2[i], HIGH);
            Serial.println(secuencia2[i]);
            delay(1000);
            digitalWrite(secuencia2[i], LOW);
            delay(1000);
          }
          Serial.println();

          // inicializacion de los botones repeticion

          for (int i = 0; i < 8; i++) {

            while (digitalRead(pullVerde) == HIGH && digitalRead(pullRojo) == HIGH && digitalRead(pullAzul) == HIGH && digitalRead(pullAmarillo) == HIGH) {
            }
            if (digitalRead(pullVerde) == LOW) {
              comprobacion2[i] = ledVerde;
              delay(500);
            } else if (digitalRead(pullRojo) == LOW) {
              comprobacion2[i] = ledRojo;
              delay(500);
            } else if (digitalRead(pullAzul) == LOW) {
              comprobacion2[i] = ledAzul;
              delay(500);
            } else if (digitalRead(pullAmarillo) == LOW) {
              comprobacion2[i] = ledAmarillo;
              delay(500);
            }

            Serial.println(comprobacion2[i]);
            while (digitalRead(pullVerde) == LOW || digitalRead(pullRojo) == LOW || digitalRead(pullAzul) == LOW || digitalRead(pullAmarillo) == LOW) {
            }
          }
          Serial.println();
          // comprobacion de la secuencia y botones
          if (comprobacion2[0] == secuencia2[0] && comprobacion2[1] == secuencia2[1] && comprobacion2[2] == secuencia2[2] && comprobacion2[3] == secuencia2[3]
              && comprobacion2[4] == secuencia2[4] && comprobacion2[5] == secuencia2[5] && comprobacion2[6] == secuencia2[6] && comprobacion2[7] == secuencia2[7]) {
            valido3 = HIGH;
          } else {
            valido3 = LOW;
          }
          if (valido3 == HIGH) {
            for (int i = 0; i < 4; i++) {
              digitalWrite(secuenciaTotal[i], HIGH);
            }
          }
          delay(3000);
          for (int i = 0; i < 4; i++) {
            digitalWrite(secuenciaTotal[i], LOW);
          }
        }
      }
    }
  }
}
