
#ifndef __CRC_H__
#define __CRC_H__

#ifdef __cplusplus
extern "C" {
#endif


#include "main.h"


#include <stdint.h>



void MX_CRC_Init(void);


extern void hw_crc32_init(void);
extern uint32_t hw_crc32_feeddata(uint32_t *buff, uint32_t len);


#ifdef __cplusplus
}
#endif

#endif /* __CRC_H__ */

