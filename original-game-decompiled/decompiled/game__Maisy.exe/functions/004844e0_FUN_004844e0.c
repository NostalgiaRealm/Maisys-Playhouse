
/* ==== FUN_004844e0 @ 004844e0 ==== 
 * signature: undefined4 __cdecl FUN_004844e0(undefined4 param_1, ushort param_2, undefined4 * param_3)
 * body: 004844e0-004845aa
 */

undefined4 __cdecl FUN_004844e0(undefined4 param_1,ushort param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *local_8;
  
  puVar6 = param_3;
  for (iVar3 = 0x4b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  iVar3 = FUN_00438840();
  if (iVar3 <= (short)param_2) {
    return 0x10000;
  }
  iVar3 = FUN_00435900(DAT_004dae3c,param_2,(int *)&local_8);
  if (iVar3 == 0) {
    FUN_004374c0(param_3,local_8 + 5);
    FUN_004374c0((undefined4 *)((int)param_3 + 0x11),local_8);
    *(undefined2 *)((int)param_3 + 0x22) = *(undefined2 *)(local_8 + 0x14);
    *(undefined2 *)(param_3 + 9) = *(undefined2 *)((int)local_8 + 0x46);
    *(undefined4 *)((int)param_3 + 0x26) = local_8[0x1d];
    *(short *)((int)param_3 + 0x2a) = *(short *)(local_8 + 0x13);
    pcVar2 = (char *)FUN_004371b0(DAT_004dae3c,*(short *)(local_8 + 0x13));
    uVar4 = 0xffffffff;
    do {
      pcVar7 = pcVar2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar2 = pcVar7 + -uVar4;
    pcVar7 = (char *)(param_3 + 0xb);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  return 0;
}


