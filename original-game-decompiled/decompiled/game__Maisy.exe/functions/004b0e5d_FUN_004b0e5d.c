
/* ==== FUN_004b0e5d @ 004b0e5d ==== 
 * signature: undefined __stdcall FUN_004b0e5d(HDC param_1, HGDIOBJ param_2)
 * body: 004b0e5d-004b0e73
 */

void FUN_004b0e5d(HDC param_1,HGDIOBJ param_2)

{
  HGDIOBJ pvVar1;
  
  pvVar1 = SelectObject(param_1,param_2);
  CGdiObject::FromHandle(pvVar1);
  return;
}


