
/* ==== FUN_00437470 @ 00437470 ==== 
 * signature: undefined1 __cdecl FUN_00437470(int param_1, int param_2)
 * body: 00437470-004374b5
 */

undefined1 __cdecl FUN_00437470(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    bVar1 = *(byte *)(param_1 + iVar3);
    if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
      bVar1 = bVar1 + 0x20;
    }
    bVar2 = *(byte *)(param_2 + iVar3);
    if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
      bVar2 = bVar2 + 0x20;
    }
    if (bVar2 != bVar1) break;
    iVar3 = iVar3 + 1;
    if (0xf < iVar3) {
      return 1;
    }
  }
  return 0;
}


