
/* ==== FUN_00435b30 @ 00435b30 ==== 
 * signature: undefined __stdcall FUN_00435b30(char * param_1, short * param_2, short * param_3)
 * body: 00435b30-00435c8e
 */

void FUN_00435b30(char *param_1,short *param_2,short *param_3)

{
  uint uVar1;
  char *pcVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 local_2a4 [100];
  char local_114 [256];
  int local_14;
  undefined4 *local_10;
  void *local_c;
  char local_5;
  
  iVar6 = 0;
  iVar8 = 1;
  uVar1 = FUN_004375c0(param_1,1,local_114,&local_5);
  if ((char)uVar1 != '\0') {
    puVar4 = local_2a4;
    do {
      puVar5 = puVar4;
      if (local_5 != '\0') {
        puVar5 = puVar4 + 1;
        iVar6 = iVar6 + 1;
        pcVar2 = FUN_0043f650(local_114);
        *puVar4 = pcVar2;
      }
      iVar8 = iVar8 + 1;
      uVar1 = FUN_004375c0(param_1,iVar8,local_114,&local_5);
      puVar4 = puVar5;
    } while ((char)uVar1 != '\0');
  }
  if (param_2 != (short *)0x0) {
    *param_2 = (short)*(undefined4 *)((int)local_c + 0x7236);
  }
  if (0 < iVar6) {
    local_10 = local_2a4;
    local_14 = iVar6;
    do {
      sVar3 = (short)*(int *)((int)local_c + 0x7236);
      iVar8 = (int)sVar3;
      *(int *)((int)local_c + 0x7236) = *(int *)((int)local_c + 0x7236) + 1;
      pcVar2 = (char *)*local_10;
      *(char **)((int)local_c + iVar8 * 0x124 + 0x2c) = pcVar2;
      puVar5 = (undefined4 *)((int)local_c + iVar8 * 0x124 + 0x26);
      pcVar7 = param_1;
      puVar4 = (undefined4 *)((int)local_c + iVar8 * 0x124 + 0x30);
      for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar4 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        puVar4 = puVar4 + 1;
      }
      *(short *)((int)local_c + iVar8 * 0x124 + 0x2a) = sVar3;
      pcVar2 = FUN_0043f650(pcVar2);
      *puVar5 = pcVar2;
      FUN_004375b0();
      FUN_00435ad0(local_c,(int)puVar5);
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  if ((((param_3 != (short *)0x0) &&
       (*param_3 = (short)*(undefined4 *)((int)local_c + 0x7236), param_3 != (short *)0x0)) &&
      (param_2 != (short *)0x0)) && (iVar6 = (int)*param_2, iVar6 < *param_3)) {
    iVar8 = (int)local_c + iVar6 * 0x124 + 0x26;
    do {
      FUN_00437b90(local_c,iVar8);
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x124;
    } while (iVar6 < *param_3);
  }
  FUN_00436ff0(param_1);
  return;
}


