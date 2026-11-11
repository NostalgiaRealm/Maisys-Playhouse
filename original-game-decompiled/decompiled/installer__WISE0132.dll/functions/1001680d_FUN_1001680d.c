
/* ==== FUN_1001680d @ 1001680d ==== 
 * signature: undefined4 __stdcall FUN_1001680d(void)
 * body: 1001680d-10016826
 */

undefined4 FUN_1001680d(void)

{
  int unaff_EBP;
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  
  *unaff_EDI = *unaff_ESI;
  unaff_EDI[1] = unaff_ESI[1];
  unaff_EDI[2] = unaff_ESI[2];
  return *(undefined4 *)(unaff_EBP + 8);
}


