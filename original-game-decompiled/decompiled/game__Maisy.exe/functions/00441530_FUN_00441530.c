
/* ==== FUN_00441530 @ 00441530 ==== 
 * signature: undefined __thiscall FUN_00441530(void * this, int param_1)
 * body: 00441530-00441573
 */

void __thiscall FUN_00441530(void *this,int param_1)

{
  char cVar1;
  void *this_00;
  
  cVar1 = FUN_00440230(this,1);
  if (cVar1 != '\0') {
    cVar1 = param_1 == 0;
    if ((bool)cVar1) {
      FUN_0043fe90(this);
    }
    else {
      FUN_0043ff10(this);
    }
    this_00 = (void *)(**(code **)(*(int *)this + 0x210))();
    FUN_0044f650(this_00,cVar1);
  }
  return;
}


