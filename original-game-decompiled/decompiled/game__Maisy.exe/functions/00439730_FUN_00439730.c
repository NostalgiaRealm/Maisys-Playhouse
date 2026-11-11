
/* ==== FUN_00439730 @ 00439730 ==== 
 * signature: uint * __fastcall FUN_00439730(int param_1)
 * body: 00439730-004397b7
 */

uint * __fastcall FUN_00439730(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  
  DVar1 = timeGetTime();
  puVar5 = (uint *)0x0;
  uVar2 = (DVar1 * 6) / 100;
  iVar3 = 0;
  puVar4 = (uint *)(param_1 + 8);
  do {
    if (puVar4[-1] == 0) {
      return (uint *)(param_1 + iVar3 * 0x410);
    }
    if (((int)puVar4[0x101] < 1) && ((int)*puVar4 < (int)uVar2)) {
      puVar5 = puVar4 + -2;
      uVar2 = *puVar4;
    }
    puVar4 = puVar4 + 0x104;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  if ((puVar5 != (uint *)0x0) && ((HGDIOBJ)puVar5[1] != (HGDIOBJ)0x0)) {
    DeleteObject((HGDIOBJ)puVar5[1]);
    puVar5[1] = 0;
  }
  return puVar5;
}


