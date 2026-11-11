
/* ==== FUN_14001de0 @ 14001de0 ==== 
 * signature: undefined4 __cdecl FUN_14001de0(int param_1, int param_2)
 * body: 14001de0-14001e42
 */

undefined4 __cdecl FUN_14001de0(int param_1,int param_2)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(param_2,1,1,&local_8);
  DAT_14028e48 = (*pcVar1)(local_8,2,param_1 + 4);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,1,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,3,param_1 + 0xe);
  return 0;
}


