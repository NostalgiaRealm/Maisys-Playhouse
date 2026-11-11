
/* ==== FUN_12014640 @ 12014640 ==== 
 * signature: uint __cdecl FUN_12014640(int param_1, short * param_2)
 * body: 12014640-12014a5d
 */

uint __cdecl FUN_12014640(int param_1,short *param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_134;
  int local_130;
  DWORD DStack_12c;
  int local_128;
  uint local_124;
  undefined4 local_120;
  int iStack_11c;
  int iStack_118;
  DWORD local_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  int local_104;
  char acStack_100 [256];
  
  local_124 = 0;
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    if (*(int *)(param_1 + 0x30) < 1) {
      local_124 = FUN_12014a80(param_1,param_2);
    }
    else {
      local_104 = *(int *)(param_1 + 0x68);
      local_134 = 0;
      local_110 = 0;
      local_114 = 0;
      uVar2 = FUN_12004820(param_1,&local_114);
      if ((uVar2 == 0) && (*(DWORD *)(param_1 + 0x68) == local_114)) {
        local_124 = 0xa0006;
      }
      else {
        local_128 = 8;
        pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 8),1,2,&local_130);
        iVar6 = 0;
        DAT_12039a9c = (*pcVar3)(local_130,0,&local_120);
        *(undefined1 *)(param_1 + 0x72) = 0;
        do {
          DStack_12c = 0x100;
          FUN_12004730(param_1,&DStack_12c,acStack_100);
          if (DStack_12c == 0) {
            local_110 = 1;
            break;
          }
          iVar5 = 0;
          if (0 < (int)DStack_12c) {
            do {
              if (iVar6 != 0) break;
              iVar4 = 0;
              if (0 < *(int *)(param_1 + 0x30)) {
                do {
                  if (iVar6 != 0) goto LAB_12014763;
                  if (*(char *)(*(int *)(param_1 + 0x34) + iVar4) == acStack_100[iVar5]) {
                    iVar6 = 1;
                    *(char *)(param_1 + 0x72) = acStack_100[iVar5];
                  }
                  else {
                    iVar4 = iVar4 + 1;
                  }
                } while (iVar4 < *(int *)(param_1 + 0x30));
              }
              if (iVar6 == 0) {
                iVar5 = iVar5 + 1;
              }
LAB_12014763:
            } while (iVar5 < (int)DStack_12c);
          }
          if (iVar5 != 0) {
            pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + local_128),1,4,&local_130);
            DAT_12039a9c = (*pcVar3)(local_130,local_120,local_134 + iVar5);
            pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + local_128),1,6,&iStack_11c);
            DAT_12039a9c = (*pcVar3)(iStack_11c,local_120,&iStack_118);
            pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x15,&iStack_10c);
            DAT_12039a9c = (*pcVar3)(iStack_10c,iStack_118 + local_134,acStack_100,iVar5);
            pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + local_128),1,7,&iStack_108);
            DAT_12039a9c = (*pcVar3)(iStack_108,local_120);
            local_134 = local_134 + iVar5;
          }
        } while (iVar6 == 0);
        *(int *)(param_1 + 0x68) = local_104 + iVar6 + local_134;
        if (*(char *)(param_1 + 0x72) == '\r') {
          DStack_12c = 1;
          FUN_12004730(param_1,&DStack_12c,acStack_100);
          if ((DStack_12c == 1) && (acStack_100[0] != '\n')) {
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
          }
        }
        else if (*(char *)(param_1 + 0x72) == '\n') {
          *(undefined1 *)(param_1 + 0x72) = 0xd;
        }
        param_2[1] = -1;
        param_2[2] = -1;
        *param_2 = 0x66;
        if (local_134 == 0) {
          param_2[3] = 0;
          param_2[4] = 0;
          param_2[5] = 0;
          param_2[6] = 0;
          param_2[7] = 0;
          param_2[8] = 0;
        }
        else {
          piVar1 = (int *)(param_2 + 7);
          param_2[3] = 0;
          param_2[4] = 0;
          iVar6 = local_134 + 1;
          *piVar1 = 0;
          param_2[5] = 0;
          param_2[6] = 0;
          if (0 < iVar6) {
            pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_130);
            DAT_12039a9c = (*pcVar3)(local_130,piVar1,iVar6);
            if ((undefined1 *)*piVar1 != (undefined1 *)0x0) {
              *(int *)(param_2 + 3) = iVar6;
              *(undefined1 *)*piVar1 = 0;
            }
          }
          pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + local_128),1,6,&local_130);
          DAT_12039a9c = (*pcVar3)(local_130,local_120,&iStack_118);
          pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x15,&iStack_11c);
          DAT_12039a9c = (*pcVar3)(iStack_11c,*piVar1,iStack_118,local_134);
          *(undefined1 *)(*piVar1 + local_134) = 0;
          *(int *)(param_2 + 5) = local_134;
        }
        pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + local_128),1,3,&local_130);
        DAT_12039a9c = (*pcVar3)(local_130,local_120);
        if ((local_110 != 0) && (local_134 == 0)) {
          local_124 = 0xa0006;
        }
      }
    }
  }
  else {
    local_124 = 0xa0003;
  }
  if (((local_124 & 0xffff0000) == 0xa0000) && (*param_2 != 0x66)) {
    *param_2 = 0x66;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[1] = -1;
    param_2[2] = -1;
    param_2[7] = 0;
    param_2[8] = 0;
  }
  return local_124;
}


