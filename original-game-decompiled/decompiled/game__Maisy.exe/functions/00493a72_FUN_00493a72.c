
/* ==== FUN_00493a72 @ 00493a72 ==== 
 * signature: undefined __stdcall FUN_00493a72(void)
 * body: 00493a72-00493a90
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_00493a72(void)

{
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + -4) = 0x493a7a;
  terminate();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x10);
  return;
}


