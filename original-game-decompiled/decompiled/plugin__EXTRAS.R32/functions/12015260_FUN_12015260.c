
/* ==== FUN_12015260 @ 12015260 ==== 
 * signature: undefined4 __cdecl FUN_12015260(int param_1, undefined4 param_2)
 * body: 12015260-120152e9
 */

undefined4 __cdecl FUN_12015260(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined2 local_c;
  DWORD local_a;
  int local_4;
  
  local_c = 1;
  local_a = 0;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_4);
  DAT_12039a9c = (*pcVar1)(local_4,param_1,param_2,&local_c);
  if (DAT_12039a9c != 0) {
    return 0x10000;
  }
  if ((*(char *)(param_1 + 0x6c) != '\0') && (*(char *)(param_1 + 0x6d) != '\0')) {
    uVar2 = FUN_12004850(param_1,local_a);
    return uVar2;
  }
  return 0xa0002;
}


