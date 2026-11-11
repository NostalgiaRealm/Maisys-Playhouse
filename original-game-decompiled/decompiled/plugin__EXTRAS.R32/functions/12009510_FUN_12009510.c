
/* ==== FUN_12009510 @ 12009510 ==== 
 * signature: float10 __cdecl FUN_12009510(int param_1, int param_2, undefined4 param_3)
 * body: 12009510-120095e2
 */

float10 __cdecl FUN_12009510(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_60;
  int iStack_5c;
  undefined1 local_58 [2];
  short sStack_56;
  short sStack_54;
  undefined1 auStack_2c [2];
  short sStack_2a;
  short sStack_28;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_60);
  DAT_12039a9c = (*pcVar1)(local_60,param_3,param_1 + 1,local_58);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&iStack_5c);
  DAT_12039a9c = (*pcVar1)(iStack_5c,param_3,param_2 + 1,auStack_2c);
  if (sStack_56 != sStack_2a) {
    return (float10)((int)sStack_56 - (int)sStack_2a);
  }
  return (float10)((int)sStack_54 - (int)sStack_28);
}


