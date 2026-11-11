
/* ==== FUN_00484d40 @ 00484d40 ==== 
 * signature: undefined __cdecl FUN_00484d40(undefined4 * param_1, undefined2 * param_2, undefined4 * param_3)
 * body: 00484d40-00484d98
 */

void __cdecl FUN_00484d40(undefined4 *param_1,undefined2 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_20 [6];
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  
  *param_3 = 0x1a;
  if (param_1 != (undefined4 *)0x0) {
    local_20._0_2_ = *param_2;
    local_1a = *(undefined4 *)(param_2 + 3);
    local_20._2_4_ = *(undefined4 *)(param_2 + 1);
    local_12 = *(undefined4 *)(param_2 + 7);
    local_16 = *(undefined4 *)(param_2 + 5);
    local_a = *(undefined4 *)(param_2 + 0xb);
    local_e = *(undefined4 *)(param_2 + 9);
    puVar2 = (undefined4 *)local_20;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *puVar2;
      puVar2 = puVar2 + 1;
      param_1 = param_1 + 1;
    }
    *(undefined2 *)param_1 = *(undefined2 *)puVar2;
  }
  return;
}


