
/* ==== FUN_0042d000 @ 0042d000 ==== 
 * signature: undefined __thiscall FUN_0042d000(void * this, int param_1)
 * body: 0042d000-0042d051
 */

void __thiscall FUN_0042d000(void *this,int param_1)

{
  int local_10 [3];
  
  if (((param_1 != 0) && ((*(byte *)(param_1 + 0x1e) & 0x10) != 0)) &&
     (*(int *)((int)this + 0x4c) != 0)) {
    local_10[0] = param_1;
    FUN_0041f4c0(DAT_004da380,0,*(short *)((int)this + 0x46),*(int *)((int)this + 0x4c),4,local_10,
                 0xc);
    if (*(int **)((int)this + 0x3a) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x3a) + 0x2c8))();
    }
  }
  return;
}


