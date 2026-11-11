
/* ==== FUN_00415940 @ 00415940 ==== 
 * signature: uint __cdecl FUN_00415940(undefined4 param_1, int param_2, int * param_3)
 * body: 00415940-0041598d
 */

uint __cdecl FUN_00415940(undefined4 param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (((param_2 != 0) && (piVar1 = *(int **)(param_2 + 2), piVar1 != (int *)0x0)) &&
     (param_3 != (int *)0x0)) {
    if ((piVar1 != (int *)0x0) && ((*(byte *)((int)piVar1 + 0x1e) & 1) != 0)) {
      uVar2 = FUN_0043e610(piVar1,8,param_3 + 1,param_3,(int *)0x0);
      return -(uint)((char)uVar2 == '\0') & 0x10000;
    }
    return 0x10000;
  }
  return 0x10000;
}


