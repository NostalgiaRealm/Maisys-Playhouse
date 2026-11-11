
/* ==== FUN_004bb94e @ 004bb94e ==== 
 * signature: DWORD * __thiscall FUN_004bb94e(void * this, int param_1)
 * body: 004bb94e-004bb99f
 */

DWORD * __thiscall FUN_004bb94e(void *this,int param_1)

{
  DWORD DVar1;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x1c) = 4;
  *(undefined4 *)((int)this + 0xc) = 1;
  if (param_1 == 0) {
    *(undefined4 *)this = 0xffffffff;
  }
  else {
    DVar1 = TlsAlloc();
    *(DWORD *)this = DVar1;
    if (DVar1 == 0xffffffff) {
      FUN_004a3538();
    }
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  return this;
}


