
/* ==== FUN_004bb012 @ 004bb012 ==== 
 * signature: bool __thiscall FUN_004bb012(void * this, int param_1)
 * body: 004bb012-004bb0c2
 */

bool __thiscall FUN_004bb012(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = true;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    FUN_004b4395((int)this);
    bVar3 = *(int *)((int)this + 0x1c) != 0;
    *(undefined4 *)((int)this + 0x6c) = 1;
  }
  else if (iVar2 == 1) {
    iVar2 = (**(code **)(*(int *)this + 0x80))(*(undefined4 *)(param_1 + 0x14));
    bVar3 = iVar2 != 0;
    *(undefined4 *)((int)this + 0x6c) = 1;
  }
  else if (1 < iVar2) {
    if (iVar2 < 4) {
      bVar3 = false;
      *(undefined4 *)((int)this + 0x6c) = 0;
      (**(code **)(*(int *)this + 0x80))(*(undefined4 *)(param_1 + 0x14));
      *(int *)((int)this + 0xa4) = param_1;
      SendMessageA(*(HWND *)(*(int *)((int)this + 0x1c) + 0x1c),0x111,0xe108,0);
      *(int *)((int)this + 0xa4) = 0;
    }
    else if (iVar2 == 4) {
      uVar1 = *(undefined4 *)((int)this + 0x6c);
      *(undefined4 *)((int)this + 0x6c) = 0;
      *(undefined4 *)((int)this + 0xa4) = uVar1;
    }
  }
  return bVar3;
}


