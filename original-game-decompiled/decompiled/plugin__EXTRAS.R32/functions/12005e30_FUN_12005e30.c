
/* ==== FUN_12005e30 @ 12005e30 ==== 
 * signature: undefined4 __cdecl FUN_12005e30(int param_1)
 * body: 12005e30-12005e62
 */

undefined4 __cdecl FUN_12005e30(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_12027370(param_1,0,0x21,&local_4);
  DAT_12039a9c = (*pcVar1)(local_4,2,param_1);
  return 0;
}


