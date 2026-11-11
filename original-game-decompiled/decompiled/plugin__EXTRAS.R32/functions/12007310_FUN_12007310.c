
/* ==== FUN_12007310 @ 12007310 ==== 
 * signature: undefined4 __cdecl FUN_12007310(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 12007310-12007358
 */

undefined4 __cdecl FUN_12007310(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&local_4);
  DAT_12039a9c = (*pcVar1)(local_4,param_2,param_3,param_1);
  return 0;
}


