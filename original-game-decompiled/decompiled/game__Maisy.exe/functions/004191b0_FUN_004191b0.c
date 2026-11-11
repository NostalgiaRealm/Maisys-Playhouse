
/* ==== FUN_004191b0 @ 004191b0 ==== 
 * signature: undefined __thiscall FUN_004191b0(void * this, char param_1)
 * body: 004191b0-0041920b
 */

void __thiscall FUN_004191b0(void *this,char param_1)

{
  int iVar1;
  DWORD DVar2;
  
  if ((param_1 == '\0') && ((*(byte *)((int)this + 0x29) & 1) != 0)) {
    iVar1 = *(int *)((int)this + 0x94);
    if (iVar1 != 0) {
      DVar2 = timeGetTime();
      *(DWORD *)((int)this + 0x98) = DVar2 + (int)(100000000 / (longlong)iVar1);
    }
    DVar2 = timeGetTime();
    *(undefined4 *)((int)this + 0x16a) = 0;
    *(DWORD *)((int)this + 0x166) = DVar2;
  }
  FUN_0044f650(this,param_1);
  return;
}


