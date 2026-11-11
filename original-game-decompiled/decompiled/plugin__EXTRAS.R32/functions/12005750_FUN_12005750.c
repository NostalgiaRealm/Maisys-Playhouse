
/* ==== FUN_12005750 @ 12005750 ==== 
 * signature: undefined4 __cdecl FUN_12005750(int param_1, int param_2)
 * body: 12005750-1200581a
 */

undefined4 __cdecl FUN_12005750(int param_1,int param_2)

{
  code *pcVar1;
  int local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&local_14);
  DAT_12039a9c = (*pcVar1)(local_14,param_1);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 10);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1 + 0x1e);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x24);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x2a);
  return 0;
}


