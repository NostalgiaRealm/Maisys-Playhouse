
/* ==== FUN_120096c0 @ 120096c0 ==== 
 * signature: float10 __cdecl FUN_120096c0(int param_1, int param_2, undefined4 param_3)
 * body: 120096c0-12009752
 */

float10 __cdecl FUN_120096c0(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_60;
  int iStack_5c;
  undefined1 local_58 [2];
  double dStack_56;
  undefined1 auStack_2c [2];
  double dStack_2a;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_60);
  DAT_12039a9c = (*pcVar1)(local_60,param_3,param_1 + 1,local_58);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&iStack_5c);
  DAT_12039a9c = (*pcVar1)(iStack_5c,param_3,param_2 + 1,auStack_2c);
  return (float10)dStack_56 - (float10)dStack_2a;
}


