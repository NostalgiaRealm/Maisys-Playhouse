
/* ==== FUN_0040266a @ 0040266a ==== 
 * signature: ATOM __cdecl FUN_0040266a(HINSTANCE param_1)
 * body: 0040266a-004026c8
 */

ATOM __cdecl FUN_0040266a(HINSTANCE param_1)

{
  ATOM AVar1;
  WNDCLASSA local_2c;
  
  local_2c.style = 0;
  local_2c.lpfnWndProc = _MainWndProc_16;
  local_2c.cbClsExtra = 0;
  local_2c.cbWndExtra = 0;
  local_2c.hInstance = param_1;
  local_2c.hIcon = LoadIconA(param_1,(LPCSTR)0x6c);
  local_2c.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_2c.hbrBackground = GetStockObject(0);
  local_2c.lpszClassName = PTR_s_GLBSInstall_0040418c;
  local_2c.lpszMenuName = (LPCSTR)0x0;
  AVar1 = RegisterClassA(&local_2c);
  return AVar1;
}


