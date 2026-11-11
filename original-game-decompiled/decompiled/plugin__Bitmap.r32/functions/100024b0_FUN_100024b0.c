
/* ==== FUN_100024b0 @ 100024b0 ==== 
 * signature: undefined4 __cdecl FUN_100024b0(int param_1)
 * body: 100024b0-1000254a
 */

undefined4 __cdecl FUN_100024b0(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int local_10;
  int local_c;
  undefined2 uStack_8;
  undefined4 uStack_6;
  
  uVar2 = 0;
  local_10 = 0;
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1c,&local_c);
  DAT_100173bc = (*pcVar1)(local_c,param_1 + 0x14,param_1,&local_10,0);
  if ((DAT_100173bc == 0) && (local_10 != 0)) {
    uStack_8 = 1;
    uStack_6 = 0;
    pcVar1 = (code *)FUN_100089c7(local_10,0,0x16,&param_1);
    DAT_100173bc = (*pcVar1)(param_1,s_winvalue_10013090,0,&uStack_8);
    if (DAT_100173bc == 0) {
      uVar2 = uStack_6;
    }
  }
  return uVar2;
}


