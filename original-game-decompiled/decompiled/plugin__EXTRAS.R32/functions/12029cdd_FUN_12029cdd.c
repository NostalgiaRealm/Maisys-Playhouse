
/* ==== FUN_12029cdd @ 12029cdd ==== 
 * signature: undefined __stdcall FUN_12029cdd(void)
 * body: 12029cdd-12029d2d
 */

void FUN_12029cdd(void)

{
  int *piVar1;
  _ptiddata p_Var2;
  int iVar3;
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x2c);
  p_Var2 = __getptd();
  p_Var2->ptlocinfo = *(pthreadlocinfo *)(unaff_EBP + -0x28);
  p_Var2 = __getptd();
  p_Var2->_ownlocale = *(int *)(unaff_EBP + -0x24);
  piVar1 = *(int **)(unaff_EBP + 8);
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) &&
     (*(int *)(unaff_EBP + -0x1c) != 0)) {
    iVar3 = __abnormal_termination();
    DestructExceptionObject(*(EHExceptionRecord **)(unaff_EBP + 8),(uchar)iVar3);
  }
  return;
}


