/* 
 * fsm.h
 *
 *  Created on: 28/07/2014
 *      Author: Daniel Jacoby
 */


#ifndef FSM_H_
#define FSM_H_


#define FIN_TABLA 0xFF

typedef	int BYTE;
typedef struct tabla_estado STATE;

struct tabla_estado

{
	BYTE  evento;
	STATE *prx_estado;
	void (*p_rut_accion)(void);
};

// Interfaz
STATE* fsm(STATE *p_tabla_estado,BYTE evento_actual);

#endif /* FSM_H_ */
