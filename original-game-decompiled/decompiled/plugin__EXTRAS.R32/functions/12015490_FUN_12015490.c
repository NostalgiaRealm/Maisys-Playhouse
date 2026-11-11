
/* ==== FUN_12015490 @ 12015490 ==== 
 * signature: undefined4 __cdecl FUN_12015490(int param_1, undefined4 param_2)
 * body: 12015490-120155b2
 */

undefined4 __cdecl FUN_12015490(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int local_18;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  DWORD local_a;
  LPCVOID local_6;
  
  if ((*(char *)(param_1 + 0x6c) != '\0') && (*(char *)(param_1 + 0x6d) != '\0')) {
    local_e = 0;
    local_a = 0;
    local_6 = (LPCVOID)0x0;
    local_12 = 0xffffffff;
    local_14 = 0x66;
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_18);
    DAT_12039a9c = (*pcVar1)(local_18,param_1,param_2,&local_14);
    if (DAT_12039a9c != 0) {
      if (local_6 != (LPCVOID)0x0) {
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_18);
        DAT_12039a9c = (*pcVar1)(local_18,local_6);
      }
      return 0x10000;
    }
    uVar2 = FUN_12004790(param_1,local_a,local_6);
    if (local_6 != (LPCVOID)0x0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_18);
      DAT_12039a9c = (*pcVar1)(local_18,local_6);
    }
    return uVar2;
  }
  return 0xa0002;
}


