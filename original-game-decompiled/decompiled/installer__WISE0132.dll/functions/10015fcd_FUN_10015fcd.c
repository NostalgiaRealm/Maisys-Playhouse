
/* ==== FUN_10015fcd @ 10015fcd ==== 
 * signature: undefined4 __stdcall FUN_10015fcd(void)
 * body: 10015fcd-10015fe6
 */

undefined4 FUN_10015fcd(void)

{
  int unaff_EBP;
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  
  *unaff_EDI = *unaff_ESI;
  unaff_EDI[1] = unaff_ESI[1];
  unaff_EDI[2] = unaff_ESI[2];
  return *(undefined4 *)(unaff_EBP + 8);
}


