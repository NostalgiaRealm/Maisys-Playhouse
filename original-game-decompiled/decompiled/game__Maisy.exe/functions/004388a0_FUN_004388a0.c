
/* ==== FUN_004388a0 @ 004388a0 ==== 
 * signature: undefined __thiscall FUN_004388a0(void * this, int param_1)
 * body: 004388a0-004388c1
 */

void __thiscall FUN_004388a0(void *this,int param_1)

{
  FUN_004226d0(this,param_1);
  *(uint *)((int)this + 0x1e) = *(uint *)((int)this + 0x1e) | 0x100000;
  *(undefined2 *)((int)this + 0x22) = 0x40;
  return;
}


