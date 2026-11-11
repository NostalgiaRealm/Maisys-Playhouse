
/* ==== FUN_10015e20 @ 10015e20 ==== 
 * signature: uint __stdcall FUN_10015e20(void)
 * body: 10015e20-10015e4c
 */

uint FUN_10015e20(void)

{
  uint uVar1;
  DWORD *pDVar2;
  
  pDVar2 = FUN_10018030();
  uVar1 = pDVar2[5] * 0x343fd + 0x269ec3;
  pDVar2[5] = uVar1;
  return uVar1 >> 0x10 & 0x7fff;
}


