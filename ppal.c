#include <stdio.h>

#include "contador.h"   /*Objeto contador usado para contar coincidencias*/
#include "fsm.h"	/*FSM engine*/
#include "fsmtable.h"   /*FSM Table*/
#include "termlib.h"    /*Enable the use of getch and getche see termlib.c*/


STATE *p2state=NULL;	/*Used to store FSM state*/



#define FIN_ARCHIVO  'Q'



int main (void)
{

     	int evento;

	p2state=FSM_GetInitState();// Inicializo la FSM con el estado inicial

	while((evento = getch())!= FIN_ARCHIVO)  //Si hay evento
	
	p2state=fsm(p2state,evento);      //Se lo paso a la maquina de estados

	printf("Total de coincidencias: %d", leer_cont());
  	getchar();

    
}

