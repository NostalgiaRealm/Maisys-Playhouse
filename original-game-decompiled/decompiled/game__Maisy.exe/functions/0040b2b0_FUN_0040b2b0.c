
/* ==== FUN_0040b2b0 @ 0040b2b0 ==== 
 * signature: undefined1 __fastcall FUN_0040b2b0(int param_1)
 * body: 0040b2b0-0040b2c1
 */

undefined1 __fastcall FUN_0040b2b0(int param_1)

{
  if (((*(byte *)(param_1 + 0x28) & 0x80) != 0) && ((*(byte *)(param_1 + 0x38) & 1) == 0)) {
    return 1;
  }
  return 0;
}


