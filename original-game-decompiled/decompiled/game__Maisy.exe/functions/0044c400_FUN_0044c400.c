
/* ==== FUN_0044c400 @ 0044c400 ==== 
 * signature: undefined __cdecl FUN_0044c400(int param_1, HPALETTE param_2)
 * body: 0044c400-0044c468
 */

void __cdecl FUN_0044c400(int param_1,HPALETTE param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  BYTE aBStackY_20404 [131044];
  tagPALETTEENTRY local_404 [256];
  
  sVar3 = 0;
  GetPaletteEntries(param_2,0,0x100,local_404);
  do {
    iVar2 = (int)sVar3;
    sVar3 = sVar3 + 1;
    *(BYTE *)(param_1 + 0x2a + iVar2 * 4) = local_404[iVar2].peRed;
    iVar1 = param_1 + iVar2 * 4;
    *(BYTE *)(iVar1 + 0x29) = local_404[iVar2].peGreen;
    *(BYTE *)(iVar1 + 0x28) = local_404[iVar2].peBlue;
    *(undefined1 *)(iVar1 + 0x2b) = 0;
  } while (sVar3 < 0x100);
  return;
}


