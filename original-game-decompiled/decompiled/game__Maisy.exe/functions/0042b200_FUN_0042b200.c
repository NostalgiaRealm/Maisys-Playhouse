
/* ==== FUN_0042b200 @ 0042b200 ==== 
 * signature: undefined __thiscall FUN_0042b200(void * this, short * param_1)
 * body: 0042b200-0042b24d
 */

void __thiscall FUN_0042b200(void *this,short *param_1)

{
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  (**(code **)(*(int *)this + 0x298))(&local_c);
  *(short *)((int)this + 0x50) = param_1[2] - *param_1;
  *(short *)((int)this + 0x52) = local_8 - local_c;
  *(short *)((int)this + 0x54) = param_1[3] - param_1[1];
  *(short *)((int)this + 0x56) = local_6 - local_a;
  return;
}


