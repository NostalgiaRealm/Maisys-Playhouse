
/* ==== FUN_120079a0 @ 120079a0 ==== 
 * signature: undefined4 __cdecl FUN_120079a0(int param_1, int param_2)
 * body: 120079a0-120079cb
 */

undefined4 __cdecl FUN_120079a0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 2) == *(int *)(param_2 + 0xc)) &&
     (*(int *)(param_1 + 6) == *(int *)(param_2 + 0x10))) {
    uVar1 = FUN_120079d0(param_1,param_2 + 0x26);
    return uVar1;
  }
  return 0x10000;
}


