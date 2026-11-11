
/* ==== FUN_110187cd @ 110187cd ==== 
 * signature: undefined __fastcall FUN_110187cd(uint * param_1, int param_2)
 * body: 110187cd-110187cf
 */

void __fastcall FUN_110187cd(uint *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar6;
  int iVar7;
  code *pcVar8;
  undefined6 uVar9;
  undefined4 in_EAX;
  byte bVar10;
  uint *puVar11;
  byte *pbVar12;
  uint unaff_EBX;
  uint unaff_ESI;
  int unaff_EDI;
  bool in_CF;
  uint uVar5;
  
  if (in_CF) {
    *param_1 = *param_1 + param_2;
    *(undefined4 *)(unaff_ESI + 0x869b1101) = in_EAX;
    *param_1 = *param_1 + param_2;
    pbVar12 = (byte *)CONCAT31((int3)((uint)param_2 >> 8),0x86);
    *param_1 = (uint)(pbVar12 + *param_1);
    uVar9 = *(undefined6 *)(unaff_ESI + 0x86ce1101);
    uVar2 = *param_1;
    *param_1 = (uint)(pbVar12 + *param_1);
    puVar11 = (uint *)((int)param_1 + -1);
    LOCK();
    uVar3 = *puVar11;
    *puVar11 = (uint)uVar9;
    UNLOCK();
    puVar1 = (uint *)(unaff_EDI + 1 + uVar3 * 4);
    uVar4 = *puVar1;
    uVar5 = *puVar1;
    *puVar1 = uVar5 + unaff_EBX + (uint)CARRY4(uVar2,(uint)pbVar12);
    LOCK();
    pbVar6 = (byte *)*puVar11;
    *puVar11 = uVar3;
    UNLOCK();
    *(byte **)pbVar6 =
         pbVar6 + (uint)(CARRY4(unaff_ESI,uVar3) ||
                        CARRY4(unaff_ESI + uVar3,
                               (uint)(CARRY4(uVar4,unaff_EBX) ||
                                     CARRY4(uVar5 + unaff_EBX,(uint)CARRY4(uVar2,(uint)pbVar12)))))
                  + *(int *)pbVar6;
    *(int *)pbVar6 = *(int *)pbVar6 + (int)puVar11;
    *pbVar12 = *pbVar12 | (byte)pbVar6;
    iVar7 = *(int *)pbVar6;
    pbVar6[(int)puVar11 + iVar7] = pbVar6[(int)puVar11 + iVar7] | (byte)pbVar6;
    bVar10 = (byte)((int)puVar11 + iVar7);
    *pbVar6 = *pbVar6 | bVar10;
    *pbVar6 = *pbVar6 | bVar10;
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  return;
}


