
/* ==== FUN_004584e0 @ 004584e0 ==== 
 * signature: int * __cdecl FUN_004584e0(int * param_1)
 * body: 004584e0-004585be
 */

int * __cdecl FUN_004584e0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_14 [4];
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  
  piVar1 = FUN_0041bd90(0x21,0,0);
  (**(code **)(*param_1 + 0x2b0))(piVar1,1);
  piVar2 = FUN_0041bd90(8,0,0);
  (**(code **)(*piVar1 + 0x2b0))(piVar2,1);
  iVar5 = 0x334;
  iVar3 = (**(code **)(*param_1 + 0x10))();
  piVar4 = FUN_0041f760(DAT_004da380,iVar3,iVar5);
  if (piVar4 != (int *)0x0) {
    FUN_0048bea0(piVar4,local_14);
    local_e = 0;
    local_10 = 0;
    local_f = 0;
    FUN_0048be40(piVar4,local_14);
    (**(code **)(*piVar2 + 0x2b8))(piVar4,1);
    (**(code **)(*piVar2 + 0x2c8))();
    (**(code **)(*piVar4 + 0x1f8))(0);
  }
  piVar4 = FUN_0041bd90(8,1,0);
  (**(code **)(*piVar2 + 0x2b4))(piVar4,0);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x3b4))(0);
  }
  return piVar1;
}


