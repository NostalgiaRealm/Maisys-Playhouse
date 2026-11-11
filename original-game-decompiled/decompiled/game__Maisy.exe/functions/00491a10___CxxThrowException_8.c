
/* ==== __CxxThrowException@8 @ 00491a10 ==== 
 * signature: undefined __stdcall __CxxThrowException@8(undefined4 param_1, undefined4 param_2)
 * body: 00491a10-00491a56
 * note: Library Function - Single Match  __CxxThrowException@8  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __CxxThrowException@8
   
   Library: Visual Studio 1998 Release */

void __CxxThrowException_8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  DWORD local_20 [4];
  DWORD local_10;
  ULONG_PTR local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pDVar2 = &DAT_004cd8a0;
  pDVar3 = local_20;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar3 = *pDVar2;
    pDVar2 = pDVar2 + 1;
    pDVar3 = pDVar3 + 1;
  }
  local_8 = param_1;
  local_4 = param_2;
  RaiseException(local_20[0],local_20[1],local_10,&local_c);
  return;
}


