
/* ==== FUN_13001540 @ 13001540 ==== 
 * signature: undefined4 __cdecl FUN_13001540(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 13001540-130015ed
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13001540(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int local_10;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  *param_4 = 2;
  pcVar1 = (code *)FUN_13003980(param_2,1,4,&local_c);
  _DAT_13008d34 = (*pcVar1)(local_c,param_1,&local_10);
  *param_4 = *param_4 + local_10;
  pcVar1 = (code *)FUN_13003980(param_2,1,4,&iStack_8);
  _DAT_13008d34 = (*pcVar1)(iStack_8,param_1 + 10,&local_10);
  *param_4 = *param_4 + local_10;
  pcVar1 = (code *)FUN_13003980(param_2,1,4,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,param_1 + 0x14,&local_10);
  *param_4 = *param_4 + local_10;
  return 0;
}


