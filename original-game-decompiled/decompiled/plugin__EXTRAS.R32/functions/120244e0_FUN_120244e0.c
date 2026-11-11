
/* ==== FUN_120244e0 @ 120244e0 ==== 
 * signature: undefined4 __cdecl FUN_120244e0(undefined2 * param_1)
 * body: 120244e0-12024656
 */

undefined4 __cdecl FUN_120244e0(undefined2 *param_1)

{
  code *pcVar1;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  *param_1 = 0x17;
  param_1[0x2c] = 100;
  param_1[0x31] = 100;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 1;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x36] = 100;
  *(undefined4 *)(param_1 + 0x32) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[6] = 1;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 1) = 0x12e;
  *(undefined4 *)(param_1 + 0x37) = 3;
  param_1[5] = 0x6d;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 8),1,0,&local_c);
  DAT_12039a9c = (*pcVar1)(local_c,4,param_1 + 7);
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[9] = 0x6d;
  param_1[10] = 2;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 8),1,0,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,8,param_1 + 0xb);
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xd] = 0x6d;
  param_1[0xe] = 3;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 8),1,0,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,0xc,param_1 + 0xf);
  param_1[0x11] = 0x66;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  param_1[0x1a] = 0x66;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x23] = 0x66;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  param_1[0x3b] = 1;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  **(undefined4 **)(param_1 + 7) = 0;
  **(undefined4 **)(param_1 + 0xb) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xb) + 4) = 0;
  **(undefined4 **)(param_1 + 0xf) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xf) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xf) + 8) = 0;
  return 0;
}


