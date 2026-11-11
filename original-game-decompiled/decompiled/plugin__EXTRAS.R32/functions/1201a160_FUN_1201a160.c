
/* ==== FUN_1201a160 @ 1201a160 ==== 
 * signature: undefined4 __cdecl FUN_1201a160(int param_1, short * param_2, undefined4 * param_3)
 * body: 1201a160-1201a220
 */

undefined4 __cdecl FUN_1201a160(int param_1,short *param_2,undefined4 *param_3)

{
  code *pcVar1;
  int local_10;
  undefined4 local_c;
  undefined2 local_8;
  undefined4 local_6;
  
  local_c = 0;
  if (*param_2 == 0x6a) {
    *param_2 = 1;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,&local_10);
    DAT_12039a9c = (*pcVar1)(local_10,*(undefined4 *)(param_1 + 0x10),&local_c);
  }
  local_6 = local_c;
  local_8 = 1;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_10);
  DAT_12039a9c = (*pcVar1)(local_10,param_1,&local_8,param_2);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_c;
  }
  return DAT_12039a9c;
}


