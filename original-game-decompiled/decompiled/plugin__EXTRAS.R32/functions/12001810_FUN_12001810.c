
/* ==== FUN_12001810 @ 12001810 ==== 
 * signature: int __cdecl FUN_12001810(int param_1, short * param_2, short * param_3)
 * body: 12001810-12001880
 */

int __cdecl FUN_12001810(int param_1,short *param_2,short *param_3)

{
  int iVar1;
  
  if (param_3 == (short *)0x0) {
    return 0x10000;
  }
  if (*param_3 == 0x32d5) {
    iVar1 = FUN_12001ce0(param_1,param_2,(int)param_3);
    return iVar1;
  }
  if (param_2 == (short *)0x0) {
    iVar1 = FUN_12001a20(param_1,param_3);
    return iVar1;
  }
  if (*param_2 == 1) {
    if (*(uint *)(param_2 + 1) != 0) {
      iVar1 = FUN_12001890(param_1,*(uint *)(param_2 + 1),param_3);
      return iVar1;
    }
    iVar1 = FUN_12001a20(param_1,param_3);
    return iVar1;
  }
  return 0x10000;
}


