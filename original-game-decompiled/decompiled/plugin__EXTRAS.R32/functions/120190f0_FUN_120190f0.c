
/* ==== FUN_120190f0 @ 120190f0 ==== 
 * signature: undefined __cdecl FUN_120190f0(int param_1, short * param_2)
 * body: 120190f0-1201928c
 */

void __cdecl FUN_120190f0(int param_1,short *param_2)

{
  code *pcVar1;
  int local_1c;
  int local_18;
  int iStack_14;
  undefined2 local_10;
  int local_e;
  int local_a;
  int iStack_4;
  
  if (*param_2 != -1) {
    pcVar1 = (code *)FUN_12027370(param_1,1,5,&local_1c);
    DAT_12039a9c = (*pcVar1)(local_1c,param_2);
    return;
  }
  local_10 = 0xffff;
  if (*(int *)(param_2 + 1) == 0) {
    local_18 = 0;
  }
  else {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xc,&local_1c);
    DAT_12039a9c = (*pcVar1)(local_1c,&local_18,*(undefined4 *)(param_2 + 1));
    local_18 = local_18 + 1;
  }
  local_e = local_18;
  local_a = local_18;
  pcVar1 = (code *)FUN_12027370(param_1,1,7,&local_1c);
  DAT_12039a9c = (*pcVar1)(local_1c,&local_10,1);
  pcVar1 = (code *)FUN_12027370(param_1,1,9,&iStack_14);
  DAT_12039a9c = (*pcVar1)(iStack_14,&local_e,1);
  pcVar1 = (code *)FUN_12027370(param_1,1,9,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,&local_a,1);
  if (local_18 != 0) {
    pcVar1 = (code *)FUN_12027370(param_1,1,2,&local_1c);
    DAT_12039a9c = (*pcVar1)(local_1c,*(undefined4 *)(param_2 + 1),local_a);
  }
  pcVar1 = (code *)FUN_12027370(param_1,1,9,&local_1c);
  DAT_12039a9c = (*pcVar1)(local_1c,param_2 + 3,1);
  pcVar1 = (code *)FUN_12027370(param_1,1,9,&iStack_14);
  DAT_12039a9c = (*pcVar1)(iStack_14,param_2 + 5,8);
  return;
}


