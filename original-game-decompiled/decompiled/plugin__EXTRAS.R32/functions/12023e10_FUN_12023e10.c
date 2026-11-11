
/* ==== FUN_12023e10 @ 12023e10 ==== 
 * signature: undefined __cdecl FUN_12023e10(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 12023e10-12023eaf
 */

void __cdecl FUN_12023e10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_18;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  local_14 = 0x69;
  local_e = 0;
  local_a = 0;
  local_12 = 0;
  local_6 = 0;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_18);
  DAT_12039a9c = (*pcVar1)(local_18,param_1,param_2,&local_14);
  if (DAT_12039a9c == 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x38),1,10,&local_18);
    DAT_12039a9c = (*pcVar1)(local_18,&local_14,param_3);
  }
  return;
}


