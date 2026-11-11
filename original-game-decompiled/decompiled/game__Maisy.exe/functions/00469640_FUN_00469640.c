
/* ==== FUN_00469640 @ 00469640 ==== 
 * signature: uint __stdcall FUN_00469640(int * param_1)
 * body: 00469640-00469669
 */

uint FUN_00469640(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x16c))();
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    if ((*(uint *)((int)piVar1 + 0x26) & 0x10000000) != 0) break;
    piVar1 = (int *)(**(code **)(*piVar1 + 0x16c))();
  }
  return (uint)piVar1 & 0xffffff00;
}


