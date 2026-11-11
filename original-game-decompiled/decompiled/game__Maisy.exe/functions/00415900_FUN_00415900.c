
/* ==== FUN_00415900 @ 00415900 ==== 
 * signature: undefined4 __cdecl FUN_00415900(undefined4 param_1, short * param_2, int * param_3)
 * body: 00415900-0041593b
 */

undefined4 __cdecl FUN_00415900(undefined4 param_1,short *param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)0x0;
  if (param_3 != (int *)0x0) {
    piVar1 = FUN_0043e870((int *)0x0,param_3 + 1,*param_3);
  }
  if ((piVar1 != (int *)0x0) && (param_2 != (short *)0x0)) {
    uVar2 = FUN_00454d50(param_2,piVar1);
    return uVar2;
  }
  return 0x10000;
}


