int EstadoA=0;
int EstadoB=0;
int EstadoW=0;
int EstadoX=0;
int EstadoY=0;
int EstadoZ=0;
void setup() {
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  EstadoA = digitalRead(2);
  EstadoB = digitalRead(3);
  EstadoW = digitalRead(4);
  EstadoX = digitalRead(5);
  EstadoY = digitalRead(6);
  EstadoZ = digitalRead(7);

  //INICIA SUMA

  if((EstadoA^EstadoB)&&(!EstadoW&&!EstadoX&&!EstadoY&&EstadoZ)) {digitalWrite(12,HIGH);}

  if((EstadoA&&EstadoB)&&(!EstadoW&&!EstadoX&&!EstadoY&&EstadoZ)){digitalWrite(13,HIGH);}

  //TERMINA 
   //INICIA MULTIPLICACION

  if((EstadoA&&EstadoB)&&(!EstadoW&&!EstadoX&&EstadoY&&EstadoZ)){digitalWrite(12,HIGH);}

  //TERMINA 
     //INICIA DIVICION 

  if((EstadoA&&EstadoB)&&(!EstadoW&&EstadoX&&!EstadoY&&!EstadoZ)){digitalWrite(12,HIGH);}
  if((!EstadoA&&!EstadoB)&&(!EstadoW&&EstadoX&&!EstadoY&&!EstadoZ)){digitalWrite(13,HIGH);}
  if((EstadoA&&!EstadoB)&&(!EstadoW&&EstadoX&&!EstadoY&&!EstadoZ)){digitalWrite(13,HIGH);}

  //TERMINA 
     //INICIA RESTA

  if((EstadoA^EstadoB)&&(EstadoW&&EstadoX&&!EstadoY&&EstadoZ)){digitalWrite(12,HIGH);}
  if((!EstadoA&&EstadoB)&&(EstadoW&&EstadoX&&!EstadoY&&EstadoZ)){digitalWrite(13,HIGH);}

  //TERMINA 
     //INICIA AND

  if((EstadoA&&EstadoB)&&(!EstadoW&&EstadoX&&!EstadoY&&EstadoZ)){digitalWrite(12,HIGH);}

  //TERMINA 
     //INICIA OR

  if((EstadoA||EstadoB)&&(!EstadoW&&EstadoX&&EstadoY&&!EstadoZ)){digitalWrite(12,HIGH);}

  //TERMINA 
     //INICIA NAND

  if((!(EstadoA&&EstadoB))&&(EstadoW&&!EstadoX&&EstadoY&&EstadoZ)){digitalWrite(12,HIGH);}

  //TERMINA 
     //INICIA NOR

  if((!(EstadoA||EstadoB))&&(EstadoW&&!EstadoX&&EstadoY&&!EstadoZ)){digitalWrite(12,HIGH);}

  //TERMINA 
     //INICIA XOR

  if((EstadoA^EstadoB)&&(!EstadoW&&EstadoX&&EstadoY&&!EstadoZ)){digitalWrite(12,HIGH);}

  //TERMINA 
     //INICIA XNOR

  if((!(EstadoA^EstadoB))&&(EstadoW&&!EstadoX&&!EstadoY&&!EstadoZ)){digitalWrite(12,HIGH);}

  //TERMINA 


  digitalWrite(12,LOW);digitalWrite(13,LOW);

}