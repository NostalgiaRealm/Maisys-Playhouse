
/* ==== FUN_0044ba00 @ 0044ba00 ==== 
 * signature: undefined __cdecl FUN_0044ba00(short param_1)
 * body: 0044ba00-0044ba39
 */

void __cdecl FUN_0044ba00(short param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar1 = timeGetTime();
  do {
    DVar2 = timeGetTime();
  } while ((DVar2 * 6) / 100 < (int)param_1 + (DVar1 * 6) / 100);
  return;
}


