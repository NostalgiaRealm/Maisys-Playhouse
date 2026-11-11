
/* ==== FUN_1400ddb0 @ 1400ddb0 ==== 
 * signature: undefined4 __cdecl FUN_1400ddb0(undefined4 * param_1, undefined4 * param_2)
 * body: 1400ddb0-1400deb1
 */

undefined4 __cdecl FUN_1400ddb0(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  code *pcVar2;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_10);
  DAT_14028e48 = (*pcVar2)(local_10,param_1,(int)param_1 + 10);
  puVar1 = (undefined2 *)((int)param_1 + 0x36);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_c);
  DAT_14028e48 = (*pcVar2)(iStack_c,param_1,puVar1);
  *puVar1 = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_8);
  DAT_14028e48 = (*pcVar2)(iStack_8,(int)param_1 + 10,(int)param_2 + 10);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_4);
  DAT_14028e48 = (*pcVar2)(iStack_4,puVar1,(int)param_2 + 0x36);
  return 0;
}


