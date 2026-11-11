
/* ==== FUN_00411990 @ 00411990 ==== 
 * signature: int __thiscall FUN_00411990(void * this, int param_1, int param_2)
 * body: 00411990-004119b7
 */

int __thiscall FUN_00411990(void *this,int param_1,int param_2)

{
  if ((0 < param_1) && (param_2 != 0)) {
    return *(int *)((int)this + 0xc) * (param_1 + -1) + param_2;
  }
  return 0;
}


