
/* ==== CWinThread::CWinThread @ 004ba61c ==== 
 * signature: undefined __thiscall CWinThread(CWinThread * this, _func_uint_void_ptr * param_1, void * param_2)
 * body: 004ba61c-004ba66d
 * note: Library Function - Single Match  public: __thiscall CWinThread::CWinThread(unsigned int (__cdecl*)(void *),void *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CWinThread::CWinThread(unsigned int (__cdecl*)(void *),void *)
   
   Library: Visual Studio 1998 Release */

CCmdTarget * __thiscall
CWinThread::CWinThread(CWinThread *this,_func_uint_void_ptr *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CCmdTarget *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CCmdTarget **)(unaff_EBP + -0x10) = this_00;
  CCmdTarget::CCmdTarget(this_00);
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined ***)this_00 = &PTR_FUN_004cb0f4;
  *(undefined4 *)(this_00 + 0x50) = uVar1;
  *(undefined4 *)(this_00 + 0x4c) = uVar2;
  FUN_004ba6f8((int)this_00);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this_00;
}


