
/* ==== FUN_1100f320 @ 1100f320 ==== 
 * signature: undefined __cdecl FUN_1100f320(HDC param_1, short * param_2)
 * body: 1100f320-1100f360
 */

void __cdecl FUN_1100f320(HDC param_1,short *param_2)

{
  HGDIOBJ pvVar1;
  
  pvVar1 = GetStockObject(4);
  pvVar1 = SelectObject(param_1,pvVar1);
  Rectangle(param_1,(int)*param_2,(int)param_2[1],(int)param_2[2],(int)param_2[3]);
  SelectObject(param_1,pvVar1);
  return;
}


