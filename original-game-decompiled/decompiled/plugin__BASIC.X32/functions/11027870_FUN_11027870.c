
/* ==== FUN_11027870 @ 11027870 ==== 
 * signature: undefined __cdecl FUN_11027870(undefined4 * param_1, int param_2, int param_3)
 * body: 11027870-110278ec
 */

void __cdecl FUN_11027870(undefined4 *param_1,int param_2,int param_3)

{
  short sVar1;
  undefined4 local_30 [5];
  short local_1c;
  short local_1a;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_1100fc50(param_1,*(undefined4 *)(param_2 + 0x2e),local_30);
  *(short *)(param_2 + 0x28) = local_1c - *(short *)(param_3 + 0x3c);
  sVar1 = *(short *)(param_3 + 0x3e);
  *(undefined1 *)(param_2 + 0x2c) = 0;
  *(short *)(param_2 + 0x2a) = local_1a - sVar1;
  local_8 = CONCAT22(local_8._2_2_ + *(short *)(param_2 + 0x20),
                     (short)local_8 + *(short *)(param_2 + 0x1e));
  local_4 = CONCAT22(local_4._2_2_ - *(short *)(param_2 + 0x24),
                     (short)local_4 - *(short *)(param_2 + 0x22));
  *(byte *)(param_2 + 0x26) = *(byte *)(param_2 + 0x26) | 2;
  *(undefined4 *)(param_2 + 0x32) = local_8;
  *(undefined4 *)(param_2 + 0x36) = local_4;
  return;
}


