
/* ==== FUN_00423e30 @ 00423e30 ==== 
 * signature: undefined __fastcall FUN_00423e30(int * param_1)
 * body: 00423e30-00423e82
 */

void __fastcall FUN_00423e30(int *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  
  piVar2 = (int *)(**(code **)(*param_1 + 0x188))();
  uVar1 = *(undefined1 *)(param_1[1] + 0x32);
  (**(code **)(*(int *)param_1[1] + 0xe8))(0);
  for (; piVar2 != (int *)0x0; piVar2 = (int *)(**(code **)(*piVar2 + 0x174))()) {
    if ((*(byte *)(piVar2 + 8) & 8) != 0) {
      (**(code **)(*piVar2 + 0x2a4))();
    }
  }
  (**(code **)(*(int *)param_1[1] + 0xe8))(uVar1);
  return;
}


