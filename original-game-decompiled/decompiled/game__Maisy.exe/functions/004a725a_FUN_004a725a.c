
/* ==== FUN_004a725a @ 004a725a ==== 
 * signature: undefined4 __thiscall FUN_004a725a(void * this, uint param_1, uint param_2, void * param_3)
 * body: 004a725a-004a7356
 */

undefined4 __thiscall FUN_004a725a(void *this,uint param_1,uint param_2,void *param_3)

{
  undefined4 *puVar1;
  HANDLE hThread;
  _AFX_THREAD_STATE *local_20;
  void *local_1c;
  uint local_18;
  HANDLE local_10;
  HANDLE local_c;
  int local_8;
  
  _memset(&local_20,0,0x1c);
  local_20 = AfxGetThreadState();
  local_1c = this;
  local_10 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  local_c = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  local_18 = param_1;
  if ((local_10 == (HANDLE)0x0) || (local_c == (HANDLE)0x0)) {
    if (local_10 != (HANDLE)0x0) {
      CloseHandle(local_10);
    }
    if (local_c == (HANDLE)0x0) {
      return 0;
    }
  }
  else {
    puVar1 = (undefined4 *)((int)this + 0x28);
    hThread = (HANDLE)__beginthreadex(param_3,param_2,FUN_004a6f0e,&local_20,param_1 | 4,
                                      (uint *)((int)this + 0x2c));
    *puVar1 = hThread;
    if (hThread == (HANDLE)0x0) {
      return 0;
    }
    ResumeThread(hThread);
    WaitForSingleObject(local_10,0xffffffff);
    CloseHandle(local_10);
    if ((param_1 & 4) != 0) {
      SuspendThread((HANDLE)*puVar1);
    }
    if (local_8 == 0) {
      SetEvent(local_c);
      return 1;
    }
    WaitForSingleObject((HANDLE)*puVar1,0xffffffff);
    CloseHandle((HANDLE)*puVar1);
    *puVar1 = 0;
  }
  CloseHandle(local_c);
  return 0;
}


