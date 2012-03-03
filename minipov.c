void clock(){
PORTB.B4=1;
PORTB.B4=0;
}
void reset(){
PORTB.B3=0;
PORTB.B3=1;
}
void delay(){
delay_ms(2);
}
void vacio(){
 reset();
 PORTB.B1=0;
 clock();
 PORTB.B1=0;
 clock();
 PORTB.B1=0;
 clock();
 PORTB.B1=0;
 clock();
 PORTB.B1=0;
 clock();
 PORTB.B1=0;
 clock();
 delay();
}
void full(){
 reset();
 PORTB.B1=1;
 clock();
 PORTB.B1=1;
 clock();
 PORTB.B1=1;
 clock();
 PORTB.B1=1;
 clock();
 PORTB.B1=1;
 clock();
 PORTB.B1=1;
 clock();
 delay();
}
void medio_lleno(){
 reset();
 PORTB.B1=0;
 clock();
 PORTB.B1=0;
 clock();
 PORTB.B1=1;
 clock();
 PORTB.B1=1;
 clock();
 PORTB.B1=0;
 clock();
 PORTB.B1=0;
 clock();
 delay();
}
void medio_vacio(){
 reset();
 PORTB.B1=1;
 clock();
 PORTB.B1=1;
 clock();
 PORTB.B1=0;
 clock();
 PORTB.B1=0;
 clock();
 PORTB.B1=1;
 clock();
 PORTB.B1=1;
 clock();
 delay();
}
void abajo_lleno(){
 reset();
 PORTB.B1=0;
 clock();
 PORTB.B1=0;
 clock();
 PORTB.B1=0;
 clock();
 PORTB.B1=0;
 clock();
 PORTB.B1=1;
 clock();
 PORTB.B1=1;
 clock();
 delay();
}
void lleno_vacio(){
 reset();
 PORTB.B1=1;
 clock();
 PORTB.B1=0;
 clock();
 PORTB.B1=0;
 clock();
 PORTB.B1=1;
 clock();
 PORTB.B1=0;
 clock();
 PORTB.B1=0;
 clock();
 delay();
}


void main() {
  DDRB.B1=1;
  DDRB.B2=1;
  DDRB.B3=1;
  DDRB.B4=1;
  
  
  while(1){

 vacio();
 vacio();
 vacio();
 vacio();
 vacio();
 vacio();
 vacio();
 vacio();
 vacio();
 vacio();
 vacio();
 vacio();
 vacio();
 vacio();
 vacio();
 vacio();
 vacio();
 vacio();
 vacio();
 vacio();

 full();
 full();
 full();
 medio_lleno();
 medio_lleno();
 medio_lleno();
 medio_lleno();
 full();
 full();
 full();

 vacio();
 vacio();
 vacio();
 vacio();
 vacio();

 full();
 full();
 full();
 medio_vacio();
 medio_vacio();
 medio_vacio();
 medio_vacio();
 full();
 full();
 full();

 vacio();
 vacio();
 vacio();
 vacio();
 vacio();


 full();
 full();
 full();
 abajo_lleno();
 abajo_lleno();
 abajo_lleno();
 abajo_lleno();
 abajo_lleno();
 abajo_lleno();
 abajo_lleno();


 vacio();
 vacio();
 vacio();
 vacio();
 vacio();

 full();
 full();
 full();
 lleno_vacio();
 lleno_vacio();
 lleno_vacio();
 lleno_vacio();
 full();
 full();
 full();


  }
}

