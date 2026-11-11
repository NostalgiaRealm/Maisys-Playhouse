
/* ==== FUN_100158d2 @ 100158d2 ==== 
 * signature: undefined __cdecl FUN_100158d2(LPCSTR param_1)
 * body: 100158d2-10015921
 */

void __cdecl FUN_100158d2(LPCSTR param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10015d50(0x100);
  *(undefined4 *)(DAT_1002417c + DAT_10024188 * 4) = uVar1;
  lstrcpyA(*(LPSTR *)(DAT_1002417c + DAT_10024188 * 4),param_1);
  FUN_10012386(*(LPCSTR *)(DAT_1002417c + DAT_10024188 * 4),0);
  DAT_10024188 = DAT_10024188 + 1;
  return;
}


