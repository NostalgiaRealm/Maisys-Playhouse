
/* ==== FUN_1100d8ae @ 1100d8ae ==== 
 * signature: undefined __fastcall FUN_1100d8ae(uint * param_1, byte param_2)
 * body: 1100d8ae-1100d8af
 */

/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_1100d8ae(uint *param_1,byte param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  uint in_EAX;
  undefined3 uVar10;
  int iVar9;
  byte bVar11;
  undefined4 unaff_EBX;
  int iVar12;
  int unaff_EBP;
  uint unaff_ESI;
  int unaff_EDI;
  
  uVar6 = *param_1;
  *(byte *)param_1 = (char)*param_1 + param_2;
  iVar12 = CONCAT22((short)((uint)unaff_EBX >> 0x10),
                    CONCAT11(((char)((uint)unaff_EBX >> 8) - param_2) - CARRY1((byte)uVar6,param_2),
                             (char)unaff_EBX));
  *(byte *)param_1 = (char)*param_1 + param_2;
  puVar5 = (undefined4 *)-unaff_EDI;
  bVar11 = (byte)puVar5;
  *(byte *)param_1 = (char)*param_1 + bVar11;
  uVar10 = (undefined3)(in_EAX >> 8);
  bVar7 = *(byte *)(iVar12 + (in_EAX & 0xff));
  *(byte *)param_1 = (char)*param_1 + bVar11;
  bVar7 = *(byte *)(iVar12 + (uint)bVar7);
  *(byte *)param_1 = (char)*param_1 + bVar11;
  cVar8 = *(char *)(iVar12 + (uint)bVar7);
  uVar6 = *param_1;
  *(byte *)param_1 = (char)*param_1 + bVar11;
  if (CARRY1((byte)uVar6,bVar11) || (char)*param_1 == '\0') {
    uVar6 = *param_1;
    *(byte *)param_1 = (char)*param_1 + bVar11;
    iVar9 = CONCAT31(uVar10,uRam951100d8);
    puVar1 = puVar5 + 0x1fc44036;
    uVar3 = (uint)CARRY1((byte)uVar6,bVar11);
    uVar6 = *puVar1;
    uVar2 = *puVar1;
    *puVar1 = uVar2 + (int)param_1 + uVar3;
    puVar1 = (uint *)(iVar9 + iVar12 * 8);
    uVar3 = (uint)(CARRY4(uVar6,(uint)param_1) || CARRY4(uVar2 + (int)param_1,uVar3));
    uVar6 = *puVar1;
    uVar2 = *puVar1;
    *puVar1 = uVar2 + unaff_ESI + uVar3;
    param_1[-10] = param_1[-10] + unaff_EBP +
                   (uint)(CARRY4(uVar6,unaff_ESI) || CARRY4(uVar2 + unaff_ESI,uVar3));
    *(byte *)param_1 = (char)*param_1 + bVar11;
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *param_1 = *param_1 << 0x14 | *param_1 >> 0xc;
  *puVar5 = CONCAT31(uVar10,cVar8 + -0x75);
  return;
}


