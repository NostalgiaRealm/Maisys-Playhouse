
/* ==== FUN_12023860 @ 12023860 ==== 
 * signature: undefined __cdecl FUN_12023860(undefined4 param_1, int param_2, undefined4 param_3)
 * body: 12023860-120238f8
 */

void __cdecl FUN_12023860(undefined4 param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_34;
  int iStack_30;
  short local_2c [22];
  
  if (param_2 != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_34);
    DAT_12039a9c = (*pcVar1)(local_34,param_2,param_3,local_2c);
    FUN_12018a40(param_1,local_2c);
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,5,&iStack_30);
    DAT_12039a9c = (*pcVar1)(iStack_30,param_2,param_3);
  }
  return;
}


