
/* ==== FUN_140042a0 @ 140042a0 ==== 
 * signature: undefined4 __cdecl FUN_140042a0(int * param_1, int param_2)
 * body: 140042a0-1400430c
 */

undefined4 __cdecl FUN_140042a0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if ((*(int *)((int)param_1 + 6) == iVar1) &&
     (*(int *)((int)param_1 + 10) == *(int *)(param_2 + 0x10))) {
    if (*(char *)((int)param_1 + 0x4de) != '\0') {
      return 0;
    }
    uVar2 = FUN_14004310(param_1);
    return uVar2;
  }
  if (((param_1[4] != iVar1) || (param_1[5] != *(int *)(param_2 + 0x10))) &&
     ((iVar1 != 0x7d2 && (iVar1 != 0x70b)))) {
    return 0x10000;
  }
  if (*(char *)((int)param_1 + 0x4de) == '\0') {
    return 0;
  }
  uVar2 = FUN_14004070(param_1);
  return uVar2;
}


