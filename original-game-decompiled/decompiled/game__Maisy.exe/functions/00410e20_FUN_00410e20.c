
/* ==== FUN_00410e20 @ 00410e20 ==== 
 * signature: undefined __thiscall FUN_00410e20(void * this, short param_1)
 * body: 00410e20-00410e60
 */

void __thiscall FUN_00410e20(void *this,short param_1)

{
  short sVar1;
  
  sVar1 = *(short *)((int)this + 0x28);
  if (param_1 != sVar1) {
    if (param_1 == 0x29) {
      param_1 = *(short *)((int)this + 0x26);
    }
    else if ((param_1 == 0x2a) && (param_1 = sVar1, sVar1 == 0)) {
      param_1 = 0x2b;
    }
    *(short *)((int)this + 0x28) = param_1;
    if (param_1 != 0) {
      FUN_00410ca0(this,param_1);
    }
  }
  return;
}


