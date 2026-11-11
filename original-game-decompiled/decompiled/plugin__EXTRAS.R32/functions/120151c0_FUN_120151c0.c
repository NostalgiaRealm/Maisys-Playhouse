
/* ==== FUN_120151c0 @ 120151c0 ==== 
 * signature: undefined __cdecl FUN_120151c0(int param_1, undefined4 param_2)
 * body: 120151c0-12015205
 */

void __cdecl FUN_120151c0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_4);
  DAT_12039a9c = (*pcVar1)(local_4,param_1,param_2,param_1 + 0x4a);
  return;
}


