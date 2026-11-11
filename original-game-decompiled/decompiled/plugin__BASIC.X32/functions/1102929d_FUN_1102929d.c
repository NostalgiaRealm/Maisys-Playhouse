
/* ==== FUN_1102929d @ 1102929d ==== 
 * signature: undefined4 __fastcall FUN_1102929d(int param_1)
 * body: 1102929d-110292a8
 */

undefined4 __fastcall FUN_1102929d(int param_1)

{
  int unaff_EBP;
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  
  for (; param_1 != 0; param_1 = param_1 + -1) {
    *unaff_EDI = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
    unaff_EDI = unaff_EDI + 1;
  }
  return *(undefined4 *)(unaff_EBP + 8);
}


