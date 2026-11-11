
/* ==== FUN_110257f0 @ 110257f0 ==== 
 * signature: undefined __cdecl FUN_110257f0(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 110257f0-11025870
 */

void __cdecl FUN_110257f0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_3 = *(undefined4 *)(param_2 + 0xc);
  param_3[1] = *(undefined4 *)(param_2 + 0x10);
  param_3[2] = *(undefined4 *)(param_2 + 0x14);
  param_3[3] = *(undefined4 *)(param_2 + 0x18);
  param_3[4] = *(undefined4 *)(param_2 + 0x1c);
  param_3[5] = *(undefined4 *)(param_2 + 0x20);
  param_3[6] = *(undefined4 *)(param_2 + 0x24);
  param_3[7] = *(undefined4 *)(param_2 + 0x28);
  param_3[8] = *(undefined4 *)(param_2 + 0x2c);
  FUN_11002670((short *)(param_2 + 0x30),(short *)(param_3 + 9));
  if (*(int *)(param_2 + 0x62) != 0) {
    iVar1 = FUN_11013e50(param_1,*(int *)(param_2 + 0x62));
    *(int *)((int)param_3 + 0x56) = iVar1;
    return;
  }
  puVar2 = FUN_11013ca0(param_1);
  *(undefined4 **)((int)param_3 + 0x56) = puVar2;
  return;
}


