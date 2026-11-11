
/* ==== FUN_00419250 @ 00419250 ==== 
 * signature: undefined __thiscall FUN_00419250(void * this, short param_1)
 * body: 00419250-004192a0
 */

void __thiscall FUN_00419250(void *this,short param_1)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  
  iVar1 = *(int *)((int)this + 0x94);
  FUN_0044f7e0(this,param_1);
  iVar2 = *(int *)((int)this + 0x94);
  if ((iVar2 != iVar1) && (iVar2 != 0)) {
    DVar3 = timeGetTime();
    *(DWORD *)((int)this + 0x98) = DVar3 + (int)(100000000 / (longlong)iVar2);
  }
  DVar3 = timeGetTime();
  *(DWORD *)((int)this + 0x166) = DVar3;
  return;
}


