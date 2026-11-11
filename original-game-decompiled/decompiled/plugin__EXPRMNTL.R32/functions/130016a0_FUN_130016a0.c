
/* ==== FUN_130016a0 @ 130016a0 ==== 
 * signature: undefined4 __cdecl FUN_130016a0(int param_1, int param_2)
 * body: 130016a0-130017ca
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_130016a0(int param_1,int param_2)

{
  code *pcVar1;
  short local_e;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_13003980(param_2,1,8,&local_c);
  _DAT_13008d34 = (*pcVar1)(local_c,&local_e,1);
  if (local_e == 1) {
    pcVar1 = (code *)FUN_13003980(param_2,1,6,&local_c);
    _DAT_13008d34 = (*pcVar1)(local_c,param_1);
    pcVar1 = (code *)FUN_13003980(param_2,1,6,&iStack_8);
    _DAT_13008d34 = (*pcVar1)(iStack_8,param_1 + 10);
    *(undefined4 *)(param_1 + 0x16) = 1;
    *(undefined4 *)(param_1 + 0x1a) = 0;
    *(undefined2 *)(param_1 + 0x14) = 0x17;
    return 0;
  }
  if (local_e == 2) {
    pcVar1 = (code *)FUN_13003980(param_2,1,6,&local_c);
    _DAT_13008d34 = (*pcVar1)(local_c,param_1);
    pcVar1 = (code *)FUN_13003980(param_2,1,6,&iStack_8);
    _DAT_13008d34 = (*pcVar1)(iStack_8,param_1 + 10);
    pcVar1 = (code *)FUN_13003980(param_2,1,6,&iStack_4);
    _DAT_13008d34 = (*pcVar1)(iStack_4,param_1 + 0x14);
    return 0;
  }
  return 0x10000;
}


