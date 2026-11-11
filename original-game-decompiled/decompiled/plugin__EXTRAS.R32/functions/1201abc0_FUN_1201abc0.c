
/* ==== FUN_1201abc0 @ 1201abc0 ==== 
 * signature: undefined4 __cdecl FUN_1201abc0(undefined4 param_1, int param_2, undefined4 param_3, short param_4)
 * body: 1201abc0-1201ae0b
 */

undefined4 __cdecl FUN_1201abc0(undefined4 param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  int local_14;
  undefined2 local_10;
  int local_e;
  int iStack_8;
  int iStack_4;
  
  local_e = 0;
  local_10 = 1;
  if (param_4 == 8) {
    pcVar1 = (code *)FUN_12027370(param_2,1,3,&local_14);
    DAT_12039a9c = (*pcVar1)(local_14,0xb,0);
    pcVar1 = (code *)FUN_12027370(param_2,1,3,&iStack_8);
    DAT_12039a9c = (*pcVar1)(iStack_8,9,0);
    pcVar1 = (code *)FUN_12027370(param_2,1,3,&iStack_4);
    DAT_12039a9c = (*pcVar1)(iStack_4,0x10,0);
    return 0;
  }
  if (param_4 == 0xc) {
    pcVar1 = (code *)FUN_12027370(param_2,1,3,&local_14);
    DAT_12039a9c = (*pcVar1)(local_14,0xb,1);
    pcVar1 = (code *)FUN_12027370(param_2,1,3,&iStack_8);
    DAT_12039a9c = (*pcVar1)(iStack_8,9,1);
    pcVar1 = (code *)FUN_12027370(param_2,1,3,&iStack_4);
    DAT_12039a9c = (*pcVar1)(iStack_4,0x10,1);
    return 0;
  }
  if (param_4 == 9) {
    pcVar1 = (code *)FUN_12027370(param_2,1,1,&local_14);
    DAT_12039a9c = (*pcVar1)(local_14,9,&local_10);
    pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_8);
    DAT_12039a9c = (*pcVar1)(iStack_8,0x10,&local_10);
    return 0;
  }
  if (param_4 == 0x10) {
    pcVar1 = (code *)FUN_12027370(param_2,1,1,&local_14);
    DAT_12039a9c = (*pcVar1)(local_14,0x10,&local_10);
    if (100 < local_e) {
      local_e = 100;
      pcVar1 = (code *)FUN_12027370(param_2,1,0,&local_14);
      DAT_12039a9c = (*pcVar1)(local_14,0x10,&local_10);
    }
    if (local_e < -100) {
      local_e = -100;
      pcVar1 = (code *)FUN_12027370(param_2,1,0,&local_14);
      DAT_12039a9c = (*pcVar1)(local_14,0x10,&local_10);
    }
    pcVar1 = (code *)FUN_12027370(param_2,1,0,&local_14);
    DAT_12039a9c = (*pcVar1)(local_14,9,&local_10);
  }
  return 0;
}


