
/* ==== FUN_00476f50 @ 00476f50 ==== 
 * signature: undefined4 __cdecl FUN_00476f50(int param_1)
 * body: 00476f50-0047715b
 */

undefined4 __cdecl FUN_00476f50(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  char local_160 [252];
  int *local_64;
  char local_60 [20];
  short local_4c [22];
  char local_20 [20];
  int local_c;
  int *local_8;
  
  puVar2 = *(undefined4 **)(param_1 + 0x1a);
  piVar7 = *(int **)(*(int *)(param_1 + 0x16) + 8);
  if (*(short *)puVar2[1] == 10) {
    local_64 = (int *)0x0;
    iVar4 = FUN_00482c80(0,(int)piVar7,*puVar2,&local_64,local_20,local_60);
    if ((iVar4 == 0) && (local_64 != (int *)0x0)) {
      local_8 = (int *)0x0;
      local_4c[3] = 0;
      local_4c[4] = 0;
      local_4c[5] = 0;
      local_4c[6] = 0;
      local_4c[1] = 0;
      local_4c[2] = 0;
      local_4c[7] = 0;
      local_4c[8] = 0;
      local_4c[0] = 0x69;
      (**(code **)(*local_64 + 0x98))(local_20,0,local_4c);
      FUN_00455ee0(local_4c,(int *)&local_8,(int *)0x0);
      if (local_8 != (int *)0x0) {
        local_64 = local_8;
      }
      if (*(char **)(puVar2[1] + 6) != (char *)0x0) {
        uVar8 = 0xffffffff;
        pcVar10 = local_20;
        do {
          pcVar11 = pcVar10;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar10 = pcVar11 + -uVar8;
        pcVar11 = *(char **)(puVar2[1] + 6);
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
      }
      if (*(char **)(puVar2[1] + 10) != (char *)0x0) {
        uVar8 = 0xffffffff;
        pcVar10 = local_60;
        do {
          pcVar11 = pcVar10;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar10 = pcVar11 + -uVar8;
        pcVar11 = *(char **)(puVar2[1] + 10);
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
      }
    }
    piVar5 = (int *)puVar2[1];
    *(int **)((int)piVar5 + 2) = local_64;
  }
  else {
    piVar5 = FUN_0043e9b0(piVar7,&local_c,(char *)*puVar2);
    if (piVar5 != (int *)0x0) {
      *(undefined2 *)puVar2[1] = 8;
      *(int **)(puVar2[1] + 2) = piVar5;
      return (uint)piVar5 & 0xffffff00;
    }
    piVar5 = (int *)0x0;
    if (*(int **)((int)piVar7 + 0x3a) != (int *)0x0) {
      pcVar3 = *(code **)(**(int **)((int)piVar7 + 0x3a) + 0x16c);
      iVar4 = (*pcVar3)();
      piVar5 = (int *)0x0;
      if (iVar4 != 0) {
        piVar6 = (int *)(*pcVar3)();
        piVar7 = (int *)(**(code **)(*piVar6 + 0x18c))();
        piVar5 = piVar7;
        for (; piVar7 != (int *)0x0; piVar7 = *(int **)((int)piVar7 + 0x6a)) {
          if ((*(byte *)((int)piVar7 + 0x29) & 0x80) == 0) {
            (**(code **)(*piVar7 + 0x70))(local_160);
            piVar5 = (int *)FUN_0043d430(local_160,(char *)*puVar2);
            if (piVar5 == (int *)0x0) {
              *(undefined2 *)puVar2[1] = 7;
              uVar8 = puVar2[1];
              *(int **)(uVar8 + 2) = piVar7;
              return uVar8 & 0xffffff00;
            }
          }
        }
        if (piVar6 != (int *)0x0) {
          do {
            if ((*(uint *)((int)piVar6 + 0x26) & 0x80000000) == 0) {
              (**(code **)(*piVar6 + 0x70))(local_160);
              uVar8 = FUN_0043d430(local_160,(char *)*puVar2);
              if (uVar8 == 0) {
                *(undefined2 *)puVar2[1] = 7;
                uVar8 = puVar2[1];
                *(int **)(uVar8 + 2) = piVar6;
                return uVar8 & 0xffffff00;
              }
            }
            piVar6 = (int *)(**(code **)(*piVar6 + 0x16c))();
          } while (piVar6 != (int *)0x0);
          return 1;
        }
      }
    }
  }
  return CONCAT31((int3)((uint)piVar5 >> 8),1);
}


