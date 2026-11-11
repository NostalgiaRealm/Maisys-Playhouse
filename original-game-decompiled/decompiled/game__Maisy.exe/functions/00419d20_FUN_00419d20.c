
/* ==== FUN_00419d20 @ 00419d20 ==== 
 * signature: undefined __thiscall FUN_00419d20(void * this, int * param_1)
 * body: 00419d20-00419d54
 */

void __thiscall FUN_00419d20(void *this,int *param_1)

{
  FUN_004630b0(this,param_1);
  if (*(short *)((int)param_1 + 0x22) == 0x19) {
    *(undefined4 *)((int)this + 0x15e) = *(undefined4 *)((int)param_1 + 0x15e);
    *(undefined4 *)((int)this + 0x14a) = *(undefined4 *)((int)param_1 + 0x14a);
  }
  return;
}


