#include <stdio.h>
#include <stdlib.h>

int dia,ano,mes,a,b,c,d,bi,s4;

main(){
		printf ("digite seu dia de nascimento\n");
		scanf ("%d",&dia);
		printf ("digite o mes\n");
		scanf ("%d",&mes);
		printf ("digite o ano\n");
		scanf ("%d",&ano);
		//parte 1
		a=(ano-1900);
		b=int(a/4);
	//parte 2
			if (ano%4==0){
				bi=(b-1);
			}else{	
				bi=b;
		    }
	//parte 3
		if ((mes==1)||(mes==10)){
			c=0;
		}else{
		
				if ((mes==2)||(mes==3)||(mes==11)){
					c=3;
				}else{
						
						if ((mes==4)||(mes==7)){
							c=6;
		        		}else{
		        				if (mes==5){
									c=1;
		         				}else{
								 
		         						if (mes==6){
						 					c=4;
										 }else{
												if (mes==7){
													c=6;	
												}else{
														if (mes==8){
															c=2;
														}else{
																if ((mes==9)||(mes==12)){
																	c=5;
																}else{
																		if (mes>12){
																			printf ("nao existe mes 13 pra cima,feche o programa e tente novamente\n");
									
																	    }
                                                                }
                                                        }
                                                }
                                         }
                                }
                        }
                }
        }
	//parte4
	d=dia-1;
	s4=(a+b+c+d)%7;	

		if (s4==0){
			printf ("voce nasceu na segunda-feira\n");
		}else{
				if (s4==1){
					printf ("voce nasceu na terca-feira\n");
				}else{
						if (s4==2){
							printf ("voce nasceu na quarta-feira\n");
					    }else{
								if (s4==3){
									printf ("voce nasceu na quinta-feira\n");
								}else{
										if (s4==4){
											printf ("voce nasceu na sexta-feira\n");	
										}else{
												if (s4==5){
													printf ("vce nasceu no sabado\n");
											    }else{
														if (s4==6){
															printf ("voce nasceu no domingo\n");
														}
                                                }
                                        }
                                }
                        }
                }
        }


system ("PAUSE");
}









