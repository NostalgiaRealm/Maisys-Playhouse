
/* ==== FUN_110171dd @ 110171dd ==== 
 * signature: undefined __stdcall FUN_110171dd(void)
 * body: 110171dd-110171df
 */

/* WARNING: Instruction at (ram,0x110171f8) overlaps instruction at (ram,0x110171f7)
    */
/* WARNING: Removing unreachable block (ram,0x1101726b) */

void FUN_110171dd(void)

{
  int *piVar1;
  uint uVar2;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  byte *pbVar7;
  byte bVar8;
  uint *extraout_ECX;
  uint *puVar9;
  uint *unaff_ESI;
  uint unaff_EDI;
  byte in_CF;
  bool bVar10;
  undefined1 in_OF;
  undefined8 uVar11;
  uint uVar3;
  
  uVar11 = func_0x0d127355();
  puVar9 = (uint *)((ulonglong)uVar11 >> 0x20);
  pbVar7 = (byte *)uVar11;
  if ((bool)in_OF) {
    in_CF = 0;
    pbVar7 = (byte *)((uint)pbVar7 | 0x71);
  }
  piVar1 = (int *)((int)extraout_ECX + (int)unaff_ESI * 2);
  *piVar1 = (int)extraout_ECX + (uint)in_CF + *piVar1;
  *extraout_ECX = (uint)(*extraout_ECX + (int)puVar9);
  *(byte *)((int)extraout_ECX + 1) =
       *(byte *)((int)extraout_ECX + 1) & (byte)((ulonglong)uVar11 >> 0x28);
  uVar2 = *puVar9;
  uVar3 = *puVar9;
  *puVar9 = *puVar9 + (int)unaff_ESI;
  if (SCARRY4(uVar3,(int)unaff_ESI)) {
    uVar3 = (uint)CARRY4(uVar2,(uint)unaff_ESI);
    uVar2 = *extraout_ECX;
    uVar5 = *extraout_ECX + unaff_EDI;
    bVar10 = CARRY4(*extraout_ECX,unaff_EDI) || CARRY4(uVar5,uVar3);
    *extraout_ECX = uVar5 + uVar3;
    if (SCARRY4(uVar2,unaff_EDI) == SCARRY4(uVar5,uVar3)) goto code_r0x110171fa;
  }
  else {
    bVar10 = *(uint **)((int)extraout_ECX + 1) < unaff_ESI;
  }
  *(uint *)(pbVar7 + 0x71) = (int)unaff_ESI + (uint)bVar10 + *(int *)(pbVar7 + 0x71);
code_r0x110171fa:
  uVar2 = *extraout_ECX;
  *extraout_ECX = (uint)(*extraout_ECX + (int)puVar9);
  if (CARRY4(uVar2,(uint)puVar9) || *extraout_ECX == 0) {
    uVar2 = *extraout_ECX;
    *extraout_ECX = (uint)(*extraout_ECX + (int)puVar9);
    *(byte **)pbVar7 = pbVar7 + (uint)CARRY4(uVar2,(uint)puVar9) + *(int *)pbVar7;
    *(int *)pbVar7 = *(int *)pbVar7 + (int)extraout_ECX;
    *(byte *)puVar9 = (byte)*puVar9 | (byte)pbVar7;
    iVar4 = *(int *)pbVar7;
    pbVar7[(int)extraout_ECX + iVar4] = pbVar7[(int)extraout_ECX + iVar4] | (byte)pbVar7;
    bVar8 = (byte)((int)extraout_ECX + iVar4);
    *pbVar7 = *pbVar7 | bVar8;
    *pbVar7 = *pbVar7 | bVar8;
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  extraout_ECX[3] = (uint)pbVar7;
  extraout_ECX[4] = *unaff_ESI;
  extraout_ECX[5] = unaff_ESI[1];
  extraout_ECX[6] = unaff_ESI[2];
  extraout_ECX[7] = puVar9[4];
  extraout_ECX[8] = puVar9[5];
  extraout_ECX[9] = puVar9[6];
  extraout_ECX[10] = puVar9[7];
  extraout_ECX[0xb] = puVar9[8];
  extraout_ECX[0xc] = puVar9[9];
  FUN_110025f0((short *)(puVar9 + 10),(short *)(extraout_ECX + 0xd));
  return;
}


