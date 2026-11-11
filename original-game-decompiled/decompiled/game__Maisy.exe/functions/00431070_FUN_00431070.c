
/* ==== FUN_00431070 @ 00431070 ==== 
 * signature: undefined1 __stdcall FUN_00431070(int * param_1)
 * body: 00431070-0043108e
 */

undefined1 FUN_00431070(int *param_1)

{
  undefined1 uVar1;
  
  uVar1 = 3;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar1 = FUN_004446a0(*param_1);
  }
  return uVar1;
}


