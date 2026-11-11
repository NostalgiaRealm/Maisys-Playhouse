
/* ==== FUN_0041d9f7 @ 0041d9f7 ==== 
 * signature: undefined4 __stdcall FUN_0041d9f7(void)
 * body: 0041d9f7-0041da21
 */

undefined4 FUN_0041d9f7(void)

{
  undefined4 *puVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x24);
  iVar2 = *(int *)(unaff_EBP + 0xc);
  *(undefined1 *)(iVar2 + 2) = 0;
  puVar1 = (undefined4 *)(iVar2 + 0x1c);
  pvVar3 = (HGLOBAL)*puVar1;
  if (pvVar3 != (HGLOBAL)0x0) {
    FUN_0043f7a0(pvVar3);
  }
  *puVar1 = 0;
  return 0x41d9bd;
}


