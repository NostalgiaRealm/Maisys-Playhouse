
/* ==== FUN_12014500 @ 12014500 ==== 
 * signature: undefined4 __cdecl FUN_12014500(int param_1)
 * body: 12014500-12014559
 */

undefined4 __cdecl FUN_12014500(int param_1)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_12027370(param_1,0,0x21,&local_8);
  DAT_12039a9c = (*pcVar1)(local_8,2,param_1);
  pcVar1 = (code *)FUN_12027370(param_1,0,0x21,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,2,param_1 + 10);
  return 0;
}


