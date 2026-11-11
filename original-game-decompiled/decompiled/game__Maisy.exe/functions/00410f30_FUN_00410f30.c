
/* ==== FUN_00410f30 @ 00410f30 ==== 
 * signature: undefined __fastcall FUN_00410f30(int param_1)
 * body: 00410f30-00410f67
 */

void __fastcall FUN_00410f30(int param_1)

{
  if (*(HCURSOR *)(param_1 + 0xc2) != (HCURSOR)0x0) {
    DestroyCursor(*(HCURSOR *)(param_1 + 0xc2));
    *(undefined4 *)(param_1 + 0xc2) = 0;
    *(undefined2 *)(param_1 + 0xc6) = 0xffff;
    DAT_004da3c6 = 0xffff;
    DAT_004da3c4 = 0xffff;
  }
  return;
}


