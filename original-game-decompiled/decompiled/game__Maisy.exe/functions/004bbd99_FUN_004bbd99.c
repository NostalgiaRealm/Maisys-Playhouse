
/* ==== FUN_004bbd99 @ 004bbd99 ==== 
 * signature: undefined __thiscall FUN_004bbd99(void * this, int param_1)
 * body: 004bbd99-004bbe8d
 */

void __thiscall FUN_004bbd99(void *this,int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_10;
  int local_c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  if (*(DWORD *)this == 0xffffffff) {
    puVar2 = *(undefined4 **)((int)this + 4);
  }
  else {
    puVar2 = TlsGetValue(*(DWORD *)this);
  }
  if (puVar2 != (undefined4 *)0x0) {
    bVar1 = true;
    local_c = 1;
    if (1 < (int)puVar2[2]) {
      local_10 = 8;
      iVar3 = 4;
      do {
        if ((param_1 == 0) || (*(int *)(*(int *)((int)this + 0x14) + 4 + local_10) == param_1)) {
          if (*(undefined4 **)(puVar2[3] + iVar3) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(puVar2[3] + iVar3))(1);
          }
          *(undefined4 *)(puVar2[3] + iVar3) = 0;
        }
        else if (*(int *)(puVar2[3] + iVar3) != 0) {
          bVar1 = false;
        }
        iVar3 = iVar3 + 4;
        local_c = local_c + 1;
        local_10 = local_10 + 8;
      } while (local_c < (int)puVar2[2]);
    }
    if (bVar1) {
      FUN_004bb8d1((void *)((int)this + 0x18),(int)puVar2);
      LocalFree((HLOCAL)puVar2[3]);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      if (*(DWORD *)this == 0xffffffff) {
        *(undefined4 *)((int)this + 4) = 0;
      }
      else {
        TlsSetValue(*(DWORD *)this,(LPVOID)0x0);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  return;
}


