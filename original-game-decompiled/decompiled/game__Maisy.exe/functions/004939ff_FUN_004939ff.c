
/* ==== FUN_004939ff @ 004939ff ==== 
 * signature: undefined __stdcall FUN_004939ff(void)
 * body: 004939ff-00493a1d
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_004939ff(void)

{
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + -4) = 0x493a07;
  terminate();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x10);
  return;
}


