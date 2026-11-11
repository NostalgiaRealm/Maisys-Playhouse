
/* ==== FUN_11020d90 @ 11020d90 ==== 
 * signature: undefined4 __cdecl FUN_11020d90(undefined4 * param_1, short * param_2, undefined * param_3)
 * body: 11020d90-11020df2
 */

uint __cdecl FUN_11020d90(undefined4 *param_1,short *param_2,undefined *param_3)

{
  char cVar1;
  undefined4 in_EAX;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*param_2 != 0x1fd) {
    return CONCAT22((short)((uint)in_EAX >> 0x10),0xffff);
  }
  iVar4 = 0;
  iVar2 = FUN_11002840(param_1,*(undefined4 *)(param_2 + 8));
  if (0 < *(int *)(param_2 + 3)) {
    do {
      cVar1 = (*(code *)param_3)(param_1,*(int *)(param_2 + 5) * iVar4 + iVar2,param_2);
      if (cVar1 == '\0') break;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_2 + 3));
  }
  uVar3 = FUN_110028a0(param_1,*(undefined4 *)(param_2 + 8));
  return uVar3 & 0xffff0000;
}


