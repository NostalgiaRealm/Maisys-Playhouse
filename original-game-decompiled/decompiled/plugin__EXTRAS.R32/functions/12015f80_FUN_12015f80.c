
/* ==== FUN_12015f80 @ 12015f80 ==== 
 * signature: undefined4 __cdecl FUN_12015f80(int param_1)
 * body: 12015f80-12015fcc
 */

undefined4 __cdecl FUN_12015f80(int param_1)

{
  code *pcVar1;
  undefined4 local_8;
  int local_4;
  
  local_8 = 0;
  if (param_1 != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 8),1,6,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,param_1,&local_8);
  }
  return local_8;
}


