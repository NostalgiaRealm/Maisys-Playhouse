
/* ==== FUN_00472f20 @ 00472f20 ==== 
 * signature: undefined __thiscall FUN_00472f20(void * this, int param_1)
 * body: 00472f20-00472fc3
 */

void __thiscall FUN_00472f20(void *this,int param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(int *)(DAT_004d99a8 + 0xd0) == 0) {
    iVar2 = GetSystemMetrics(0x20);
    *(short *)((int)this + 0xc0) = (short)iVar2;
    *(undefined4 *)(param_1 + 0x24) = 3000;
    *(undefined4 *)(param_1 + 0xc) = 3000;
    *(undefined4 *)(param_1 + 0x20) = 3000;
    *(undefined4 *)(param_1 + 8) = 3000;
  }
  else {
    iVar2 = GetSystemMetrics(0);
    *(short *)((int)this + 0xc0) = (short)((*(int *)(param_1 + 0x20) - iVar2) / 2);
    sVar1 = FUN_00472fd0();
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (int)sVar1;
    iVar2 = GetSystemMetrics(1);
    if (iVar2 <= *(short *)((int)this + 0xc2)) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x24);
      sVar1 = FUN_00472fd0();
      *(int *)(param_1 + 0x14) = -((int)sVar1 + (int)*(short *)((int)this + 0xc0));
      return;
    }
  }
  return;
}


