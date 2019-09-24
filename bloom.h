#ifndef _BLOOM_FILTER_H_
#define _BLOOM_FILTER_H_
#include <stdint.h>

int bloom_insert(char *const bf, const char *key);
int bloom_delete(char *const bf, const char *key);
int bloom_size(const char *const bf);
int bloom_value(const char *const bf, uint32_t index);
#endif 
