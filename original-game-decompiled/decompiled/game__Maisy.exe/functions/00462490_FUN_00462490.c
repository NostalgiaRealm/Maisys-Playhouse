
/* ==== FUN_00462490 @ 00462490 ==== 
 * signature: undefined __fastcall FUN_00462490(int * param_1)
 * body: 00462490-004624d3
 */

void __fastcall FUN_00462490(int *param_1)

{
  int *piVar1;
  
  if (DAT_004dbdc4 == '\0') {
    (**(code **)(*param_1 + 0x290))(0);
  }
  for (piVar1 = (int *)FUN_00469fb0(param_1); piVar1 != (int *)0x0;
      piVar1 = *(int **)((int)piVar1 + 0x6a)) {
    if ((*(uint *)((int)piVar1 + 0x1e) & 4) != 0) {
      (**(code **)(*piVar1 + 0x400))(0);
    }
  }
  return;
}


