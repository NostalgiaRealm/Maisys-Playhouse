
/* ==== FUN_1400a060 @ 1400a060 ==== 
 * signature: undefined4 __cdecl FUN_1400a060(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 1400a060-1400a102
 */

undefined4 __cdecl FUN_1400a060(int param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  short local_a;
  int local_8;
  int iStack_4;
  
  if (param_4 == 1) {
    pcVar1 = (code *)FUN_14008ab0(param_2,1,8,&local_8);
    DAT_14028e48 = (*pcVar1)(local_8,&local_a,1);
    if (local_a == 1) {
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_8);
      DAT_14028e48 = (*pcVar1)(local_8,param_1);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_4);
      DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 10);
      return 0;
    }
  }
  return 0x10000;
}


