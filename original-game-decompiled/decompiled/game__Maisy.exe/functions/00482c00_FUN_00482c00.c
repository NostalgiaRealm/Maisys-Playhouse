
/* ==== FUN_00482c00 @ 00482c00 ==== 
 * signature: undefined4 __cdecl FUN_00482c00(undefined4 param_1, int * param_2, undefined2 * param_3, undefined4 param_4)
 * body: 00482c00-00482c3d
 */

undefined4 __cdecl
FUN_00482c00(undefined4 param_1,int *param_2,undefined2 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  if (param_2 == (int *)0x0) {
    return 0x10001;
  }
  uVar2 = (undefined2)((uint)*(undefined4 *)(param_3 + 7) >> 0x10);
  uVar1 = (**(code **)(*param_2 + 100))
                    (CONCAT22(uVar2,*param_3),*(undefined4 *)(param_3 + 1),
                     CONCAT22(uVar2,param_3[3]),param_3[4],*(undefined4 *)(param_3 + 7),param_4);
  *(undefined4 *)(param_3 + 5) = uVar1;
  return 0;
}


