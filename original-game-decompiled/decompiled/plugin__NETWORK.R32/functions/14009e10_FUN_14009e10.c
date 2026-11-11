
/* ==== FUN_14009e10 @ 14009e10 ==== 
 * signature: undefined4 __cdecl FUN_14009e10(undefined4 * param_1, undefined4 * param_2)
 * body: 14009e10-14009ef3
 */

undefined4 __cdecl FUN_14009e10(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  code *pcVar2;
  int local_8;
  int iStack_4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  puVar1 = (undefined2 *)((int)param_1 + 10);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_8);
  DAT_14028e48 = (*pcVar2)(local_8,param_1,puVar1);
  *puVar1 = 0;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_4);
  DAT_14028e48 = (*pcVar2)(iStack_4,puVar1,(int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0x36) = *(undefined4 *)((int)param_2 + 0x36);
  *(undefined4 *)((int)param_1 + 0x3a) = *(undefined4 *)((int)param_2 + 0x3a);
  *(undefined2 *)((int)param_1 + 0x3e) = *(undefined2 *)((int)param_2 + 0x3e);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  *(undefined4 *)((int)param_1 + 0x4a) = *(undefined4 *)((int)param_2 + 0x4a);
  *(undefined4 *)((int)param_1 + 0x4e) = *(undefined4 *)((int)param_2 + 0x4e);
  *(undefined2 *)((int)param_1 + 0x52) = *(undefined2 *)((int)param_2 + 0x52);
  return 0;
}


