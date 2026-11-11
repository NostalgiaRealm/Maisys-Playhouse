
/* ==== FUN_004bbb38 @ 004bbb38 ==== 
 * signature: undefined4 __thiscall FUN_004bbb38(void * this, int param_1)
 * body: 004bbb38-004bbb85
 */

undefined4 __thiscall FUN_004bbb38(void *this,int param_1)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  
  if (*(DWORD *)this == 0xffffffff) {
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
    pvVar1 = *(LPVOID *)((int)this + 4);
  }
  else {
    pvVar1 = TlsGetValue(*(DWORD *)this);
  }
  if ((pvVar1 == (LPVOID)0x0) || (*(int *)((int)pvVar1 + 8) <= param_1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)((int)pvVar1 + 0xc) + param_1 * 4);
  }
  if (*(int *)this == -1) {
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  }
  return uVar2;
}


