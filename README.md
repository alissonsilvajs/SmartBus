# SmartBus

![SmartBus](https://raw.githubusercontent.com/alissonsilvajs/SmartBus/master/image.jpeg)

  A project improve the urban mobility in the bus using Arduino. The project consists in put limit of passenger in the bus.
When one passenger enter in bus or leave bus, the system numerate in database. If reacher the limit of passenger, don't allow the passenger enter in the bus.

  O projeto melhora a mobilidade urbana dos onibus utilizando o Arduino. O projeto consiste em colocar um limite de passageiros no onibus.
Quando o passageiro entra no onibus ou sai, o sistema numera no banco de dados. Se atingir o limite de passageiros, não permite que o passageiro entre no onibus.

## How does it works

  When the RFID RC522 identify the bus card, add + 1 in the database. If reacher the limit the passenger in the bus, don't allow the passenger enter in the bus.
  When the TCRT5000 identify has passenger in the door, open automatically the door and remove - 1 in the database.
  The Display is used to show the how many passenger has in bus.
  
### Como ele funciona?
  Quando o sensor RFID identifica um cartão de passagem, adiciona mais 1 no banco de dados. Se atingir o limite de passageiros no onibus, não permite o passageiro entrar no onibus.
  Quando o TCRT5000 identifica que tem um passageiro na porta, abre a porta automaticamente e remove - 1 no banco de dados.
  O display é utilizado para mostrar a quantidade de passageiros que tem no onibus.
  
### The electronic components used:
   
- 1x - Arduino Mega<br>
- 1x - RFID RC522<br>
- 1x - Display 7 Segment 4 Digit TM1673<br>
- 1x - TCRT5000<br>

### Os componentes eletronicos utilizados:
   
- 1x - Arduino Mega<br>
- 1x - RFID RC522<br>
- 1x - Display de 7 segmentos e 4 digitos TM1673<br>
- 1x - TCRT5000<br>

## Credits

- [Alisson Silva](https://github.com/alissonsilvajs)
- [Ana Maria](https://github.com/anaaquinosantos)
- Alef Marinho
- Ester Guimarães
- Maria das Graças
- Pedro
