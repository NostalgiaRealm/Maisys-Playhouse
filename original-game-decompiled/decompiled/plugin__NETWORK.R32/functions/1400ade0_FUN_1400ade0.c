
/* ==== FUN_1400ade0 @ 1400ade0 ==== 
 * signature: undefined4 __cdecl FUN_1400ade0(undefined4 * param_1, undefined4 * param_2)
 * body: 1400ade0-1400af7b
 */

undefined4 __cdecl FUN_1400ade0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
  param_1[0x26] = param_2[0x26];
  *(undefined2 *)(param_1 + 0x27) = *(undefined2 *)(param_2 + 0x27);
  puVar1 = param_1 + 0x10;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_18);
  DAT_14028e48 = (*pcVar2)(local_18,param_1,puVar1);
  *(undefined2 *)puVar1 = 0;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_14);
  DAT_14028e48 = (*pcVar2)(iStack_14,puVar1,param_2 + 0x10);
  puVar1 = param_1 + 5;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_10);
  DAT_14028e48 = (*pcVar2)(iStack_10,param_1,puVar1);
  *(undefined2 *)puVar1 = 0;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_c);
  DAT_14028e48 = (*pcVar2)(iStack_c,puVar1,param_2 + 5);
  puVar1 = param_1 + 0x1b;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_8);
  DAT_14028e48 = (*pcVar2)(iStack_8,param_1,puVar1);
  *(undefined2 *)puVar1 = 0;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_4);
  DAT_14028e48 = (*pcVar2)(iStack_4,puVar1,param_2 + 0x1b);
  *(undefined4 *)((int)param_1 + 0x9e) = 0;
  return 0;
}


