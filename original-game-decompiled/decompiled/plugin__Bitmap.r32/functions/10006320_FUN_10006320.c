
/* ==== FUN_10006320 @ 10006320 ==== 
 * signature: undefined __cdecl FUN_10006320(HDC param_1, RGBQUAD * param_2)
 * body: 10006320-10006337
 */

void __cdecl FUN_10006320(HDC param_1,RGBQUAD *param_2)

{
  GetDIBColorTable(param_1,0,0x100,param_2);
  return;
}


