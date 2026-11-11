
/* ==== FUN_00411a10 @ 00411a10 ==== 
 * signature: undefined __cdecl FUN_00411a10(LPSTR param_1, char param_2)
 * body: 00411a10-00411a30
 */

void __cdecl FUN_00411a10(LPSTR param_1,char param_2)

{
  mmioOpenA(param_1,(LPMMIOINFO)0x0,-(uint)(param_2 == '\0') & 2 | 0x10000);
  return;
}


