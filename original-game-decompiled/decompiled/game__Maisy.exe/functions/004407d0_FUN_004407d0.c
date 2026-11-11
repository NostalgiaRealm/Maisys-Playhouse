
/* ==== FUN_004407d0 @ 004407d0 ==== 
 * signature: undefined __thiscall FUN_004407d0(void * this, char param_1)
 * body: 004407d0-0044083b
 */

void __thiscall FUN_004407d0(void *this,char param_1)

{
  int *piVar1;
  
  if (*(int *)((int)this + 0x7e) != 0) {
    FUN_0043fe70(this);
    if (param_1 == '\0') {
      piVar1 = (int *)(**(code **)(*(int *)this + 0x210))();
      (**(code **)(*piVar1 + 0x358))(0,1);
    }
    else {
      piVar1 = (int *)FUN_0041ed90((int)this);
      (**(code **)(*piVar1 + 0x78))(0xb,this,0);
      piVar1 = (int *)FUN_0041ed90((int)this);
      (**(code **)(*piVar1 + 0x78))(0xc,this,0);
    }
  }
  FUN_0042b5f0((int)this);
  return;
}


