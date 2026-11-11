
/* ==== FUN_1400ac00 @ 1400ac00 ==== 
 * signature: undefined4 __cdecl FUN_1400ac00(undefined2 * param_1, int param_2)
 * body: 1400ac00-1400add7
 */

undefined4 __cdecl FUN_1400ac00(undefined2 *param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x17,&local_18);
  DAT_14028e48 = (*pcVar1)(local_18,param_1,0,0xe8);
  uVar2 = FUN_14008a80((int)param_1);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x67) = uVar2;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_14);
  DAT_14028e48 = (*pcVar1)(iStack_14,param_1,param_2);
  param_1[5] = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_10);
  DAT_14028e48 = (*pcVar1)(iStack_10,param_1 + 5,param_2 + 10);
  *(undefined4 *)(param_1 + 0x4d) = 7;
  param_1[0x4c] = 1;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x98);
  param_1[0x4e] = *(undefined2 *)(param_2 + 0x9c);
  param_1[0x20] = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1 + 0x20,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0xb) = 0xc9;
  *(undefined4 *)(param_1 + 0xd) = 5;
  param_1[10] = 100;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2f,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 10,param_2 + 0x14);
  param_1[0x36] = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x36,param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  param_1[0x6b] = 0x66;
  return 0;
}


