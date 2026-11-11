
/* ==== FUN_00412db0 @ 00412db0 ==== 
 * signature: undefined __fastcall FUN_00412db0(int * param_1)
 * body: 00412db0-00412e0c
 */

void __fastcall FUN_00412db0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  if (((*(byte *)(param_1 + 4) & 0x10) != 0) && (param_1[1] != 0)) {
    iVar2 = FUN_00466a70(param_1[1]);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_00466a70(param_1[1]);
      (**(code **)(*piVar3 + 0xe8))(param_1);
    }
  }
  puVar1 = (undefined4 *)*param_1;
  (*(code *)puVar1[0x20])(0x7fffffff,0x66);
  (*(code *)puVar1[0x32])(0);
  (*(code *)puVar1[0x33])();
  if (param_1 != (int *)0x0) {
    (*(code *)*puVar1)(1);
  }
  return;
}


