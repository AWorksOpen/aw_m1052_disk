
/* File generated by gen_cfile.py. Should not be modified. */

#include "data.h"

/* Prototypes of function provided by object dictionnary */
UNS32 TestMaster_valueRangeTest (UNS8 typeValue, void * value);
const indextable * TestMaster_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks);

/* prototypes of function to be filled by app. */
void TestMaster_SDOtimeoutError(UNS8 line);
void TestMaster_heartbeatError(UNS8);

UNS8 TestMaster_canSend(Message *);

void TestMaster_initialisation(void);
void TestMaster_preOperational(void);
void TestMaster_operational(void);
void TestMaster_stopped(void);

void TestMaster_post_sync(void);
void TestMaster_post_TPDO(void);

/* Master node data struct */
extern CO_Data TestMaster_Data;

extern ODCallback_t Store_parameters_callbacks[];		/* Callbacks of index0x1010 */
extern ODCallback_t Restore_Default_Parameters_callbacks[];		/* Callbacks of index0x1011 */
extern UNS8 MasterMap1;		/* Mapped at index 0x2000, subindex 0x00*/
extern ODCallback_t MasterMap1_callbacks[];		/* Callbacks of index0x2000 */
extern UNS8 MasterMap2;		/* Mapped at index 0x2001, subindex 0x00*/
extern UNS8 MasterMap3;		/* Mapped at index 0x2002, subindex 0x00*/
extern UNS8 MasterMap4;		/* Mapped at index 0x2003, subindex 0x00*/