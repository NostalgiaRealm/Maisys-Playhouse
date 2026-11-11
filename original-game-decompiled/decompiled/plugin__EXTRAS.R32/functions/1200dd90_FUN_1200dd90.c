
/* ==== FUN_1200dd90 @ 1200dd90 ==== 
 * signature: undefined4 __stdcall FUN_1200dd90(void)
 * body: 1200dd90-1200de1d
 */

undefined4 FUN_1200dd90(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_120373b8;
  if (DAT_120373b8 != 0) {
    FUN_1201a330(DAT_120373b8);
    FUN_12016030(iVar2);
  }
  iVar2 = DAT_120373b4;
  DAT_120373b8 = 0;
  if (DAT_120373b4 != 0) {
    FUN_12004ba0();
    FUN_12016030(iVar2);
  }
  piVar1 = DAT_120373b0;
  DAT_120373b4 = 0;
  if (DAT_120373b0 != (int *)0x0) {
    FUN_12016360(DAT_120373b0);
    FUN_12016030((int)piVar1);
  }
  DAT_120373b0 = (int *)0x0;
  if (DAT_120373c0 != 0) {
    FUN_12015e20(DAT_120373c0);
    DAT_120373c0 = 0;
  }
  DAT_120373bc = 0;
  return 0;
}


