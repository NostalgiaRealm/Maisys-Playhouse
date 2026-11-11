
/* ==== FUN_1200cb60 @ 1200cb60 ==== 
 * signature: undefined4 __cdecl FUN_1200cb60(int param_1, int param_2)
 * body: 1200cb60-1200cbb7
 */

undefined4 __cdecl FUN_1200cb60(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x66) != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    if ((*(int *)(param_1 + 2) == iVar1) && (*(int *)(param_1 + 6) == *(int *)(param_2 + 0x10))) {
      FUN_1200cae0(param_1);
      return 0;
    }
    if (((*(int *)(param_1 + 0xc) == iVar1) &&
        (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 0x10))) || (iVar1 == 0x7d2)) {
      FUN_1200cb30(param_1);
      FUN_1200cbe0(param_1);
      return 0;
    }
  }
  return 0x10000;
}


