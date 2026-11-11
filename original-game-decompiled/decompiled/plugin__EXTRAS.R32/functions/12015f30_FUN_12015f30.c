
/* ==== FUN_12015f30 @ 12015f30 ==== 
 * signature: undefined4 __cdecl FUN_12015f30(int param_1)
 * body: 12015f30-12015f7c
 */

undefined4 __cdecl FUN_12015f30(int param_1)

{
  code *pcVar1;
  undefined4 local_8;
  int local_4;
  
  local_8 = 0;
  if (param_1 != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 8),1,5,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,param_1,&local_8);
  }
  return local_8;
}


