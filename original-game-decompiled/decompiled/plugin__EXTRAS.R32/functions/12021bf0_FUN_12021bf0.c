
/* ==== FUN_12021bf0 @ 12021bf0 ==== 
 * signature: undefined4 __cdecl FUN_12021bf0(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 12021bf0-12021db3
 */

undefined4 __cdecl FUN_12021bf0(int param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  short local_e;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  if (1 < param_4) {
    pcVar1 = (code *)FUN_12027370(param_2,1,8,&local_c);
    DAT_12039a9c = (*pcVar1)(local_c,&local_e,1);
    if (local_e == 2) {
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_c);
      DAT_12039a9c = (*pcVar1)(local_c,param_1);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_8);
      DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 10);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_4);
      DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x14);
      return 0;
    }
    return 0x10000;
  }
  if (param_4 == 1) {
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_c);
    DAT_12039a9c = (*pcVar1)(local_c,param_1);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_8);
    DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 10);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_4);
    DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x14);
    return 0;
  }
  if (param_4 == 0) {
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_c);
    DAT_12039a9c = (*pcVar1)(local_c,param_1);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_8);
    DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x14);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 10) = 0x17;
    return 0;
  }
  return 0x10000;
}


