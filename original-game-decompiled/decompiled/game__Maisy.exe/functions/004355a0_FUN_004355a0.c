
/* ==== FUN_004355a0 @ 004355a0 ==== 
 * signature: uint __thiscall FUN_004355a0(void * this, void * param_1, short param_2, void * param_3)
 * body: 004355a0-004355cd
 */

uint __thiscall FUN_004355a0(void *this,void *param_1,short param_2,void *param_3)

{
  undefined4 uVar1;
  
  if (param_1 == (void *)0x0) {
    param_1 = *(void **)((int)this + 0x724c);
  }
  uVar1 = FUN_00430370(param_1,(int)param_2,param_3);
  return -(uint)((char)uVar1 == '\0') & 0x10000;
}


