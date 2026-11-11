
/* ==== FUN_00484690 @ 00484690 ==== 
 * signature: undefined4 __cdecl FUN_00484690(undefined4 param_1, int * param_2, short * param_3, short * param_4)
 * body: 00484690-00484713
 */

undefined4 __cdecl FUN_00484690(undefined4 param_1,int *param_2,short *param_3,short *param_4)

{
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  if (((param_2 != (int *)0x0) && (param_3 != (short *)0x0)) && (param_4 != (short *)0x0)) {
    if ((*(byte *)((int)param_2 + 0x1e) & 4) != 0) {
      (**(code **)(*param_2 + 0x3a0))(&local_c,0);
      *param_3 = local_c + (short)(((int)local_8 - (int)local_c) / 2);
      *param_4 = local_a + (short)(((int)local_6 - (int)local_a) / 2);
      return 0;
    }
    return 0x9000a;
  }
  return 0x10001;
}


