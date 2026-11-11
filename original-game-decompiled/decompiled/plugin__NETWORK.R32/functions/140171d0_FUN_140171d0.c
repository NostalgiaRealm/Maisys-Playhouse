
/* ==== FUN_140171d0 @ 140171d0 ==== 
 * signature: undefined4 __cdecl FUN_140171d0(undefined4 * param_1, undefined4 * param_2)
 * body: 140171d0-140172b8
 */

undefined4 __cdecl FUN_140171d0(undefined4 *param_1,undefined4 *param_2)

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
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&local_8);
  DAT_14028e48 = (*pcVar1)(local_8,(int)param_1 + 0x36,(int)param_2 + 0x36);
  *(undefined2 *)((int)param_1 + 10) = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,(int)param_1 + 10,(int)param_2 + 10);
  param_1[0x22] = 0xffffffff;
  *(undefined2 *)((int)param_1 + 0x86) = 0x66;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar2 = FUN_14008a80((int)param_1);
  param_1[0x27] = uVar2;
  return 0;
}


