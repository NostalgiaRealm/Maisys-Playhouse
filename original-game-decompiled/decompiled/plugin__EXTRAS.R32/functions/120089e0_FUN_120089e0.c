
/* ==== FUN_120089e0 @ 120089e0 ==== 
 * signature: undefined4 __cdecl FUN_120089e0(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 120089e0-12008a8d
 */

undefined4 __cdecl FUN_120089e0(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int local_10;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  *param_4 = 2;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&local_c);
  DAT_12039a9c = (*pcVar1)(local_c,param_1,&local_10);
  *param_4 = *param_4 + local_10;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 10,&local_10);
  *param_4 = *param_4 + local_10;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x1c,&local_10);
  *param_4 = *param_4 + local_10;
  return 0;
}


