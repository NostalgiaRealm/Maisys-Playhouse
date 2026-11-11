
/* ==== FUN_00471150 @ 00471150 ==== 
 * signature: undefined4 __cdecl FUN_00471150(undefined4 param_1, int param_2, int param_3)
 * body: 00471150-004711b1
 */

undefined4 __cdecl FUN_00471150(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  void *local_8;
  
  iVar1 = FUN_00471110(param_2,(int *)&local_8);
  if (iVar1 == 0x10000) {
    return 0x10000;
  }
  if (((((*(uint *)(param_3 + 0x1e) & 2) != 0) && (*(short *)(param_3 + 0x60) == 0)) &&
      ((*(uint *)(param_3 + 0x1e) & 0x40000000) == 0)) && (*(short *)(param_3 + 0x22) != 0x43)) {
    FUN_004058d0(local_8,param_3,(undefined4 *)&stack0x00000010);
    return 0;
  }
  return 0x60002;
}


