
/* ==== FUN_0046a510 @ 0046a510 ==== 
 * signature: undefined __thiscall FUN_0046a510(void * this, undefined4 * param_1)
 * body: 0046a510-0046a574
 */

void __thiscall FUN_0046a510(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 local_58 [9];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_004142c0(local_58,0x134,0,this,0);
  local_34 = *param_1;
  local_30 = param_1[1];
  local_2c = param_1[2];
  FUN_0046b770(this,(int)local_58);
  for (piVar1 = (int *)FUN_00469fb0(this); piVar1 != (int *)0x0;
      piVar1 = *(int **)((int)piVar1 + 0x6a)) {
    (**(code **)(*piVar1 + 0x294))(param_1);
  }
  return;
}


