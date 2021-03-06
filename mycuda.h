//
// mycuda.h ... CUDApîb[`
// Copyright (c) 2015 T.Kouya
//
#ifndef __MYCUDA_H_

#include "cuda.h"
#include "driver_types.h"

#ifdef __cplusplus
extern "C" {
#endif

// GPUãÉsñi[ÌæðmÛ
void *mycuda_calloc(int, size_t);

// GPUãÌÌæððú
void mycuda_free(void *);

#ifdef __cplusplus
}
#endif

#endif // __MYCUDA_H
