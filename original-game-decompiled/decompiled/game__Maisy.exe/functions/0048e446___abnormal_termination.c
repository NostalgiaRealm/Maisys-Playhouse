
/* ==== __abnormal_termination @ 0048e446 ==== 
 * signature: int __cdecl __abnormal_termination(void)
 * body: 0048e446-0048e468
 * note: Library Function - Single Match  __abnormal_termination  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio 1998 Release */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  
  iVar2 = 0;
  iVar1 = *unaff_FS_OFFSET;
  if ((*(code **)(iVar1 + 4) == FUN_0048e3bc) &&
     (*(int *)(iVar1 + 8) == *(int *)(*(int *)(iVar1 + 0xc) + 0xc))) {
    iVar2 = 1;
  }
  return iVar2;
}


