#include <stdio.h> 

int main(){ 
    int voto, soma1 = 0, soma2 = 0;
    do{ 
        printf("CANDIDATOS:\n "); 
        printf("\n1- Fulano"); 
        printf("\n2- Cicrano"); 
        printf("\n0- SAIR");
        
        printf("\nDigite seu voto(1 ou 2) ou aperte 0 para sair: ");
        scanf("%d", &voto);
        if(voto == 1){
            soma1 = soma1 + voto;
        }else if(voto == 2){
            voto = 1;
            soma2 = soma2 + voto;
        }
    } while(voto != 0);
    printf("\nSaindo do programa...");
    printf("\nO Fulano obteve %d votos e o Cicrano obteve %d votos", soma1, soma2);
    if(soma1 > soma2){
        printf("\nO Fulano ganhou");
    }else if(soma2 > soma1){
        printf("\nO Cicrano ganhou");
    }else{
        printf("\nA votação empatou");
    }
    return 0; 
    
}