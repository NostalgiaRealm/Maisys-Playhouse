
/* ==== FUN_0041e137 @ 0041e137 ==== 
 * signature: undefined4 __stdcall FUN_0041e137(void)
 * body: 0041e137-0041e163
 */

undefined4 FUN_0041e137(void)

{
  HGLOBAL pvVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x28);
  **(undefined1 **)(unaff_EBP + -0x24) = 0;
  puVar2 = (undefined4 *)(*(int *)(unaff_EBP + 0x18) + 0x1c);
  pvVar1 = (HGLOBAL)*puVar2;
  if (pvVar1 != (HGLOBAL)0x0) {
    FUN_0043f7a0(pvVar1);
  }
  *puVar2 = 0;
  return 0x41e0ef;
}


