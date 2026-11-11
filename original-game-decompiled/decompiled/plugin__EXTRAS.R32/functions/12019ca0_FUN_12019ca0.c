
/* ==== FUN_12019ca0 @ 12019ca0 ==== 
 * signature: undefined4 __cdecl FUN_12019ca0(int param_1, short * param_2)
 * body: 12019ca0-12019e09
 */

undefined4 __cdecl FUN_12019ca0(int param_1,short *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_38;
  int local_34;
  int iStack_30;
  undefined1 auStack_2c [44];
  
  local_38 = 0;
  if (*param_2 != 0x32d5) {
    *(undefined4 *)(param_1 + 0x14) = 2;
    return 0x10000;
  }
  if ((*(int *)(param_1 + 0x10) == 0) && (FUN_12023290(param_1), *(int *)(param_1 + 0x10) == 0)) {
    return 0;
  }
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,&local_34);
  DAT_12039a9c = (*pcVar1)(local_34,*(undefined4 *)(param_1 + 0x10),&local_38);
  iVar2 = FUN_120230c0(*(short *)(param_1 + 0xe),'\0');
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,0,&iStack_30);
  DAT_12039a9c = (*pcVar1)(iStack_30,(int)(short)iVar2,param_2 + 4);
  uVar3 = 1;
  if (local_38 != 0) {
    do {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_34);
      uVar4 = uVar3 + 1;
      DAT_12039a9c = (*pcVar1)(local_34,*(undefined4 *)(param_1 + 0x10),uVar3,auStack_2c);
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,2,&iStack_30);
      DAT_12039a9c = (*pcVar1)(iStack_30,*(undefined4 *)(param_2 + 4),auStack_2c);
      uVar3 = uVar4;
    } while (uVar4 <= local_38);
  }
  *param_2 = 0x32d5;
  param_2[6] = -1;
  param_2[7] = -1;
  *(uint *)(param_2 + 1) = local_38;
  param_2[3] = *(short *)(param_1 + 0xe);
  return 0;
}


