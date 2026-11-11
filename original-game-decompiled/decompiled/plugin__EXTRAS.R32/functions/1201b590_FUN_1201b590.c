
/* ==== FUN_1201b590 @ 1201b590 ==== 
 * signature: undefined4 __cdecl FUN_1201b590(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 1201b590-1201b835
 */

undefined4 __cdecl FUN_1201b590(int param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  int iVar2;
  short local_16;
  int local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (3 < param_4) {
    pcVar1 = (code *)FUN_12027370(param_2,1,8,&local_14);
    DAT_12039a9c = (*pcVar1)(local_14,&local_16,1);
    if (local_16 == 4) {
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
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x58) = 1;
      *(undefined4 *)(param_1 + 0x5c) = 600;
      *(undefined2 *)(param_1 + 0x52) = 9;
      return 0;
    }
    return 0x10000;
  }
  if (param_4 != 0) {
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_14);
    DAT_12039a9c = (*pcVar1)(local_14,param_1);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_10);
    DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 10);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_c);
    DAT_12039a9c = (*pcVar1)(iStack_c,param_1 + 0x14);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_8);
    DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x1a);
    if ((param_4 == 2) || (param_4 == 3)) {
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_14);
      DAT_12039a9c = (*pcVar1)(local_14,param_1 + 0x32);
      *(undefined4 *)(param_1 + 0x58) = 1;
      *(undefined4 *)(param_1 + 0x5c) = 600;
      *(undefined2 *)(param_1 + 0x52) = 9;
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x34);
    }
    else if (param_4 == 1) {
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_14);
      DAT_12039a9c = (*pcVar1)(local_14,param_1 + 0x20);
      *(int *)(param_1 + 0x22) = param_1;
      iVar2 = FUN_1201bb80(*(char **)(param_1 + 0x2e));
      *(int *)(param_1 + 0x34) = iVar2;
      *(int *)(param_1 + 0x54) = iVar2;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) * 2 + -100;
      *(undefined4 *)(param_1 + 0x58) = 1;
      *(undefined4 *)(param_1 + 0x5c) = 600;
      *(undefined2 *)(param_1 + 0x52) = 9;
      return 0;
    }
    return 0;
  }
  return 0x10000;
}


