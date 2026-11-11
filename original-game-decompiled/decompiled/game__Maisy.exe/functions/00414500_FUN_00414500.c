
/* ==== FUN_00414500 @ 00414500 ==== 
 * signature: undefined __thiscall FUN_00414500(void * this, int param_1)
 * body: 00414500-0041451f
 */

void __thiscall FUN_00414500(void *this,int param_1)

{
  *(int *)(param_1 + 4) = (int)this + 0x12;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0x1a);
  *(int *)(*(int *)((int)this + 0x1a) + 4) = param_1;
  *(int *)((int)this + 0x1a) = param_1;
  return;
}


