
/* ==== FUN_1101c0e6 @ 1101c0e6 ==== 
 * signature: undefined __stdcall FUN_1101c0e6(void)
 * body: 1101c0e6-1101c0e7
 */

void FUN_1101c0e6(void)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  uint *extraout_ECX;
  int *piVar5;
  byte *pbVar6;
  uint extraout_EDX;
  char *unaff_ESI;
  byte in_AF;
  bool bVar7;
  uint *unaff_retaddr;
  
  cVar3 = func_0x0012c2ac();
  uVar1 = *extraout_ECX;
  *extraout_ECX = *extraout_ECX + extraout_EDX;
  bVar4 = cVar3 * '\x02' + CARRY4(uVar1,extraout_EDX);
  uVar1 = *extraout_ECX;
  *extraout_ECX = *extraout_ECX + extraout_EDX;
  *(byte *)extraout_ECX = (char)*extraout_ECX << 1 | (byte)*extraout_ECX >> 7;
  *(byte *)extraout_ECX = (char)*extraout_ECX << 1 | (byte)*extraout_ECX >> 7;
  *(byte *)extraout_ECX = (char)*extraout_ECX << 1 | (byte)*extraout_ECX >> 7;
  extraout_ECX[-0x19fbbf90] = extraout_ECX[-0x19fbbf90] + (int)extraout_ECX;
  *(byte *)extraout_ECX = (char)*extraout_ECX << 1 | (byte)*extraout_ECX >> 7;
  bVar7 = *unaff_ESI != cRamc0011102;
  *(byte *)extraout_ECX = (char)*extraout_ECX << 1 | (byte)*extraout_ECX >> 7;
  piVar5 = (int *)((int)extraout_ECX + -1);
  if (piVar5 == (int *)0x0 || bVar7) {
    *piVar5 = *piVar5 + extraout_EDX;
    *(byte *)piVar5 =
         *(char *)piVar5 +
         bVar4 + (9 < (bVar4 & 0xf) | in_AF) * -6 +
         (0x99 < bVar4 || CARRY4(uVar1,extraout_EDX)) * -0x60;
    pbVar6 = (byte *)((uint)piVar5 | *unaff_retaddr | *unaff_retaddr | *unaff_retaddr |
                      *unaff_retaddr | *unaff_retaddr | *unaff_retaddr | *unaff_retaddr);
    *pbVar6 = *pbVar6 | (byte)pbVar6;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


