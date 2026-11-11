
/* ==== FUN_004076c0 @ 004076c0 ==== 
 * signature: uint __thiscall FUN_004076c0(void * this, short param_1, void * param_2)
 * body: 004076c0-004076e1
 */

uint __thiscall FUN_004076c0(void *this,short param_1,void *param_2)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(void **)((int)this + 0x52) != (void *)0x0) {
    uVar1 = FUN_00430370(*(void **)((int)this + 0x52),(int)param_1,param_2);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}


