
/* ==== FUN_00419850 @ 00419850 ==== 
 * signature: undefined __thiscall FUN_00419850(void * this, int param_1, int param_2)
 * body: 00419850-0041991b
 */

void __thiscall FUN_00419850(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  
  iVar1 = FUN_00419d60((int)this);
  *(int *)((int)this + 0x14e) = param_1;
  *(int *)((int)this + 0x152) = param_2;
  if (param_2 < param_1) {
    *(int *)((int)this + 0x14e) = param_2;
    *(int *)((int)this + 0x152) = param_1;
    *(byte *)((int)this + 0x15c) = *(byte *)((int)this + 0x15c) & 0xfe;
  }
  else {
    *(byte *)((int)this + 0x15c) = *(byte *)((int)this + 0x15c) | 1;
  }
  if (*(int *)((int)this + 0x14e) <= *(int *)((int)this + 0x152)) {
    if (*(int *)((int)this + 0x14e) < 0) {
      *(undefined4 *)((int)this + 0x14e) = 0;
    }
    if (*(int *)((int)this + 0x152) < 0) {
      *(undefined4 *)((int)this + 0x152) = 0;
    }
    iVar1 = (int)(short)((short)iVar1 + -1);
    if (iVar1 < *(int *)((int)this + 0x152)) {
      *(int *)((int)this + 0x152) = iVar1;
    }
  }
  if ((*(byte *)((int)this + 0x15c) & 1) == 0) {
    uVar2 = *(undefined4 *)((int)this + 0x152);
  }
  else {
    uVar2 = *(undefined4 *)((int)this + 0x14e);
  }
  *(undefined4 *)((int)this + 0x156) = uVar2;
  DVar3 = timeGetTime();
  *(DWORD *)((int)this + 0x166) = DVar3;
  *(undefined4 *)((int)this + 0x16a) = 0;
  *(undefined4 *)((int)this + 0x8e) = 0x20;
  FUN_00419670(this,*(undefined4 *)((int)this + 0x156));
  return;
}


