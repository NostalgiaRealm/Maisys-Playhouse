
/* ==== FUN_10006290 @ 10006290 ==== 
 * signature: undefined __cdecl FUN_10006290(HDC param_1, int param_2)
 * body: 10006290-100062ea
 */

void __cdecl FUN_10006290(HDC param_1,int param_2)

{
  BYTE *pBVar1;
  tagPALETTEENTRY *ptVar2;
  int iVar3;
  tagPALETTEENTRY local_400 [256];
  
  GetSystemPaletteEntries(param_1,0,0x100,local_400);
  pBVar1 = (BYTE *)(param_2 + 2);
  iVar3 = 0x100;
  ptVar2 = local_400;
  do {
    pBVar1[-2] = pBVar1[(int)local_400 - param_2];
    pBVar1[-1] = ptVar2->peGreen;
    *pBVar1 = ptVar2->peRed;
    pBVar1 = pBVar1 + 4;
    iVar3 = iVar3 + -1;
    ptVar2 = ptVar2 + 1;
  } while (iVar3 != 0);
  return;
}


