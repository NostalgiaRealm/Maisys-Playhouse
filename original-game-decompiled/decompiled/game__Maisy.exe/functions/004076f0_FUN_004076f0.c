
/* ==== FUN_004076f0 @ 004076f0 ==== 
 * signature: uint __thiscall FUN_004076f0(void * this, short param_1, void * param_2)
 * body: 004076f0-00407711
 */

uint __thiscall FUN_004076f0(void *this,short param_1,void *param_2)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(void **)((int)this + 0x56) != (void *)0x0) {
    uVar1 = FUN_00430370(*(void **)((int)this + 0x56),(int)param_1,param_2);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}


