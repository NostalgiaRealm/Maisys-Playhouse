
/* ==== FUN_0045e190 @ 0045e190 ==== 
 * signature: undefined4 __cdecl FUN_0045e190(int * param_1)
 * body: 0045e190-0045e270
 */

undefined4 __cdecl FUN_0045e190(int *param_1)

{
  char cVar1;
  int iVar2;
  uint in_EAX;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char local_204 [253];
  char acStack_107 [255];
  undefined1 auStack_8 [4];
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    uVar3 = (**(code **)(iVar2 + 0x10c))();
    if ((char)uVar3 != '\0') {
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    acStack_107[3] = 0;
    (**(code **)(iVar2 + 0x118))(acStack_107 + 3);
    uVar4 = 0xffffffff;
    pcVar6 = acStack_107 + 3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    pcVar6 = s_The_segment_file_named___s__coul_004dc130;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (0xfe < ~uVar5 + (~uVar4 - 2)) {
      uVar4 = 0xffffffff;
      pcVar6 = s_The_segment_file_named___s__coul_004dc130;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      iVar2 = -(~uVar4 - 1);
      auStack_8[iVar2] = 0x2e;
      auStack_8[iVar2 + 1] = 0x2e;
      auStack_8[iVar2 + 2] = 0x2e;
      auStack_8[iVar2 + 3] = 0;
    }
    _sprintf(local_204,s_The_segment_file_named___s__coul_004dc130,acStack_107 + 3);
    in_EAX = FUN_0043c5b0(0,local_204);
  }
  return in_EAX & 0xffffff00;
}


