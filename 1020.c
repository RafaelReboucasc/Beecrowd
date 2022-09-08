#include <stdio.h>
 
int main(){
    int idade, ano, mes, dias;
    
    scanf("%d", &idade);
    
    if(idade < 365)
        ano = 0;
    else
        ano = idade/365;
        
    if((idade - 365*ano) == 0)
        mes = 0;
    else 
        mes = (idade - 365*ano)/30;
        
    dias = (idade - 365*ano) - 30*mes;
    
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dias);
    return 0;
}
