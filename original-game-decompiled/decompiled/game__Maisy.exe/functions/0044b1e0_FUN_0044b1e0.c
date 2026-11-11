
/* ==== FUN_0044b1e0 @ 0044b1e0 ==== 
 * signature: undefined __thiscall FUN_0044b1e0(void * this, char param_1)
 * body: 0044b1e0-0044b220
 */

void __thiscall FUN_0044b1e0(void *this,char param_1)

{
  if ((char)('\x01' - ((*(uint *)((int)this + 0x26) & 0x40000000) == 0)) != param_1) {
    (**(code **)(**(int **)((int)this + 0x3e) + 0x40c))();
    FUN_0040cc90(this,param_1);
    (**(code **)(**(int **)((int)this + 0x3e) + 0x40c))();
  }
  return;
}


