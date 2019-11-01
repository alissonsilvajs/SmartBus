# SmartBus

![SmartBus](https://lh3.googleusercontent.com/278NryZCrW2mNO8-TukkAgzr3eqRAFdKsgoRYDRESrn6uU5p7DmRUMyDqZuP55A9n_O4Clr_T2CG3wJkrt2URpAT-MP5po5waig_A2quwLd8KvVat2L1fD3IbuZfdK7WDA0l_2pqs_YQO2G6j1o1LqOakiWH_SG0dlqzIHF1-rNPD5tLFJoPmEEmyAsAT40vvhjVS_KYeIZz1GURC5N96wkUl7BP-qwmZs8ztrgY2DrJ1dFV73PAWYbpNJFtz7QrAib4DGFMMMudE5y9ZakVodsH0r2BXEmdTQAyBdTJusi1Dc9CUX7yz3bSkMZted3JwoQri741dhgwIsAL5LQvt_GKm6W_LwEjnsdtZP4GkU87qE617H01BQhJkd1roB3E1qfQU8VdtLIgfjKNZG434jOURUy5BEdAgYBFZCYy1ki0jzu_cvTCSpOucSkNVlqdkbxcTV_VF3h0sbhlin_IOnJFNdTGWuYtK-9qLYpBH2csvKFIuadol3sIaBAObCykZ2RxFethLlbyCLhE6TsRPcmIunFKEHvoIsxe8cXHuTAKZoeWfletlb9h4nhiCElG29bOAZXcE4YnxNf0luUn6FcwGEo4i2aWZNcrURlzDPu6lGt7GXlENCidDX0jJgk1GD-oe3fMREkUSm2tG8LW-v5LFF5ScxcUlwNFkFFY8eurLeLKLp2ItUM=w1152-h560-no)

  A project improve the urban mobility in the bus using Arduino. The project consists in put limit of passenger in the bus.
When one passenger enter in bus or leave bus, the system numerate in database. If reacher the limit of passenger, don't allow the passenger enter in the bus.

  O projeto melhora a mobilidade urbana dos onibus utilizando o Arduino. O projeto consiste em colocar um limite de passageiros no onibus.
Quando o passageiro entra no onibus ou sai, o sistema numera no banco de dados. Se atingir o limite de passageiros, não permite que o passageiro entre no onibus.

## How does it works

  When the RFID RC522 identify the bus card, add + 1 in the database. If reacher the limit the passenger in the bus, don't allow the passenger enter in the bus.
  When the TCRT5000 identify has passenger in the door, open automatically the door and remove - 1 in the database.
  The Display is used to show the how many passenger has in bus.
  
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
- 1x - Display 7 Segment 4 Digit TM1673<br>
- 1x - TCRT5000<br>

## Credits

- [Alisson Silva](https://github.com/alissonsilvajs)
- [Ana Maria](https://github.com/)
- [Alef Marinho]
- [Ester Guimarães]
- [Maria das Graças]
- [Pedro]
