
/* ==== FUN_13004410 @ 13004410 ==== 
 * signature: undefined4 __cdecl FUN_13004410(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 13004410-13004518
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13004410(int param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  short local_a;
  int local_8;
  int iStack_4;
  
  if (param_4 < 1) {
    if (param_4 == 0) {
      pcVar1 = (code *)FUN_13003980(param_2,1,6,&local_8);
      _DAT_13008d34 = (*pcVar1)(local_8,param_1);
      pcVar1 = (code *)FUN_13003980(param_2,1,6,&iStack_4);
      _DAT_13008d34 = (*pcVar1)(iStack_4,param_1 + 10);
      return 0;
    }
    return 0x10000;
  }
  pcVar1 = (code *)FUN_13003980(param_2,1,8,&local_8);
  _DAT_13008d34 = (*pcVar1)(local_8,&local_a,1);
  if (local_a == 1) {
    pcVar1 = (code *)FUN_13003980(param_2,1,6,&local_8);
    _DAT_13008d34 = (*pcVar1)(local_8,param_1);
    pcVar1 = (code *)FUN_13003980(param_2,1,6,&iStack_4);
    _DAT_13008d34 = (*pcVar1)(iStack_4,param_1 + 10);
    return 0;
  }
  return 0x10000;
}


