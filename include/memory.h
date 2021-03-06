/* =============================================================================
   memory.h
  (copyleft) 2016 303bcn

  Description:
    memory access functions
============================================================================= */

#ifndef __MEMORY_H__
#define __MEMORY_H__

#include "newTypes.h"



/* =============================================================================
 lee un valor de 1Byte de la RAM
============================================================================= */
char PEEK(uint address);



/* =============================================================================
 lee un valor de 16bits de la RAM
 OLD: peek_word
============================================================================= */
uint PEEKW(uint address);



/* =============================================================================
 escribe un valor a la RAM 
 by Andrear
============================================================================= */
void POKE(uint address, char value);



/* =============================================================================
 escribe un valor a la RAM 
 by Andrear
 OLD: poke_word
============================================================================= */
void POKEW(uint address, uint value);



/* =============================================================================
 escribe un conjunto de datos a la RAM
============================================================================= */
void CopyRAM(uint address, char* block, uint length);



/* =============================================================================
 llena una area de la RAM con un valor
============================================================================= */
void FillRAM(uint address, uint size, char value);




#endif