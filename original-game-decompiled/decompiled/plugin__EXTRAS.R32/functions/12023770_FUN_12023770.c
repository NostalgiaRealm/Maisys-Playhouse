
/* ==== FUN_12023770 @ 12023770 ==== 
 * signature: undefined __cdecl FUN_12023770(int param_1, int param_2, undefined4 param_3, uint param_4)
 * body: 12023770-12023850
 */

void __cdecl FUN_12023770(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  code *pcVar1;
  uint local_34;
  int iStack_30;
  int local_2c [11];
  
  local_34 = 0;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,local_2c);
  DAT_12039a9c = (*pcVar1)(local_2c[0],param_2,&local_34);
  if (local_34 != param_4) {
    if (local_34 < param_4) {
      do {
        FUN_12023eb0(*(short *)(param_1 + 0xe),(undefined2 *)local_2c);
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,2,&iStack_30);
        DAT_12039a9c = (*pcVar1)(iStack_30,param_2,local_2c);
        local_34 = local_34 + 1;
      } while (local_34 < param_4);
      return;
    }
    for (; param_4 < local_34; local_34 = local_34 - 1) {
      FUN_12023860(param_1,param_2,local_34);
    }
  }
  return;
}


