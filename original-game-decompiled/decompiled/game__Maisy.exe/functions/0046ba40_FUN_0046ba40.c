
/* ==== FUN_0046ba40 @ 0046ba40 ==== 
 * signature: undefined1 __thiscall FUN_0046ba40(void * this, undefined1 param_1, undefined4 param_2)
 * body: 0046ba40-0046bacf
 */

undefined1 __thiscall FUN_0046ba40(void *this,undefined1 param_1,undefined4 param_2)

{
  short sVar1;
  void *this_00;
  undefined1 local_5;
  
  if ((*(byte *)((int)this + 0x38) & 1) != 0) {
    if ((char)param_2 == '\0') {
      return 0;
    }
    (**(code **)(*(int *)this + 0x100))(0);
  }
  sVar1 = *(short *)((int)this + 0x46);
  if ((((sVar1 == 4) || (sVar1 == 7)) || (sVar1 == 0)) ||
     ((sVar1 == 1 || ((*(byte *)((int)this + 0x29) & 1) != 0)))) {
    local_5 = 0;
  }
  else {
    local_5 = 1;
  }
  (**(code **)(*(int *)this + 0x2f0))(param_1,0);
  for (this_00 = (void *)FUN_00469fb0(this); this_00 != (void *)0x0;
      this_00 = *(void **)((int)this_00 + 0x6a)) {
    FUN_0046ba40(this_00,param_1,param_2);
  }
  return local_5;
}


