#include <16F628A.h>   // Diretiva que inclui o mic

#fuses XT,NOWDT, NOLVP   //XT = oscilador de média freq; NOWDT = desativar reset; NOLVP = Low voltage 
#use delay (clock = 4000000)   // valor de media frequencia
int num = 0;                    //Variavel que irá fornecer os valores para o BCD

void main(){
    while(TRUE){
        if(!input(pin_a0)){
            delay_ms(300);
            num++;
            if (num>9){
                num = 0;
            }
        }  
        output_b(num);
    }

}
