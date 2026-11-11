
/* ==== FUN_00414cb0 @ 00414cb0 ==== 
 * signature: undefined4 __stdcall FUN_00414cb0(undefined4 * param_1, int * param_2)
 * body: 00414cb0-00414d2c
 */

undefined4 FUN_00414cb0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 local_404 [1024];
  
  iVar1 = param_2[8];
  if (0 < iVar1) {
    puVar2 = (undefined1 *)((int)param_2 + *param_2 + 2);
    puVar3 = local_404;
    do {
      iVar1 = iVar1 + -1;
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[-1];
      puVar3[2] = puVar2[-2];
      puVar3[3] = 0;
      puVar2 = puVar2 + 4;
      puVar3 = puVar3 + 4;
    } while (iVar1 != 0);
  }
  FUN_00451f80();
  FUN_00451f90();
  (*DAT_004e01b0)(*param_1,0,param_2[8],local_404);
  FUN_00451f90();
  return 0;
}


