
/* ==== FUN_00479300 @ 00479300 ==== 
 * signature: undefined2 __thiscall FUN_00479300(void * this, short param_1)
 * body: 00479300-00479328
 */

undefined2 __thiscall FUN_00479300(void *this,short param_1)

{
  undefined2 uVar1;
  undefined2 local_20 [14];
  
  uVar1 = 0;
  if ((int)param_1 <= *(int *)((int)*(void **)((int)this + 0x54) + 0x26)) {
    FUN_00430370(*(void **)((int)this + 0x54),(int)param_1,local_20);
    uVar1 = local_20[0];
  }
  return uVar1;
}


