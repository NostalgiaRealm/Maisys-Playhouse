
/* ==== FUN_120022a0 @ 120022a0 ==== 
 * signature: undefined4 __cdecl FUN_120022a0(int param_1)
 * body: 120022a0-120022d3
 */

undefined4 __cdecl FUN_120022a0(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_12027370(param_1,0,0x20,&local_4);
  DAT_12039a9c = (*pcVar1)(local_4,param_1 + 0x62);
  return 0;
}


