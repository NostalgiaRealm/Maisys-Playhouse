
/* ==== FUN_1000ee43 @ 1000ee43 ==== 
 * signature: undefined FUN_1000ee43(void)
 * body: 1000ee43-1000ee4f
 */

int FUN_1000ee43(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000ee90(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1[3] & 0x4000U) != 0) {
    iVar1 = FUN_1000f960(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


