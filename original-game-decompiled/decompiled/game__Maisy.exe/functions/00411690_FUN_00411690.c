
/* ==== FUN_00411690 @ 00411690 ==== 
 * signature: undefined __thiscall FUN_00411690(void * this, int param_1, int param_2, undefined4 param_3)
 * body: 00411690-004116b5
 */

void __thiscall FUN_00411690(void *this,int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(int *)((int)this + 8) = param_2 - param_1;
  *(undefined4 *)((int)this + 0xc) = param_3;
  return;
}


