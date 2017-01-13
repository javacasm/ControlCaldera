# Control remoto de Caldera

Se trata de usar un NodeMCU (ESP8266 con ESP12E)

## Sensores

### Fase 1
* Sensor de humos  MQ2 en el analógico A0
* Sensores de temperatura:
  * DS18x20 en tubo 1 de salida del agua caliente
  * DS18x20 en tubo 2 de salida del agua caliente
  * varios DS18x20 en el interior de la caldera
* DHT22 junto a la caldera para medir temperatura y humedad

### Fase 2
* Sensor de luz para los leds de la caldera

## Actuadores

### Fase 1
* Relé de encendido de la caldera

### Fase 2
* Relé para activar ventilador de humos
