#ifndef __QUICK_SORT_LIBC_H__
#define __QUICK_SORT_LIBC_H__

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "myType.h"

void quickSortLibc(MY_TYPE aArray[], uint32_t aElementCnt, myCmpFunc *aCmpCb);

#endif
