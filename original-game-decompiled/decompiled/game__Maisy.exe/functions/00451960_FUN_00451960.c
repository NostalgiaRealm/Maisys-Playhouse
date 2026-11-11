
/* ==== FUN_00451960 @ 00451960 ==== 
 * signature: undefined4 __thiscall FUN_00451960(void * this, char * param_1)
 * body: 00451960-00451a3a;00451a43-00451a63;00451a71-00451b91
 */

undefined4 __thiscall FUN_00451960(void *this,char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  CCmdTarget *pCVar9;
  char *pcVar10;
  CCmdTarget *pCVar11;
  char *pcVar12;
  undefined4 *unaff_FS_OFFSET;
  char local_160 [264];
  AFX_EXCEPTION_LINK local_58 [40];
  int local_30 [2];
  undefined4 *local_28;
  code *local_24;
  code *local_20;
  int local_1c;
  CCmdTarget *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_00451c0e;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_18 = this;
  uVar6 = 0xffffffff;
  local_14 = &stack0xfffffe94;
  pcVar10 = param_1;
  do {
    pcVar12 = pcVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar10 = pcVar12 + -uVar6;
  pcVar12 = local_160;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar12 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar12 = pcVar12 + 1;
  }
  iVar8 = -1;
  pcVar10 = local_160;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  sVar5 = ~(ushort)iVar8 - 2;
  do {
    if (sVar5 < 1) {
LAB_004519ec:
      FUN_0040f0e0(DAT_004d99a8,local_160);
      pCVar11 = local_18 + 0x54;
      if (*(int *)pCVar11 == 0) {
        puVar2 = FUN_00412c20(0x170);
        local_8 = 0;
        local_28 = puVar2;
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          FUN_00481280(puVar2);
          *puVar2 = &PTR_FUN_004c8970;
        }
        local_8 = 0xffffffff;
        iVar8 = *(int *)(local_18 + 0x50);
        *(undefined4 **)pCVar11 = puVar2;
        FUN_00486ab0(puVar2,iVar8,param_1,1);
      }
      uVar3 = FUN_00486ae0(*(void **)pCVar11,1);
      if ((short)uVar3 == 0) {
        local_1c = *(int *)local_18;
        local_24 = *(code **)(local_1c + 0x70);
        (*local_24)();
        local_20 = *(code **)(local_1c + 0x60);
        (*local_20)(1);
        AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_58);
        local_8 = 3;
        CCmdTarget::BeginWaitCursor(local_18);
        if (*(int *)(local_18 + 0x5a) == 0) {
          FUN_00486f00(*(void **)pCVar11,5);
          pCVar9 = local_18 + 0x50;
          (**(code **)(**(int **)(*(int *)pCVar9 + 0x48) + 0xe8))(*(int *)pCVar11);
          (**(code **)(**(int **)(*(int *)pCVar9 + 0x48) + 0x144))();
        }
        else {
          pcVar4 = (code *)FUN_0048b580(*(int *)(local_18 + 0x5a),(int)*(short *)(local_18 + 0x5e),
                                        (int)*(short *)(local_18 + 0x60),local_30);
          DAT_004e34cc = (*pcVar4)(local_30[0],*(undefined4 *)(*(int *)pCVar11 + 0x168));
        }
        local_8 = 0xffffffff;
        FUN_00451c18();
        FUN_004a7be1();
        (*local_20)(0);
        pCVar11 = local_18 + 0x50;
        FUN_00459f60(*(void **)(local_18 + 0x50));
        FUN_0045b530(*(int *)pCVar11);
        uVar3 = 1;
      }
      else {
        (**(code **)(*(int *)local_18 + 0x84))(param_1,0,0,0xf101);
        uVar3 = 0;
      }
      *unaff_FS_OFFSET = local_10;
      return uVar3;
    }
    if (local_160[sVar5] == '\\') {
      local_160[sVar5 + 1] = '\0';
      goto LAB_004519ec;
    }
    sVar5 = sVar5 + -1;
  } while( true );
}


