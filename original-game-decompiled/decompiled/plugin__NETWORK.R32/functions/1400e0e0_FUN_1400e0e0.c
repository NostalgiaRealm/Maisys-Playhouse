
/* ==== FUN_1400e0e0 @ 1400e0e0 ==== 
 * signature: undefined4 __cdecl FUN_1400e0e0(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 1400e0e0-1400e1a7
 */

undefined4 __cdecl FUN_1400e0e0(int param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  short local_e;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  if (param_4 == 1) {
    pcVar1 = (code *)FUN_14008ab0(param_2,1,8,&local_c);
    DAT_14028e48 = (*pcVar1)(local_c,&local_e,1);
    if (local_e == 1) {
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_c);
      DAT_14028e48 = (*pcVar1)(local_c,param_1);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_8);
      DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 10);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_4);
      DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x36);
      return 0;
    }
  }
  return 0x10000;
}


