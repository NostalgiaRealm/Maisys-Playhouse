
/* ==== FUN_00491e5c @ 00491e5c ==== 
 * signature: undefined __stdcall FUN_00491e5c(void)
 * body: 00491e5c-00491e86
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_00491e5c(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  *(undefined4 *)(iVar1 + -8) = 0x491e68;
  __exit(*(int *)(iVar1 + -4));
}


