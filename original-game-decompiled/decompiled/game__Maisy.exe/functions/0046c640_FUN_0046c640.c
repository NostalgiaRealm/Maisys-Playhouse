
/* ==== FUN_0046c640 @ 0046c640 ==== 
 * signature: undefined __thiscall FUN_0046c640(void * this, char param_1)
 * body: 0046c640-0046c6c4
 */

void __thiscall FUN_0046c640(void *this,char param_1)

{
  bool bVar1;
  
  bVar1 = (*(uint *)((int)this + 0x26) & 0x1000000) != 0;
  FUN_0040ccb0(this,param_1);
  if (param_1 == '\0') {
    if ((bVar1) && ((*(short *)((int)this + 0x46) == 3 || (*(short *)((int)this + 0x46) == 2)))) {
      (**(code **)(*(int *)this + 0x240))(0x322,0,0);
      return;
    }
  }
  else if ((!bVar1) && ((*(short *)((int)this + 0x46) == 3 || (*(short *)((int)this + 0x46) == 2))))
  {
    (**(code **)(*(int *)this + 0x240))(0x321,0,0);
  }
  return;
}


