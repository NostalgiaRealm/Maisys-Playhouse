
/* ==== FUN_004bbd4e @ 004bbd4e ==== 
 * signature: undefined __thiscall FUN_004bbd4e(void * this, undefined4 param_1)
 * body: 004bbd4e-004bbd98
 */

void __thiscall FUN_004bbd4e(void *this,undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  iVar2 = 1;
  if (1 < *(int *)((int)this + 0x10)) {
    iVar3 = 8;
    do {
      pbVar1 = (byte *)(*(int *)((int)this + 0x14) + iVar3);
      if ((*(int *)(pbVar1 + 4) == 0) && ((*pbVar1 & 1) != 0)) {
        *(undefined4 *)(pbVar1 + 4) = param_1;
      }
      iVar3 = iVar3 + 8;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x10));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  return;
}


