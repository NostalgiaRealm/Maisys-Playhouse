
/* ==== FUN_004bbe8e @ 004bbe8e ==== 
 * signature: int __thiscall FUN_004bbe8e(void * this, undefined * param_1)
 * body: 004bbe8e-004bbf0e
 */

/* WARNING: Removing unreachable block (ram,0x004bbeb7) */

int __thiscall FUN_004bbe8e(void *this,undefined *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  
  if (*(int *)this == 0) {
    if (DAT_004e5100 == (DWORD *)0x0) {
      DAT_004e5100 = FUN_004bb94e(&DAT_004e5108,1);
    }
    iVar1 = FUN_004bb9dd((int)DAT_004e5100);
    *(int *)this = iVar1;
  }
  iVar1 = *(int *)this;
  pvVar2 = TlsGetValue(*DAT_004e5100);
  if ((pvVar2 == (LPVOID)0x0) || (*(int *)((int)pvVar2 + 8) <= iVar1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)((int)pvVar2 + 0xc) + iVar1 * 4);
  }
  if (iVar1 == 0) {
    iVar1 = (*(code *)param_1)();
    FUN_004bbb86();
  }
  return iVar1;
}


