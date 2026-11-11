
/* ==== FUN_0045ba20 @ 0045ba20 ==== 
 * signature: undefined __thiscall FUN_0045ba20(void * this, undefined4 * param_1)
 * body: 0045ba20-0045ba6a
 */

void __thiscall FUN_0045ba20(void *this,undefined4 *param_1)

{
  void *this_00;
  undefined4 local_c;
  undefined4 local_8;
  
  this_00 = *(void **)this;
  local_c = 1;
  local_8 = 0;
  if ((this_00 != (void *)0x0) && (0 < *(int *)((int)this_00 + 0x26))) {
    FUN_00430370(this_00,1,&local_c);
  }
  *param_1 = local_c;
  param_1[1] = local_8;
  return;
}


