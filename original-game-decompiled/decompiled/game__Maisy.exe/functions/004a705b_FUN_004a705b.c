
/* ==== FUN_004a705b @ 004a705b ==== 
 * signature: int * __stdcall FUN_004a705b(void)
 * body: 004a705b-004a70ef
 */

int * FUN_004a705b(void)

{
  CWinThread *this;
  int iVar1;
  int unaff_EBP;
  int *this_00;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  this = (CWinThread *)FUN_004a5fed(0x60);
  *(CWinThread **)(unaff_EBP + -0x10) = this;
  this_00 = (int *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this != (CWinThread *)0x0) {
    this_00 = (int *)CWinThread::CWinThread
                               (this,*(_func_uint_void_ptr **)(unaff_EBP + 8),
                                *(void **)(unaff_EBP + 0xc));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_004a725a(this_00,*(uint *)(unaff_EBP + 0x18) | 4,*(uint *)(unaff_EBP + 0x14),
                       *(void **)(unaff_EBP + 0x1c));
  if (iVar1 == 0) {
    (**(code **)(*this_00 + 0x7c))();
    this_00 = (int *)0x0;
  }
  else {
    SetThreadPriority((HANDLE)this_00[10],*(int *)(unaff_EBP + 0x10));
    if ((*(byte *)(unaff_EBP + 0x18) & 4) == 0) {
      ResumeThread((HANDLE)this_00[10]);
    }
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this_00;
}


