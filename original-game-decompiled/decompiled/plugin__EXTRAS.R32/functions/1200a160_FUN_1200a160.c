
/* ==== FUN_1200a160 @ 1200a160 ==== 
 * signature: undefined4 __cdecl FUN_1200a160(undefined4 * param_1, undefined4 * param_2)
 * body: 1200a160-1200a352
 */

undefined4 __cdecl FUN_1200a160(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int local_8;
  int iStack_4;
  
  *(undefined2 *)param_1 = 0x17;
  *(undefined4 *)((int)param_1 + 2) = 0x12e;
  *(undefined4 *)((int)param_1 + 6) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[4] = 0;
  *(undefined2 *)((int)param_1 + 10) = 0x17;
  param_1[3] = 1;
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
  *(undefined2 *)(param_1 + 5) = 10;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  param_1[5] = param_2[5];
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  *(undefined2 *)((int)param_1 + 0x1a) = *(undefined2 *)((int)param_2 + 0x1a);
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 8) = 0xf;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  param_1[0xb] = 0;
  *(undefined2 *)((int)param_1 + 0x2a) = 0xf;
  param_1[0xc] = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = *(undefined4 *)((int)param_2 + 0x2a);
  *(undefined4 *)((int)param_1 + 0x2e) = *(undefined4 *)((int)param_2 + 0x2e);
  *(undefined2 *)((int)param_1 + 0x32) = *(undefined2 *)((int)param_2 + 0x32);
  uVar2 = param_2[7];
  *(undefined2 *)(param_1 + 0xd) = 1;
  param_1[7] = uVar2;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  param_1[0xd] = param_2[0xd];
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  uVar2 = *(undefined4 *)((int)param_2 + 0x3a);
  *(undefined2 *)((int)param_1 + 0x3e) = 0x17;
  *(undefined4 *)((int)param_1 + 0x3a) = uVar2;
  param_1[0x11] = 0;
  param_1[0x10] = 1;
  *(undefined4 *)((int)param_1 + 0x3e) = *(undefined4 *)((int)param_2 + 0x3e);
  *(undefined4 *)((int)param_1 + 0x42) = *(undefined4 *)((int)param_2 + 0x42);
  uVar1 = *(undefined2 *)((int)param_2 + 0x46);
  *(undefined4 *)((int)param_1 + 0x4a) = 0xc9;
  *(undefined4 *)((int)param_1 + 0x4e) = 5;
  *(undefined2 *)(param_1 + 0x12) = 100;
  *(undefined2 *)((int)param_1 + 0x46) = uVar1;
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2f,&local_8);
  DAT_12039a9c = (*pcVar3)(local_8,param_1 + 0x12,param_2 + 0x12);
  *(undefined2 *)((int)param_1 + 0x5a) = 0;
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x19,&iStack_4);
  DAT_12039a9c = (*pcVar3)(iStack_4,(int)param_1 + 0x5a,(int)param_2 + 0x5a);
  *(undefined2 *)((int)param_1 + 0x86) = 1;
  param_1[0x22] = 0;
  *(undefined4 *)((int)param_1 + 0x86) = *(undefined4 *)((int)param_2 + 0x86);
  *(undefined2 *)((int)param_1 + 0x8a) = *(undefined2 *)((int)param_2 + 0x8a);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((int)param_1 + 0x9e) = 0;
  *(undefined4 *)((int)param_1 + 0xa2) = 0;
  return 0;
}


