
/* File generated by gen_cfile.py. Should not be modified. */

#ifndef TESTMASTER_H
#define TESTMASTER_H

#include "data.h"

/* Prototypes of function provided by object dictionnary */
UNS32 TestMaster_valueRangeTest (UNS8 typeValue, void * value);
const indextable * TestMaster_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks);

/* Master node data struct */
extern CO_Data TestMaster_Data;
extern UNS8 DO;		/* Mapped at index 0x2000, subindex 0x00*/
extern INTEGER16 AO1;		/* Mapped at index 0x2001, subindex 0x00*/
extern INTEGER16 AO2;		/* Mapped at index 0x2002, subindex 0x00*/
extern INTEGER16 AO3;		/* Mapped at index 0x2003, subindex 0x00*/
extern INTEGER16 AO4;		/* Mapped at index 0x2004, subindex 0x00*/
extern INTEGER16 AI1;		/* Mapped at index 0x2005, subindex 0x00*/
extern INTEGER16 AI2;		/* Mapped at index 0x2006, subindex 0x00*/
extern INTEGER16 AI3;		/* Mapped at index 0x2007, subindex 0x00*/
extern INTEGER16 AI4;		/* Mapped at index 0x2008, subindex 0x00*/
extern INTEGER16 AI5;		/* Mapped at index 0x2009, subindex 0x00*/
extern INTEGER16 AI6;		/* Mapped at index 0x200A, subindex 0x00*/
extern INTEGER16 AI7;		/* Mapped at index 0x200B, subindex 0x00*/
extern INTEGER16 AI8;		/* Mapped at index 0x200C, subindex 0x00*/
extern UNS8 DI1;		/* Mapped at index 0x200F, subindex 0x00*/
extern UNS8 DI2;		/* Mapped at index 0x2010, subindex 0x00*/
extern UNS8 DI3;		/* Mapped at index 0x2011, subindex 0x00*/
extern UNS8 DI4;		/* Mapped at index 0x2012, subindex 0x00*/
extern UNS8 DI5;		/* Mapped at index 0x2013, subindex 0x00*/
extern UNS8 DI6;		/* Mapped at index 0x2014, subindex 0x00*/
extern UNS8 DI7;		/* Mapped at index 0x2015, subindex 0x00*/
extern UNS8 DI8;		/* Mapped at index 0x2016, subindex 0x00*/

#endif // TESTMASTER_H