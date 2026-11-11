
/* ==== FUN_1400dc80 @ 1400dc80 ==== 
 * signature: undefined4 __cdecl FUN_1400dc80(undefined4 * param_1, undefined4 * param_2)
 * body: 1400dc80-1400ddae
 */

undefined4 __cdecl FUN_1400dc80(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int local_8;
  int iStack_4;
  
  *(undefined2 *)param_1 = 0x17;
  *(undefined4 *)((int)param_1 + 2) = 0x12e;
  *(undefined4 *)((int)param_1 + 6) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined2 *)((int)param_1 + 10) = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&local_8);
  DAT_14028e48 = (*pcVar1)(local_8,(int)param_1 + 10,(int)param_2 + 10);
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,(int)param_1 + 0x36,(int)param_2 + 0x36);
  *(undefined2 *)((int)param_1 + 0x8a) = 0x66;
  param_1[0x23] = 0xffffffff;
  *(undefined2 *)((int)param_1 + 0x66) = 0x66;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0x66;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)((int)param_1 + 0x7a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x7e) = 0;
  *(undefined4 *)((int)param_1 + 0x82) = 0;
  *(undefined4 *)((int)param_1 + 0x86) = 0;
  uVar2 = FUN_14008a80((int)param_1);
  *(undefined4 *)((int)param_1 + 0x62) = uVar2;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)((int)param_1 + 0xa9) = 1;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  return 0;
}


