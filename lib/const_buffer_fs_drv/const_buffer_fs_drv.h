#include <stddef.h>
#ifndef CONST_BUFFER_FS_DRV_H
#define CONST_BUFFER_FS_DRV_H
#ifndef CONST_BUFFER_FS_DRV_MAX_SLOTS
#define CONST_BUFFER_FS_DRV_MAX_SLOTS 3
#endif
#ifdef __cplusplus
extern "C" {
#endif
void cbfs_register(size_t slot,char drive,const void* data, size_t size);
#ifdef __cplusplus
}
#endif
#endif // CONST_BUFFER_FS_DRV_H