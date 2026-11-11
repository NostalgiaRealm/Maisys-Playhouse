
/* ==== FUN_14009d00 @ 14009d00 ==== 
 * signature: undefined4 __cdecl FUN_14009d00(undefined4 * param_1, undefined4 * param_2)
 * body: 14009d00-14009e0b
 */

undefined4 __cdecl FUN_14009d00(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int local_4;
  
  *(undefined2 *)param_1 = 0x17;
  *(undefined4 *)((int)param_1 + 2) = 0x12e;
  *(undefined4 *)((int)param_1 + 6) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[4] = 0;
  *(undefined2 *)((int)param_1 + 10) = 0x66;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0xffffffff;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,(undefined2 *)((int)param_1 + 10),(int)param_2 + 10);
  *(undefined2 *)((int)param_1 + 0x36) = 0x17;
  param_1[0xf] = 0;
  param_1[0xe] = 0x8fd;
  *(undefined4 *)((int)param_1 + 0x36) = *(undefined4 *)((int)param_2 + 0x36);
  *(undefined4 *)((int)param_1 + 0x3a) = *(undefined4 *)((int)param_2 + 0x3a);
  *(undefined2 *)((int)param_1 + 0x3e) = *(undefined2 *)((int)param_2 + 0x3e);
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 0x8fe;
  *(undefined2 *)(param_1 + 0x10) = 0x17;
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  param_1[0x14] = 0;
  param_1[0x13] = 0x8ff;
  *(undefined2 *)((int)param_1 + 0x4a) = 0x17;
  *(undefined4 *)((int)param_1 + 0x4a) = *(undefined4 *)((int)param_2 + 0x4a);
  *(undefined4 *)((int)param_1 + 0x4e) = *(undefined4 *)((int)param_2 + 0x4e);
  *(undefined2 *)((int)param_1 + 0x52) = *(undefined2 *)((int)param_2 + 0x52);
  uVar2 = FUN_14008a80((int)param_1);
  param_1[0x15] = uVar2;
  return 0;
}


