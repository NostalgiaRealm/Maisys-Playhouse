
/* ==== FUN_004bc5e9 @ 004bc5e9 ==== 
 * signature: undefined __stdcall FUN_004bc5e9(void)
 * body: 004bc5e9-004bc618
 */

void FUN_004bc5e9(void)

{
  int iVar1;
  
  if (DAT_004e51f8 != 0) {
    iVar1 = GetSystemMetrics(2);
    DAT_004e5180 = iVar1 + 1;
    iVar1 = GetSystemMetrics(3);
    DAT_004e5208 = 1;
    DAT_004e5184 = iVar1 + 1;
  }
  return;
}


