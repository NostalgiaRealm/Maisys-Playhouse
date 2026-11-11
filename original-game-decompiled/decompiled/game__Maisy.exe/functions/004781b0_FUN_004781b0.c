
/* ==== FUN_004781b0 @ 004781b0 ==== 
 * signature: uint __cdecl FUN_004781b0(int param_1)
 * body: 004781b0-004781cb
 */

uint __cdecl FUN_004781b0(int param_1)

{
  SIZE_T *pSVar1;
  SIZE_T SVar2;
  
  pSVar1 = *(SIZE_T **)(param_1 + 0x1a);
  SVar2 = LocalSize((HLOCAL)pSVar1[2]);
  *pSVar1 = SVar2;
  return SVar2 & 0xffffff00;
}


