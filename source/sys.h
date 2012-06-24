
#ifdef __cplusplus
extern "C"
{
#endif

#ifndef SYS_H_
#define SYS_H_

s32 MagicPatches(s32);

void Sys_Init(void);
void Open_Inputs(void);
void Close_Inputs(void);

#endif //SYS_H_

#ifdef __cplusplus
}
#endif
