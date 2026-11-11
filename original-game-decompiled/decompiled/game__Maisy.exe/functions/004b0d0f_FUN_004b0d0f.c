
/* ==== FUN_004b0d0f @ 004b0d0f ==== 
 * signature: BOOL __fastcall FUN_004b0d0f(int * param_1)
 * body: 004b0d0f-004b0d26
 */

BOOL __fastcall FUN_004b0d0f(int *param_1)

{
  BOOL BVar1;
  HDC hdc;
  
  BVar1 = 0;
  if (param_1[1] != 0) {
    hdc = (HDC)FUN_004b0cd7(param_1);
    BVar1 = DeleteDC(hdc);
  }
  return BVar1;
}


