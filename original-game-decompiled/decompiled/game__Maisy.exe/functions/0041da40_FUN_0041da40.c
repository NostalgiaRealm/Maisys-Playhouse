
/* ==== FUN_0041da40 @ 0041da40 ==== 
 * signature: undefined __cdecl FUN_0041da40(undefined2 * param_1, short * param_2)
 * body: 0041da40-0041dafb
 */

void __cdecl FUN_0041da40(undefined2 *param_1,short *param_2)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  HGLOBAL pvVar5;
  uint uVar6;
  SIZE_T SVar7;
  
  *param_1 = 2;
  psVar1 = param_1 + 0x14;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar4 = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)psVar1 = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x16) = uVar4;
  sVar2 = param_1[0x15];
  sVar3 = *psVar1;
  *psVar1 = 0;
  param_1[0x16] = param_1[0x16] - sVar3;
  param_1[0x15] = param_1[0x15] + -sVar2;
  param_1[0x17] = param_1[0x17] + -sVar2;
  uVar6 = ((int)param_2[2] - (int)*param_2) + 0x1fU & 0xffffffe0;
  SVar7 = (int)(((int)param_2[3] - (int)param_2[1]) * uVar6) >> 3;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)psVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x16);
  *(undefined4 *)(param_1 + 6) = 1;
  *(undefined4 *)(param_1 + 8) = 1;
  param_1[10] = 1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xd] = (short)((int)uVar6 >> 3);
  *(undefined1 *)((int)param_1 + 3) = 0;
  pvVar5 = FUN_0043f770(SVar7);
  *(HGLOBAL *)(param_1 + 0xe) = pvVar5;
  *(SIZE_T *)(param_1 + 0x10) = SVar7;
  if (*(int *)(param_1 + 0xe) == 0) {
    FUN_004a3538();
  }
  return;
}


