
/* ==== FUN_00478120 @ 00478120 ==== 
 * signature: uint __cdecl FUN_00478120(int param_1)
 * body: 00478120-00478147
 */

uint __cdecl FUN_00478120(int param_1)

{
  SIZE_T *pSVar1;
  SIZE_T SVar2;
  HLOCAL pvVar3;
  
  pSVar1 = *(SIZE_T **)(param_1 + 0x1a);
  SVar2 = *pSVar1;
  if ((int)SVar2 < 2) {
    SVar2 = 1;
  }
  pvVar3 = FUN_0043f6f0(SVar2);
  pSVar1[2] = (SIZE_T)pvVar3;
  return (uint)pvVar3 & 0xffffff00;
}


