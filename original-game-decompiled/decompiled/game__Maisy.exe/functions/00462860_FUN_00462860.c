
/* ==== FUN_00462860 @ 00462860 ==== 
 * signature: undefined __thiscall FUN_00462860(void * this, short * param_1, char param_2)
 * body: 00462860-004628a9
 */

void __thiscall FUN_00462860(void *this,short *param_1,char param_2)

{
  undefined4 uVar1;
  short local_8;
  short local_6;
  
  uVar1 = *(undefined4 *)((int)this + 0xae);
  *(undefined4 *)param_1 = *(undefined4 *)((int)this + 0xaa);
  *(undefined4 *)(param_1 + 2) = uVar1;
  if (param_2 != '\0') {
    (**(code **)(*(int *)this + 0x37c))(&local_8);
    *param_1 = *param_1 + local_8;
    param_1[2] = param_1[2] + local_8;
    param_1[1] = param_1[1] + local_6;
    param_1[3] = param_1[3] + local_6;
  }
  return;
}


