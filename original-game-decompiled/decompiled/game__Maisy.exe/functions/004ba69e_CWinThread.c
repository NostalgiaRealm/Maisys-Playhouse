
/* ==== CWinThread::CWinThread @ 004ba69e ==== 
 * signature: undefined __thiscall CWinThread(CWinThread * this)
 * body: 004ba69e-004ba6e5
 * note: Library Function - Single Match  public: __thiscall CWinThread::CWinThread(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CWinThread::CWinThread(void)
   
   Library: Visual Studio 1998 Release */

CCmdTarget * __thiscall CWinThread::CWinThread(CWinThread *this)

{
  CCmdTarget *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CCmdTarget **)(unaff_EBP + -0x10) = this_00;
  CCmdTarget::CCmdTarget(this_00);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined ***)this_00 = &PTR_FUN_004cb0f4;
  *(undefined4 *)(this_00 + 0x4c) = 0;
  *(undefined4 *)(this_00 + 0x50) = 0;
  FUN_004ba6f8((int)this_00);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this_00;
}


