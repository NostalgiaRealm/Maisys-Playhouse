
/* ==== FUN_00461da0 @ 00461da0 ==== 
 * signature: int __fastcall FUN_00461da0(int * param_1)
 * body: 00461da0-00461e1b
 */

int __fastcall FUN_00461da0(int *param_1)

{
  void *pvVar1;
  undefined2 extraout_var;
  uint3 uVar2;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  pvVar1 = FUN_0046da90(param_1,'\x01','\x01');
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  (**(code **)(**(int **)((int)param_1 + 0x52) + 0x1dc))(&local_14);
  (**(code **)(*param_1 + 0x3a0))(&local_c,0);
  uVar2 = (uint3)(CONCAT22(extraout_var,local_6 - local_a) >> 8);
  if (((short)(local_8 - (local_10 - local_14)) == local_c) &&
     ((short)(local_e - local_12) == (short)(local_6 - local_a))) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}


