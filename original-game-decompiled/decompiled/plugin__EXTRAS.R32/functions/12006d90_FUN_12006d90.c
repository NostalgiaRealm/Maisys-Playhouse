
/* ==== FUN_12006d90 @ 12006d90 ==== 
 * signature: undefined4 __cdecl FUN_12006d90(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 12006d90-12006ddf
 */

undefined4 __cdecl FUN_12006d90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_8;
  undefined4 local_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x14,&local_8);
  DAT_12039a9c = (*pcVar1)(local_8,&local_4,param_1,param_2,param_3);
  return local_4;
}


