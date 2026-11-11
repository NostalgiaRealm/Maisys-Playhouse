
/* ==== FUN_0045c920 @ 0045c920 ==== 
 * signature: int __fastcall FUN_0045c920(undefined4 param_1)
 * body: 0045c920-0045c957
 */

int __fastcall FUN_0045c920(undefined4 param_1)

{
  if ((DAT_004dc57c != '\0') && (DAT_004dc574 != 0)) {
    *(undefined4 *)(DAT_004dc574 + 0xc4) = param_1;
    return DAT_004dc574;
  }
  *(undefined4 *)(DAT_004dc1c0 + 0xc4) = param_1;
  return DAT_004dc1c0;
}


