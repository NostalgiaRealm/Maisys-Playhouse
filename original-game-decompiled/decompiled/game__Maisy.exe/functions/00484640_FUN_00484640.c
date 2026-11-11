
/* ==== FUN_00484640 @ 00484640 ==== 
 * signature: undefined4 __cdecl FUN_00484640(undefined4 param_1, int * param_2, undefined2 param_3, undefined2 param_4)
 * body: 00484640-00484687
 */

undefined4 __cdecl
FUN_00484640(undefined4 param_1,int *param_2,undefined2 param_3,undefined2 param_4)

{
  undefined4 local_8;
  
  if (param_2 == (int *)0x0) {
    return 0x10001;
  }
  if ((*(byte *)((int)param_2 + 0x1e) & 4) != 0) {
    local_8 = CONCAT22(param_4,param_3);
    (**(code **)(*param_2 + 0x3f8))(local_8);
    return 0;
  }
  return 0x9000a;
}


