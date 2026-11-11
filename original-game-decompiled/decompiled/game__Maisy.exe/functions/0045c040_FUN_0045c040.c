
/* ==== FUN_0045c040 @ 0045c040 ==== 
 * signature: undefined __stdcall FUN_0045c040(int * param_1)
 * body: 0045c040-0045c074
 */

void FUN_0045c040(int *param_1)

{
  if ((((param_1 != (int *)0x0) && ((*(uint *)((int)param_1 + 0x1e) & 2) != 0)) &&
      ((short)param_1[0x18] == 0)) &&
     (((*(uint *)((int)param_1 + 0x1e) & 0x40000000) == 0 &&
      (*(short *)((int)param_1 + 0x22) != 0x43)))) {
    (**(code **)(*param_1 + 0x1f8))(0);
  }
  return;
}


