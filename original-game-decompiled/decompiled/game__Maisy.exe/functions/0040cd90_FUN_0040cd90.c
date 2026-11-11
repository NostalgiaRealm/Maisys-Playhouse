
/* ==== FUN_0040cd90 @ 0040cd90 ==== 
 * signature: undefined __thiscall FUN_0040cd90(void * this, void * param_1)
 * body: 0040cd90-0040cdcd
 */

void __thiscall FUN_0040cd90(void *this,void *param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = (**(code **)(*(int *)this + 0x128))();
  local_8 = *(undefined4 *)((int)this + 0xc);
  FUN_00486d80(param_1,(char *)&local_c,4);
  FUN_00486d80(param_1,(char *)&local_8,4);
  return;
}


