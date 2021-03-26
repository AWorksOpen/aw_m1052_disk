
/* File generated by gen_cfile.py. Should not be modified. */

#include "data.h"

/* Prototypes of function provided by object dictionnary */
UNS32 gene_SYNC_valueRangeTest (UNS8 typeValue, void * value);
const indextable * gene_SYNC_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks);

/* prototypes of function to be filled by app. */
void gene_SYNC_SDOtimeoutError(UNS8 line);
void gene_SYNC_heartbeatError(UNS8);

UNS8 gene_SYNC_canSend(Message *);

void gene_SYNC_initialisation(void);
void gene_SYNC_preOperational(void);
void gene_SYNC_operational(void);
void gene_SYNC_stopped(void);

void gene_SYNC_post_sync(void);
void gene_SYNC_post_TPDO(void);

/* Master node data struct */
extern CO_Data gene_SYNC_Data;

extern UNS16 acceptanceFilter1;		/* Mapped at index 0x2015, subindex 0x00*/
extern UNS16 acceptanceFilter2;		/* Mapped at index 0x2016, subindex 0x00*/
extern UNS16 acceptanceFilter3;		/* Mapped at index 0x2017, subindex 0x00*/
extern UNS16 acceptanceFilter4;		/* Mapped at index 0x2018, subindex 0x00*/
extern UNS16 mask1;		/* Mapped at index 0x2019, subindex 0x00*/
extern UNS16 mask2;		/* Mapped at index 0x2020, subindex 0x00*/
extern UNS16 mask3;		/* Mapped at index 0x2021, subindex 0x00*/
extern UNS16 mask4;		/* Mapped at index 0x2022, subindex 0x00*/
extern UNS8 applyDownloadedFilters;		/* Mapped at index 0x2023, subindex 0x00*/