
/* ==== FUN_00478170 @ 00478170 ==== 
 * signature: uint __cdecl FUN_00478170(int param_1)
 * body: 00478170-0047818c
 */

uint __cdecl FUN_00478170(int param_1)

{
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)(param_1 + 0x1a);
  pvVar2 = LocalLock(*(HLOCAL *)(iVar1 + 8));
  *(LPVOID *)(iVar1 + 4) = pvVar2;
  return (uint)pvVar2 & 0xffffff00;
}


