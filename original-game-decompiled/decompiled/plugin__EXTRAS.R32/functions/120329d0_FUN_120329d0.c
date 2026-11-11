
/* ==== FUN_120329d0 @ 120329d0 ==== 
 * signature: wint_t __cdecl FUN_120329d0(wint_t param_1)
 * body: 120329d0-12032a44
 */

wint_t __cdecl FUN_120329d0(wint_t param_1)

{
  bool bVar1;
  
  if (DAT_12038558 == 0) {
    if ((0x60 < param_1) && (param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    bVar1 = DAT_1203aae4 == 0;
    if (bVar1) {
      DAT_1203aae8 = DAT_1203aae8 + 1;
    }
    else {
      __lock(0x13);
    }
    param_1 = FID_conflict__towupper(param_1);
    if (!bVar1) {
      FUN_1202c520(0x13);
      return param_1;
    }
    DAT_1203aae8 = DAT_1203aae8 + -1;
  }
  return param_1;
}


