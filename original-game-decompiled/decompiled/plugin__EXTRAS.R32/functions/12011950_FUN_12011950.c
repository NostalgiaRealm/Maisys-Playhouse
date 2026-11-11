
/* ==== FUN_12011950 @ 12011950 ==== 
 * signature: undefined4 __cdecl FUN_12011950(undefined4 * param_1, undefined4 * param_2)
 * body: 12011950-12011ad6
 */

undefined4 __cdecl FUN_12011950(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  code *pcVar2;
  int local_8;
  int iStack_4;
  
  *(undefined2 *)param_1 = 100;
  *(undefined4 *)((int)param_1 + 6) = 0;
  *(undefined4 *)((int)param_1 + 2) = 1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[0xc] = 1;
  *(undefined2 *)((int)param_1 + 0x2e) = 0x17;
  param_1[0xd] = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = *(undefined4 *)((int)param_2 + 0x2e);
  *(undefined4 *)((int)param_1 + 0x32) = *(undefined4 *)((int)param_2 + 0x32);
  uVar1 = *(undefined2 *)((int)param_2 + 0x36);
  *(undefined4 *)((int)param_1 + 0x3a) = 7;
  *(undefined2 *)((int)param_1 + 0x36) = uVar1;
  *(undefined2 *)(param_1 + 0xe) = 1;
  param_1[0xe] = param_2[0xe];
  uVar1 = *(undefined2 *)(param_2 + 0xf);
  param_1[0x10] = 0xc9;
  param_1[0x11] = 5;
  *(undefined2 *)((int)param_1 + 0x3e) = 100;
  *(undefined2 *)(param_1 + 0xf) = uVar1;
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2f,&local_8);
  DAT_12039a9c = (*pcVar2)(local_8,(int)param_1 + 0x3e,(int)param_2 + 0x3e);
  *(undefined2 *)(param_1 + 0x14) = 0;
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x19,&iStack_4);
  DAT_12039a9c = (*pcVar2)(iStack_4,param_1 + 0x14,param_2 + 0x14);
  *(undefined2 *)((int)param_1 + 10) = 1;
  param_1[3] = 1;
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)((int)param_2 + 0xe);
  *(undefined4 *)((int)param_1 + 0x12) = 1;
  *(undefined2 *)(param_1 + 4) = 1;
  param_1[4] = param_2[4];
  uVar1 = *(undefined2 *)(param_2 + 5);
  param_1[6] = 0xffffffff;
  *(undefined2 *)(param_1 + 5) = uVar1;
  *(undefined2 *)((int)param_1 + 0x16) = 0x66;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_120273e0(0,(undefined2 *)((int)param_1 + 0x16),(int)param_2 + 0x16);
  *(undefined2 *)(param_1 + 10) = 1;
  *(undefined4 *)((int)param_1 + 0x2a) = 1;
  param_1[10] = param_2[10];
  *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_2 + 0xb);
  return 0;
}


