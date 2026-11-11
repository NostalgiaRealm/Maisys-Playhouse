
/* ==== FUN_00491993 @ 00491993 ==== 
 * signature: undefined __stdcall FUN_00491993(void)
 * body: 00491993-004919b8
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_00491993(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  *(undefined4 *)(iVar1 + -8) = 0x49199f;
  __exit(*(int *)(iVar1 + -4));
}


