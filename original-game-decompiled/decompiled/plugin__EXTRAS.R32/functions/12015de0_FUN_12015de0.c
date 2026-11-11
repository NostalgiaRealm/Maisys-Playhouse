
/* ==== FUN_12015de0 @ 12015de0 ==== 
 * signature: undefined4 __cdecl FUN_12015de0(undefined4 param_1)
 * body: 12015de0-12015e1e
 */

undefined4 __cdecl FUN_12015de0(undefined4 param_1)

{
  code *pcVar1;
  int local_8;
  undefined4 local_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 8),1,0,&local_8);
  DAT_12039a9c = (*pcVar1)(local_8,param_1,&local_4);
  return local_4;
}


