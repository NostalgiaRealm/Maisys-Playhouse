
/* ==== FUN_14016040 @ 14016040 ==== 
 * signature: undefined4 __cdecl FUN_14016040(undefined4 * param_1, undefined4 * param_2)
 * body: 14016040-14016134
 */

undefined4 __cdecl FUN_14016040(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_c);
  DAT_14028e48 = (*pcVar1)(local_c,param_1,(int)param_1 + 10);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1,(int)param_1 + 0x36);
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0xffffffff;
  *(undefined2 *)((int)param_1 + 0x36) = 0x66;
  param_1[0x11] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,(int)param_1 + 10,(int)param_2 + 10);
  FUN_14008b20(0,(undefined2 *)((int)param_1 + 0x36),(int)param_2 + 0x36);
  return 0;
}


