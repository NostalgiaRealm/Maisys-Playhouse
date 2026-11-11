
/* ==== FUN_004148d0 @ 004148d0 ==== 
 * signature: undefined4 __stdcall FUN_004148d0(int * param_1)
 * body: 004148d0-00414922
 */

undefined4 FUN_004148d0(int *param_1)

{
  HGLOBAL pvVar1;
  
  if (*param_1 != 0) {
    FUN_00451f80();
    FUN_00451f90();
    (*DAT_004e00b8)(*param_1);
    FUN_00451f90();
  }
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return 1;
}


