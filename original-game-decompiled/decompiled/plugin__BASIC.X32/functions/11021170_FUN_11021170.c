
/* ==== FUN_11021170 @ 11021170 ==== 
 * signature: undefined4 __cdecl FUN_11021170(undefined4 * param_1, short * param_2, undefined4 * param_3, int param_4)
 * body: 11021170-110211df
 */

undefined4 __cdecl FUN_11021170(undefined4 *param_1,short *param_2,undefined4 *param_3,int param_4)

{
  undefined4 in_EAX;
  undefined2 uVar2;
  int iVar1;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar2 = (undefined2)((uint)in_EAX >> 0x10);
  if (*param_2 != 0x1fd) {
    return CONCAT22(uVar2,0xffff);
  }
  if ((0 < param_4) && (param_4 <= *(int *)(param_2 + 3))) {
    iVar1 = FUN_11002840(param_1,*(undefined4 *)(param_2 + 8));
    uVar4 = *(uint *)(param_2 + 5);
    puVar5 = (undefined4 *)((param_4 + -1) * uVar4 + iVar1);
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_3 = *puVar5;
      puVar5 = puVar5 + 1;
      param_3 = param_3 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)param_3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      param_3 = (undefined4 *)((int)param_3 + 1);
    }
    uVar4 = FUN_110028a0(param_1,*(undefined4 *)(param_2 + 8));
    return uVar4 & 0xffff0000;
  }
  return CONCAT22(uVar2,0xffdf);
}


