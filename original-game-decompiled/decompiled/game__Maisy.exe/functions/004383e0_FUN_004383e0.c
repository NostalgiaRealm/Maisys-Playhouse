
/* ==== FUN_004383e0 @ 004383e0 ==== 
 * signature: undefined __stdcall FUN_004383e0(int * param_1, undefined4 param_2, undefined4 * param_3)
 * body: 004383e0-00438837
 */

void FUN_004383e0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  CHAR local_4cc [512];
  char local_2cc [512];
  char local_cc [16];
  char local_bc [16];
  char local_ac [16];
  char local_9c [16];
  char local_8c [12];
  char local_80 [16];
  undefined1 local_70;
  undefined1 local_6c;
  char local_68 [16];
  undefined1 local_58;
  char local_54;
  undefined4 local_53;
  ushort local_42;
  undefined4 local_40;
  short local_3c;
  int local_36;
  short local_32;
  char local_30 [2];
  int local_2e [3];
  undefined1 local_20;
  short local_1d;
  void *local_18;
  uint local_14;
  int local_10;
  int local_c;
  short local_6;
  
  FUN_00486dd0(param_1,&local_40,param_3,0x10);
  if (local_3c != 1) {
    if (local_3c != 0) {
      FUN_0043c5b0(0x10,(char *)0x0);
      FUN_004a3538();
      return;
    }
    local_10 = 0;
    local_c = *param_1;
    (**(code **)(local_c + 0x144))(&local_10);
    local_6 = 0;
    if (0 < local_32) {
      do {
        FUN_00486d60(param_1,local_30 + 1,0x14);
        if (local_30[1] == '\0') {
          FUN_00486d60(param_1,local_bc,0x30);
        }
        iVar2 = FUN_00436c80(local_18,(int *)(local_30 + 2));
        if ((iVar2 == 0) || (*(short *)(iVar2 + 0x46) < local_1d)) {
          if (local_30[1] == '\0') {
            _strncpy(local_80,local_ac,0x10);
            iVar3 = -1;
            local_70 = 0;
            pcVar5 = local_80;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
            local_14 = 0xffffffff;
            pcVar5 = &DAT_004dafd8;
            do {
              pcVar6 = pcVar5;
              if (local_14 == 0) break;
              local_14 = local_14 - 1;
              pcVar6 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar6;
            } while (cVar1 != '\0');
            local_14 = ~local_14;
            pcVar5 = pcVar6 + -local_14;
            pcVar6 = local_80 + (short)(~(ushort)iVar3 - 1);
            for (uVar4 = local_14 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar6 = pcVar6 + 4;
            }
            for (uVar4 = local_14 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *pcVar6 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar6 = pcVar6 + 1;
            }
            _strncpy(local_68,local_bc,0x10);
            local_58 = 0;
            _strncpy((char *)((int)&local_53 + 2),local_9c,0x10);
            local_42 = local_42 & 0xff;
            iVar3 = FUN_004bafca();
            local_2cc[0] = '\0';
            if (iVar2 == 0) {
              LoadStringA(*(HINSTANCE *)(iVar3 + 8),0x420,local_4cc,0x200);
              _sprintf(local_2cc,local_4cc,local_80,(int)local_1d,local_68,(int)&local_53 + 2);
            }
            else {
              LoadStringA(*(HINSTANCE *)(iVar3 + 8),0x421,local_4cc,0x200);
              _sprintf(local_2cc,local_4cc,local_80,local_68,(int)&local_53 + 2);
            }
            AfxMessageBox(local_2cc,0x10,0);
          }
          else {
            FUN_0043c5b0(0x10,(char *)0x0);
          }
          FUN_004a3538();
        }
        else if (local_30[1] == '\0') {
          _strncpy((char *)(iVar2 + 0x25),local_bc,0x10);
          *(undefined1 *)(iVar2 + 0x35) = 0;
        }
        local_6 = local_6 + 1;
      } while (local_6 < local_32);
    }
    (**(code **)(local_c + 0x148))(local_36 + -0x10 + local_10);
    return;
  }
  local_10 = 0;
  local_c = *param_1;
  (**(code **)(local_c + 0x144))(&local_10);
  local_6 = 0;
  if (0 < local_32) {
    do {
      FUN_00486d60(param_1,&local_54,0x14);
      if (local_54 == '\0') {
        FUN_00486d60(param_1,local_cc,0x40);
      }
      iVar2 = FUN_00436c80(local_18,&local_53);
      if ((iVar2 == 0) || (*(short *)(iVar2 + 0x46) < (short)local_42)) {
        if (local_54 == '\0') {
          _strncpy(local_30,local_ac,0x10);
          iVar3 = -1;
          local_20 = 0;
          pcVar5 = local_30;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          local_14 = 0xffffffff;
          pcVar5 = &DAT_004dafd8;
          do {
            pcVar6 = pcVar5;
            if (local_14 == 0) break;
            local_14 = local_14 - 1;
            pcVar6 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar6;
          } while (cVar1 != '\0');
          local_14 = ~local_14;
          pcVar5 = pcVar6 + -local_14;
          pcVar6 = local_30 + (short)(~(ushort)iVar3 - 1);
          for (uVar4 = local_14 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar6 = pcVar6 + 4;
          }
          for (uVar4 = local_14 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar6 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar6 + 1;
          }
          _strncpy(local_8c,local_cc,0x20);
          local_6c = 0;
          _strncpy(local_68,local_9c,0x10);
          local_58 = 0;
          iVar3 = FUN_004bafca();
          local_2cc[0] = '\0';
          if (iVar2 == 0) {
            LoadStringA(*(HINSTANCE *)(iVar3 + 8),0x420,local_4cc,0x200);
            _sprintf(local_2cc,local_4cc,local_30,(int)(short)local_42,local_8c,local_68);
          }
          else {
            LoadStringA(*(HINSTANCE *)(iVar3 + 8),0x421,local_4cc,0x200);
            _sprintf(local_2cc,local_4cc,local_30,local_8c,local_68);
          }
          AfxMessageBox(local_2cc,0x10,0);
        }
        else {
          FUN_0043c5b0(0x10,(char *)0x0);
        }
        FUN_004a3538();
      }
      else if (local_54 == '\0') {
        _strncpy((char *)(iVar2 + 0x25),local_cc,0x20);
        *(undefined1 *)(iVar2 + 0x45) = 0;
      }
      local_6 = local_6 + 1;
    } while (local_6 < local_32);
  }
  (**(code **)(local_c + 0x148))(local_10 + -0x10 + local_36);
  return;
}


