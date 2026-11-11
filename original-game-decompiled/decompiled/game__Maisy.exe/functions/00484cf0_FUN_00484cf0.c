
/* ==== FUN_00484cf0 @ 00484cf0 ==== 
 * signature: undefined __cdecl FUN_00484cf0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
 * body: 00484cf0-00484d35
 */

void __cdecl FUN_00484cf0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  
  *param_3 = 10;
  if (param_1 != (undefined4 *)0x0) {
    uStack_a = (undefined2)*(undefined4 *)((int)param_2 + 6);
    uStack_8 = (undefined2)((uint)*(undefined4 *)((int)param_2 + 6) >> 0x10);
    uStack_c = (undefined2)((uint)*(undefined4 *)((int)param_2 + 2) >> 0x10);
    *param_1 = *param_2;
    param_1[1] = CONCAT22(uStack_a,uStack_c);
    *(undefined2 *)(param_1 + 2) = uStack_8;
  }
  return;
}


