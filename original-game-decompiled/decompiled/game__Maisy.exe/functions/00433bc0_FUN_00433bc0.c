
/* ==== FUN_00433bc0 @ 00433bc0 ==== 
 * signature: undefined4 __cdecl FUN_00433bc0(undefined4 * param_1, int * param_2)
 * body: 00433bc0-00433bf7
 */

undefined4 __cdecl FUN_00433bc0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  *param_2 = 0;
  if ((param_1 != (undefined4 *)0x0) && ((*(byte *)((int)piVar1 + 0x21) & 0x20) != 0)) {
    piVar1 = FUN_0042c350(piVar1);
    if (piVar1 != (int *)0x0) {
      *param_2 = piVar1[0x14];
    }
    return 0;
  }
  return 0x10002;
}


