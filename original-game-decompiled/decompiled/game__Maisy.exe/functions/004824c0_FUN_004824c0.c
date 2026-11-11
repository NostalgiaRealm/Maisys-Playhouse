
/* ==== FUN_004824c0 @ 004824c0 ==== 
 * signature: undefined4 __stdcall FUN_004824c0(char * param_1, undefined4 param_2, undefined4 param_3)
 * body: 004824c0-004825ea
 */

undefined4 FUN_004824c0(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  pcVar3 = (char *)FUN_00482020(param_1);
  cVar2 = FUN_00482040(pcVar3);
  if (cVar2 == '\0') {
    if (*(int *)(local_8 + 0x4a) != -1) {
      iVar7 = FUN_00430190(local_8);
      iVar7 = iVar7 + 0x1a + *(int *)(local_8 + 0x4a) * 0x46;
      FUN_004301f0(local_8);
      pcVar6 = (code *)FUN_0048b580(*(int *)(iVar7 + 2),(int)*(short *)(iVar7 + 6),
                                    (int)*(short *)(iVar7 + 8),(int *)&local_c);
      DAT_004e34cc = (*pcVar6)(local_c,param_3,pcVar3,param_2);
      return DAT_004e34cc;
    }
  }
  else {
    local_10 = *(int *)(local_8 + 0x26);
    iVar7 = 0;
    puVar4 = (undefined4 *)FUN_00430190(local_8);
    local_c = puVar4;
    if (0 < local_10) {
      do {
        uVar5 = FUN_00482070((int)pcVar3,(char *)*puVar4);
        puVar1 = local_c;
        if ((char)uVar5 != '\0') {
          iVar7 = iVar7 * 0x46;
          FUN_004301f0(local_8);
          pcVar6 = (code *)FUN_0048b580(*(int *)((int)puVar1 + iVar7 + 0x1c),
                                        (int)*(short *)((int)puVar1 + iVar7 + 0x20),
                                        (int)*(short *)((int)puVar1 + iVar7 + 0x22),&local_10);
          DAT_004e34cc = (*pcVar6)(local_10,param_3,pcVar3,param_2);
          return DAT_004e34cc;
        }
        puVar4 = (undefined4 *)((int)puVar4 + 0x46);
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_10);
    }
    FUN_004301f0(local_8);
  }
  return 0x10000;
}


