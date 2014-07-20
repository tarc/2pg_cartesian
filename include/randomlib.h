#ifndef OLD_RAMDOMLIB_H
#define OLD_RAMDOMLIB_H

#include "2pg_cartesian_export.h"

_2PG_CARTESIAN_EXPORT
int _get_int_random_number(__const int *max_number);
_2PG_CARTESIAN_EXPORT
float _get_float();
_2PG_CARTESIAN_EXPORT
float _get_float_max(const float *max);
_2PG_CARTESIAN_EXPORT
float _get_float_random_interval(const float *min, const float *max);

#endif
