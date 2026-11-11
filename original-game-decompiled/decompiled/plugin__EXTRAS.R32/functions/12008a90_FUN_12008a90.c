
/* ==== FUN_12008a90 @ 12008a90 ==== 
 * signature: undefined4 __cdecl FUN_12008a90(int param_1, int param_2)
 * body: 12008a90-12008b3f
 */

undefined4 __cdecl FUN_12008a90(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_12;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_12 = 1;
  pcVar1 = (code *)FUN_12027370(param_2,1,7,&local_10);
  DAT_12039a9c = (*pcVar1)(local_10,&local_12,1);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 10);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x1c);
  return 0;
}


