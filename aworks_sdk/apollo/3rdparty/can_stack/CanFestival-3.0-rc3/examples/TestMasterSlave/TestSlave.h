
/* File generated by gen_cfile.py. Should not be modified. */

#include "data.h"

/* Prototypes of function provided by object dictionnary */
UNS32 TestSlave_valueRangeTest (UNS8 typeValue, void * value);
const indextable * TestSlave_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks);

/* prototypes of function to be filled by app. */
void TestSlave_SDOtimeoutError(UNS8 line);
void TestSlave_heartbeatError(UNS8);

UNS8 TestSlave_canSend(Message *);

void TestSlave_initialisation(void);
void TestSlave_preOperational(void);
void TestSlave_operational(void);
void TestSlave_stopped(void);

void TestSlave_post_sync(void);
void TestSlave_post_TPDO(void);

/* Master node data struct */
extern CO_Data TestSlave_Data;

extern ODCallback_t Store_parameters_callbacks[];		/* Callbacks of index0x1010 */
extern ODCallback_t Restore_Default_Parameters_callbacks[];		/* Callbacks of index0x1011 */
extern UNS8 SlaveMap1;		/* Mapped at index 0x2000, subindex 0x00*/
extern UNS8 SlaveMap2;		/* Mapped at index 0x2001, subindex 0x00*/
extern UNS8 SlaveMap3;		/* Mapped at index 0x2002, subindex 0x00*/
extern UNS8 SlaveMap4;		/* Mapped at index 0x2003, subindex 0x00*/