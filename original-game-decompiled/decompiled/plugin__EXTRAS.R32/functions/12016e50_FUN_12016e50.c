
/* ==== FUN_12016e50 @ 12016e50 ==== 
 * signature: undefined4 __cdecl FUN_12016e50(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 12016e50-120170ae
 */

undefined4 __cdecl FUN_12016e50(int param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int local_c;
  int iStack_8;
  int local_4;
  
  uVar2 = 0x10000;
  if (param_4 < 3) {
    if (param_4 == 2) {
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_c);
      DAT_12039a9c = (*pcVar1)(local_c,param_1);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_8);
      DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x56);
      if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
        pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_c);
        DAT_12039a9c = (*pcVar1)(local_c,param_1 + 0x20);
        return 0x10000;
      }
    }
    else {
      if (param_4 == 1) {
        pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_c);
        DAT_12039a9c = (*pcVar1)(local_c,param_1);
        pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_8);
        DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x20);
        pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_4);
        DAT_12039a9c = (*pcVar1)(local_4,param_1 + 0x56);
        return 0;
      }
      if (param_4 == 0) {
        pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_c);
        DAT_12039a9c = (*pcVar1)(local_c,param_1);
        pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_8);
        uVar2 = 0;
        DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x58) = 5;
        *(undefined2 *)(param_1 + 0x56) = 1;
      }
    }
    return uVar2;
  }
  pcVar1 = (code *)FUN_12027370(param_2,1,8,&local_c);
  DAT_12039a9c = (*pcVar1)(local_c,&local_4,1);
  if ((short)local_4 == 3) {
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_c);
    DAT_12039a9c = (*pcVar1)(local_c,param_1);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_8);
    DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x56);
    if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_c);
      DAT_12039a9c = (*pcVar1)(local_c,param_1 + 0x20);
    }
    return 0;
  }
  return 0x10000;
}


