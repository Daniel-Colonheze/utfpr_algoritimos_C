 #include <stdio.h> 

int main(){ 
    int voto, soma1 = 0, soma2 = 0;
    char valida;
    do{ 
        printf("\nCANDIDATOS:\n "); 
        printf("\n1- Fulano"); 
        printf("\n2- Cicrano"); 
        
        printf("\nDigite seu voto(1 ou 2) ou aperte 0 para sair: ");
        scanf("%d", &voto);
        if(voto == 1){
            soma1 = soma1 + voto;
            printf("Deseja sair (s/n)?");
            scanf(" %c", &valida);
        }else if(voto == 2){
            voto = 1;
            soma2 = soma2 + voto;
            printf("Deseja sair (s/n)?");
            scanf(" %c", &valida);
        }else if(voto <= 0 || voto > 2){
            printf("\nValor invalido! Tente novamente");
        }
        
    } while(valida == 'n' || valida == 'N');
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