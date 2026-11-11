
/* ==== FUN_0048a260 @ 0048a260 ==== 
 * signature: undefined __stdcall FUN_0048a260(void)
 * body: 0048a260-0048a286
 */

void FUN_0048a260(void)

{
  int *piVar1;
  
  piVar1 = DAT_004dcfa4;
  if (DAT_004dcfa4 != (int *)0x0) {
    FUN_00489dc0(DAT_004dcfa4);
    FUN_004a602d(piVar1);
  }
  DAT_004dcfa4 = (int *)0x0;
  return;
}


