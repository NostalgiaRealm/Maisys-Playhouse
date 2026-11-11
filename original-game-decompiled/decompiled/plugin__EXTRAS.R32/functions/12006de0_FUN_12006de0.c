
/* ==== FUN_12006de0 @ 12006de0 ==== 
 * signature: undefined4 __cdecl FUN_12006de0(undefined4 param_1, undefined4 param_2)
 * body: 12006de0-12006e40
 */

undefined4 __cdecl FUN_12006de0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int local_8;
  undefined4 local_4;
  
  FUN_12006e50(param_1);
  FUN_12006e50(param_2);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,4,&local_8);
  DAT_12039a9c = (*pcVar1)(local_8,&local_4,param_1,param_2);
  return local_4;
}


