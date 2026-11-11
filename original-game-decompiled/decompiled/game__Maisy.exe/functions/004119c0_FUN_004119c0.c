
/* ==== FUN_004119c0 @ 004119c0 ==== 
 * signature: int __thiscall FUN_004119c0(void * this, int param_1, int param_2)
 * body: 004119c0-004119eb
 */

int __thiscall FUN_004119c0(void *this,int param_1,int param_2)

{
  if ((0 < param_1) && (param_2 != 0)) {
    return *(int *)((int)this + 0xc) * (param_1 + -1) + *(int *)((int)this + 8) + param_2;
  }
  return 0;
}


