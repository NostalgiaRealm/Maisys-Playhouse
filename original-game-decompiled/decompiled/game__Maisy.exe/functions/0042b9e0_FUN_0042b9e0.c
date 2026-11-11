
/* ==== FUN_0042b9e0 @ 0042b9e0 ==== 
 * signature: char __cdecl FUN_0042b9e0(LPSTR param_1)
 * body: 0042b9e0-0042b9ff
 */

char __cdecl FUN_0042b9e0(LPSTR param_1)

{
  HMMIO pHVar1;
  
  pHVar1 = mmioOpenA(param_1,(LPMMIOINFO)0x0,0x4000);
  return '\x01' - (pHVar1 == (HMMIO)0x0);
}


