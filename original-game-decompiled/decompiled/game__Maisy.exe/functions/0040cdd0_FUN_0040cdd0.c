
/* ==== FUN_0040cdd0 @ 0040cdd0 ==== 
 * signature: undefined __thiscall FUN_0040cdd0(void * this, void * param_1)
 * body: 0040cdd0-0040ce14
 */

void __thiscall FUN_0040cdd0(void *this,void *param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00486d60(param_1,&local_c,4);
  (**(code **)(*(int *)this + 0x124))(local_c,1);
  FUN_00486d60(param_1,&local_8,4);
  *(undefined4 *)((int)this + 0xc) = local_8;
  return;
}


