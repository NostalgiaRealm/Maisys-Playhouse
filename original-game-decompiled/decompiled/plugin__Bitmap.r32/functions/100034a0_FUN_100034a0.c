
/* ==== FUN_100034a0 @ 100034a0 ==== 
 * signature: undefined __cdecl FUN_100034a0(int param_1, undefined4 param_2)
 * body: 100034a0-10003537
 */

void __cdecl FUN_100034a0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int local_10;
  int local_c;
  undefined2 uStack_8;
  undefined4 uStack_6;
  
  local_10 = 0;
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1c,&local_c);
  DAT_100173bc = (*pcVar1)(local_c,param_1 + 0x3e,param_1,&local_10,0);
  if ((DAT_100173bc == 0) && (local_10 != 0)) {
    uStack_8 = 1;
    uStack_6 = param_2;
    pcVar1 = (code *)FUN_100089c7(local_10,0,0x17,&param_1);
    DAT_100173bc = (*pcVar1)(param_1,s_winvalue_10013090,0,&uStack_8);
  }
  return;
}


