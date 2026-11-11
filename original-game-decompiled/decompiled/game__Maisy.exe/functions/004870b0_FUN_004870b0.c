
/* ==== FUN_004870b0 @ 004870b0 ==== 
 * signature: char __cdecl FUN_004870b0(LPSTR param_1)
 * body: 004870b0-004870cf
 */

char __cdecl FUN_004870b0(LPSTR param_1)

{
  HMMIO pHVar1;
  
  pHVar1 = mmioOpenA(param_1,(LPMMIOINFO)0x0,0x4000);
  return '\x01' - (pHVar1 == (HMMIO)0x0);
}


