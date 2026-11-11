
/* ==== FUN_1201a780 @ 1201a780 ==== 
 * signature: undefined4 __cdecl FUN_1201a780(int param_1)
 * body: 1201a780-1201a7b3
 */

undefined4 __cdecl FUN_1201a780(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_12027370(param_1,0,0x20,&local_4);
  DAT_12039a9c = (*pcVar1)(local_4,param_1 + 0x60);
  return 0;
}


