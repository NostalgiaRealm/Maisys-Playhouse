
/* ==== FUN_12002ce0 @ 12002ce0 ==== 
 * signature: undefined4 __cdecl FUN_12002ce0(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 12002ce0-12002f03
 */

undefined4 __cdecl FUN_12002ce0(int param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  short local_16;
  int local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (param_4 < 2) {
    if (param_4 == 1) {
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_14);
      DAT_12039a9c = (*pcVar1)(local_14,param_1);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_10);
      DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 10);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_c);
      DAT_12039a9c = (*pcVar1)(iStack_c,param_1 + 0x14);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_8);
      DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x1a);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_4);
      DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x32);
      *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x5a) = 1;
      *(undefined4 *)(param_1 + 0x5e) = 600;
      *(undefined2 *)(param_1 + 0x54) = 9;
      return 0;
    }
    return 0x10000;
  }
  pcVar1 = (code *)FUN_12027370(param_2,1,8,&local_14);
  DAT_12039a9c = (*pcVar1)(local_14,&local_16,1);
  if (local_16 == 2) {
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_14);
    DAT_12039a9c = (*pcVar1)(local_14,param_1);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_10);
    DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 10);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_c);
    DAT_12039a9c = (*pcVar1)(iStack_c,param_1 + 0x14);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_8);
    DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x1a);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_4);
    DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x32);
    *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x5a) = 1;
    *(undefined4 *)(param_1 + 0x5e) = 600;
    *(undefined2 *)(param_1 + 0x54) = 9;
    return 0;
  }
  return 0x10000;
}


