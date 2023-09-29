#include <stdio.h>
#include <curses.h>

int mostrar(int c, int l, int p = 0){
	int window[c][l];

	for(int nc = 0; nc < c; nc++ ){
		for(int nl = 0; nl < l; nl++ ){
			if(p == nc){
				window[nc][nl] = 1;
			}
			else{
				window[nc][nl] = 0;	
			}
			printf("%d",window[nc][nl]);
		}
		printf("\n");
    }
	return 0;
}

int main(){
	char tecla;
	do{
	if(kbhit()){
	    tecla = getch();
	
	    switch(tecla){
	        case 'W': //cima
	            break;
	        case 'S': //baixo
	            break;
	    }
	}
	//executo meu programa bazeado na tecla
	}while(tecla != '0');
	/*while(1){
		int p;
		printf("p: ");
		scanf("%d",&p);
		mostrar(4,4,p);	
	}
	*/
	return 0;
}
