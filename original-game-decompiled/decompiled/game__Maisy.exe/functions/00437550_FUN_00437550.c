
/* ==== FUN_00437550 @ 00437550 ==== 
 * signature: undefined __cdecl FUN_00437550(int param_1)
 * body: 00437550-00437577
 */

void __cdecl FUN_00437550(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    pbVar1 = (byte *)(param_1 + iVar3);
    iVar3 = iVar3 + 1;
    iVar2 = _tolower((uint)*pbVar1);
    *pbVar1 = (byte)iVar2;
  } while (iVar3 < 0x10);
  return;
}


