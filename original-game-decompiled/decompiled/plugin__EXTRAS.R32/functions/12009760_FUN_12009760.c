
/* ==== FUN_12009760 @ 12009760 ==== 
 * signature: float10 __cdecl FUN_12009760(int param_1, int param_2, undefined4 param_3)
 * body: 12009760-12009854
 */

float10 __cdecl FUN_12009760(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_64;
  int iStack_60;
  int iStack_5c;
  undefined1 auStack_58 [14];
  int iStack_4a;
  undefined1 local_2c [14];
  int iStack_1e;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_64);
  DAT_12039a9c = (*pcVar1)(local_64,param_3,param_1 + 1,local_2c);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&iStack_60);
  DAT_12039a9c = (*pcVar1)(iStack_60,param_3,param_2 + 1,auStack_58);
  if (iStack_1e == 0) {
    return (float10)-1.0;
  }
  if (iStack_4a == 0) {
    return (float10)1.0;
  }
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,4,&local_64);
  DAT_12039a9c = (*pcVar1)(local_64,&iStack_5c,iStack_1e,iStack_4a);
  return (float10)iStack_5c;
}


