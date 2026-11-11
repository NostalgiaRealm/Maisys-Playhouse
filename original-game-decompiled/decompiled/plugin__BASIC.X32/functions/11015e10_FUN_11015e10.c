
/* ==== FUN_11015e10 @ 11015e10 ==== 
 * signature: HBRUSH __stdcall FUN_11015e10(void)
 * body: 11015e10-11015e73
 */

HBRUSH FUN_11015e10(void)

{
  HBITMAP hbm;
  HBRUSH pHVar1;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  undefined2 local_2;
  
  local_4 = 0xaa;
  local_8 = 0xaa;
  local_c = 0xaa;
  local_10 = 0xaa;
  local_2 = 0x55;
  local_6 = 0x55;
  local_a = 0x55;
  local_e = 0x55;
  hbm = CreateBitmap(8,8,1,1,&local_10);
  pHVar1 = CreatePatternBrush(hbm);
  DeleteObject(hbm);
  return pHVar1;
}


