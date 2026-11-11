
/* ==== __lock_fhandle @ 004a1350 ==== 
 * signature: int __cdecl __lock_fhandle(int _Filehandle)
 * body: 004a1350-004a13b0
 * note: Library Function - Single Match  __lock_fhandle  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __lock_fhandle
   
   Library: Visual Studio 1998 Release */

int __cdecl __lock_fhandle(int _Filehandle)

{
  int *piVar1;
  int iVar2;
  int extraout_EAX;
  int iVar3;
  
  piVar1 = (int *)((int)&DAT_004e6690 + ((int)(_Filehandle & 0xffffffe7U) >> 3));
  iVar2 = (_Filehandle & 0x1fU) * 0x24;
  iVar3 = *piVar1 + iVar2;
  if (*(int *)(iVar3 + 8) == 0) {
    __lock(0x11);
    if (*(int *)(iVar3 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0xc));
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    FUN_00493e20(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(*piVar1 + iVar2 + 0xc));
  return extraout_EAX;
}


