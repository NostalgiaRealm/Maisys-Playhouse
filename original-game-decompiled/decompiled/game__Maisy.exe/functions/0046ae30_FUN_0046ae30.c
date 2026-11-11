
/* ==== FUN_0046ae30 @ 0046ae30 ==== 
 * signature: undefined __fastcall FUN_0046ae30(int * param_1)
 * body: 0046ae30-0046ae66
 */

void __fastcall FUN_0046ae30(int *param_1)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    piVar1 = (int *)FUN_00469fb0(param_1);
    (**(code **)(*param_1 + 0x2f0))(1,0);
    for (; piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x6a)) {
      (**(code **)(*piVar1 + 0x234))();
    }
  }
  return;
}


