
/* ==== FUN_00441460 @ 00441460 ==== 
 * signature: undefined __thiscall FUN_00441460(void * this, undefined4 param_1)
 * body: 00441460-004414bf
 */

void __thiscall FUN_00441460(void *this,undefined4 param_1)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_004414c0(this,(int)&local_24);
  local_24 = param_1;
  local_20 = 0;
  FUN_00440140((int)this);
  *(undefined4 *)((int)this + 0xb6) = param_1;
  local_14 = param_1;
  local_10 = 0;
  local_c = 0;
  local_8 = 0x20;
  FUN_00440490(this,1,&local_14);
  return;
}


