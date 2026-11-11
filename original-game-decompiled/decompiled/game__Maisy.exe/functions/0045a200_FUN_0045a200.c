
/* ==== FUN_0045a200 @ 0045a200 ==== 
 * signature: undefined __fastcall FUN_0045a200(int param_1)
 * body: 0045a200-0045a21e
 */

void __fastcall FUN_0045a200(int param_1)

{
  DWORD DVar1;
  
  DVar1 = timeGetTime();
  *(uint *)(param_1 + 0x96) = (DVar1 * 6) / 100;
  return;
}


