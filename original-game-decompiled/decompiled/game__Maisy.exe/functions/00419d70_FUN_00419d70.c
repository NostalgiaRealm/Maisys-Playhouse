
/* ==== FUN_00419d70 @ 00419d70 ==== 
 * signature: int __thiscall FUN_00419d70(void * this, int param_1)
 * body: 00419d70-00419df6
 */

int __thiscall FUN_00419d70(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  bool bVar4;
  
  if ((param_1 < 0) || (iVar1 = FUN_00419d60((int)this), iVar1 <= param_1)) {
    bVar4 = param_1 < 0;
    if (bVar4) {
      param_1 = -param_1;
    }
    iVar2 = FUN_00419d60((int)this);
    if (iVar2 == 0) {
      param_1 = 0;
      iVar1 = 0;
    }
    else {
      iVar1 = param_1 / iVar2;
      param_1 = param_1 % iVar2;
    }
    if ((bVar4) && (param_1 != 0)) {
      iVar1 = FUN_00419d60((int)this);
      iVar1 = iVar1 - param_1;
      param_1 = iVar1;
    }
  }
  if (*(int *)((int)this + 0x156) != param_1) {
    *(int *)((int)this + 0x156) = param_1;
    DVar3 = timeGetTime();
    *(DWORD *)((int)this + 0x166) = DVar3;
    *(undefined4 *)((int)this + 0x16a) = 0;
    iVar1 = FUN_00419670(this,*(undefined4 *)((int)this + 0x156));
  }
  return iVar1;
}


