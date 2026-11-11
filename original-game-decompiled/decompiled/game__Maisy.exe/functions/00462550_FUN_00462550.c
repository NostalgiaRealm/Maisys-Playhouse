
/* ==== FUN_00462550 @ 00462550 ==== 
 * signature: undefined __thiscall FUN_00462550(void * this, short * param_1, char param_2)
 * body: 00462550-004625c4
 */

void __thiscall FUN_00462550(void *this,short *param_1,char param_2)

{
  undefined4 uVar1;
  short local_8;
  short local_6;
  
  uVar1 = *(undefined4 *)((int)this + 0xae);
  *(undefined4 *)param_1 = *(undefined4 *)((int)this + 0xaa);
  *(undefined4 *)(param_1 + 2) = uVar1;
  *param_1 = *param_1 - *(short *)((int)this + 0xb2);
  param_1[1] = param_1[1] - *(short *)((int)this + 0xb4);
  param_1[2] = param_1[2] + *(short *)((int)this + 0xb6);
  param_1[3] = param_1[3] + *(short *)((int)this + 0xb8);
  if (param_2 != '\0') {
    (**(code **)(*(int *)this + 0x37c))(&local_8);
    *param_1 = *param_1 + local_8;
    param_1[2] = param_1[2] + local_8;
    param_1[1] = param_1[1] + local_6;
    param_1[3] = param_1[3] + local_6;
  }
  return;
}


