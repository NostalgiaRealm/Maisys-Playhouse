
/* ==== FUN_00461110 @ 00461110 ==== 
 * signature: undefined2 __fastcall FUN_00461110(int * param_1)
 * body: 00461110-00461146
 */

undefined2 __fastcall FUN_00461110(int *param_1)

{
  undefined2 uVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  
  pvVar2 = FUN_0046da90(param_1,'\x01','\x01');
  if (pvVar2 != (void *)0x0) {
    piVar3 = FUN_0046da90(param_1,'\x01','\x01');
    uVar1 = (**(code **)(*piVar3 + 0x1d8))();
    return uVar1;
  }
  iVar4 = (**(code **)(*param_1 + 0x10))();
  return *(undefined2 *)(iVar4 + 0xaa);
}


