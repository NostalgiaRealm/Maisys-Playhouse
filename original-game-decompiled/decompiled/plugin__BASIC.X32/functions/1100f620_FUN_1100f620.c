
/* ==== FUN_1100f620 @ 1100f620 ==== 
 * signature: undefined __cdecl FUN_1100f620(HDC param_1, HGDIOBJ param_2, HGDIOBJ param_3)
 * body: 1100f620-1100f644
 */

void __cdecl FUN_1100f620(HDC param_1,HGDIOBJ param_2,HGDIOBJ param_3)

{
  SelectObject(param_1,param_3);
  DeleteObject(param_2);
  DeleteDC(param_1);
  return;
}


