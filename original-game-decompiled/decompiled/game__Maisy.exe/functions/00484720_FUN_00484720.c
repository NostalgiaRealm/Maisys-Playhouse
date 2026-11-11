
/* ==== FUN_00484720 @ 00484720 ==== 
 * signature: undefined4 __cdecl FUN_00484720(undefined4 param_1, int * param_2, short param_3, short param_4)
 * body: 00484720-0048479e
 */

undefined4 __cdecl FUN_00484720(undefined4 param_1,int *param_2,short param_3,short param_4)

{
  int iVar1;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  undefined4 local_8;
  
  if (param_2 == (int *)0x0) {
    return 0x10001;
  }
  if ((*(byte *)((int)param_2 + 0x1e) & 4) != 0) {
    iVar1 = *param_2;
    (**(code **)(iVar1 + 0x3a0))(&local_10,0);
    local_8 = CONCAT22((short)(((int)local_e - (int)local_a) / 2) + param_4,
                       (short)(((int)local_10 - (int)local_c) / 2) + param_3);
    (**(code **)(iVar1 + 0x3f8))(local_8);
    return 0;
  }
  return 0x9000a;
}


