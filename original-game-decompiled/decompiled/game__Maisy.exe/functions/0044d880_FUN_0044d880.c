
/* ==== FUN_0044d880 @ 0044d880 ==== 
 * signature: undefined __thiscall FUN_0044d880(void * this, void * param_1)
 * body: 0044d880-0044d935
 */

void __thiscall FUN_0044d880(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  void *local_20 [7];
  
  iVar1 = *(int *)((int)param_1 + 0xc);
  if ((0 < iVar1) && (iVar2 = FUN_0044e340((int)this), iVar1 <= iVar2)) {
    FUN_00430370(*(void **)((int)this + 0x30),iVar1,local_20);
    iVar2 = (**(code **)(**(int **)((int)this + 4) + 0xf8))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(**(int **)((int)this + 4) + 0xf8))();
      if (*(short *)(iVar2 + 0x22) == 0x43) {
        *(undefined4 *)((int)param_1 + 0x66) = 0xfffffffe;
      }
      else {
        iVar2 = (**(code **)(**(int **)((int)this + 4) + 0xf8))();
        *(undefined4 *)((int)param_1 + 0x66) = *(undefined4 *)(iVar2 + 0xc);
      }
    }
    if (local_20[0] == (void *)0x0) {
      local_20[0] = param_1;
      FUN_0042ff10(*(void **)((int)this + 0x30),iVar1,local_20);
      return;
    }
    iVar1 = *(int *)((int)local_20[0] + 0x26);
    while (iVar1 != 0) {
      local_20[0] = *(void **)((int)local_20[0] + 0x26);
      iVar1 = *(int *)((int)local_20[0] + 0x26);
    }
    FUN_0040d490(local_20[0],param_1);
  }
  return;
}


