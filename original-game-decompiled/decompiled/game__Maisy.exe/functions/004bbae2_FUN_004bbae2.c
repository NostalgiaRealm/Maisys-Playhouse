
/* ==== FUN_004bbae2 @ 004bbae2 ==== 
 * signature: undefined __thiscall FUN_004bbae2(void * this, int param_1)
 * body: 004bbae2-004bbb37
 */

void __thiscall FUN_004bbae2(void *this,int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  for (iVar2 = *(int *)((int)this + 0x18); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    if (param_1 < *(int *)(iVar2 + 8)) {
      puVar3 = *(undefined4 **)(*(int *)(iVar2 + 0xc) + param_1 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      *(undefined4 *)(*(int *)(iVar2 + 0xc) + param_1 * 4) = 0;
    }
  }
  pbVar1 = (byte *)(*(int *)((int)this + 0x14) + param_1 * 8);
  *pbVar1 = *pbVar1 & 0xfe;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  return;
}


