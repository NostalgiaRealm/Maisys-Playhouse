
/* ==== FUN_0042c130 @ 0042c130 ==== 
 * signature: undefined __thiscall FUN_0042c130(void * this, int param_1, int param_2)
 * body: 0042c130-0042c1af
 */

void __thiscall FUN_0042c130(void *this,int param_1,int param_2)

{
  short sVar1;
  int local_8;
  
  FUN_00412390(this,param_1);
  *(uint *)((int)this + 0x1e) = *(uint *)((int)this + 0x1e) | 0x10;
  DAT_004dc594 = DAT_004dc594 + 1;
  *(int *)((int)this + 0x48) = param_2;
  if (param_2 == -1) {
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  else {
    local_8 = 0;
    sVar1 = FUN_0041f380(DAT_004da380,param_2);
    *(short *)((int)this + 0x46) = sVar1;
    FUN_0041f270(DAT_004da380,0,*(int *)((int)this + 0x48),&local_8);
    *(int *)((int)this + 0x4c) = local_8;
    if (local_8 != 0) {
      *(void **)(local_8 + 8) = this;
      *(undefined4 *)(*(int *)((int)this + 0x4c) + 4) = 0;
      return;
    }
  }
  return;
}


