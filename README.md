# SmartBus

![SmartBus](https://raw.githubusercontent.com/alissonsilvajs/SmartBus/master/image.jpeg)

  A project improve the urban mobility in the bus using Arduino. The project consists in put limit of passenger in the bus.
When one passenger enter in bus or leave bus, the system numerate in database. If reacher the limit of passenger, don't allow the passenger enter in the bus.

## How does it works

  When the RFID RC522 identify the bus card, add + 1 in the database. If reacher the limit the passenger in the bus, don't allow the passenger enter in the bus.
  When the TCRT5000 identify has passenger in the door, open automatically the door and remove - 1 in the database.
  The Display is used to show the how many passenger has in bus.
  
### The electronic components used:
   
- 1x - Arduino Mega<br>
- 1x - RFID RC522<br>
- 1x - Display 7 Segment 4 Digit TM1673<br>
- 1x - TCRT5000<br>

## Credits

- [Alisson Silva](https://github.com/alissonsilvajs)
- [Ana Maria](https://github.com/anaaquinosantos)
- Alef Marinho
- Ester Guimarães
- Maria das Graças
- [João Pedro](https://github.com/GuGu67)
