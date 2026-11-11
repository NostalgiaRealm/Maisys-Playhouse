
/* ==== FUN_14006cf0 @ 14006cf0 ==== 
 * signature: int __cdecl FUN_14006cf0(undefined4 param_1, int param_2, short param_3, int param_4)
 * body: 14006cf0-14006f94
 */

int __cdecl FUN_14006cf0(undefined4 param_1,int param_2,short param_3,int param_4)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  short sVar4;
  short sStack_122;
  int iStack_120;
  uint uStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  int local_10c;
  int iStack_108;
  uint local_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  undefined1 auStack_f4 [28];
  undefined4 uStack_d8;
  int iStack_d4;
  undefined1 auStack_76 [118];
  
  local_10c = 0x30;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_118);
  DAT_14028e48 = (*pcVar2)(local_118,*(undefined4 *)(param_2 + 0x1c),&local_104);
  uStack_11c = 2;
  sStack_122 = param_3;
  if (1 < local_104) {
    do {
      if (sStack_122 < 1) {
        return 0;
      }
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,6,&local_118);
      sVar4 = 0;
      DAT_14028e48 = (*pcVar2)(local_118,*(undefined4 *)(param_2 + 0x1c),uStack_11c,auStack_f4);
      if (0 < param_3) {
        do {
          bVar1 = FUN_1400d520((int)auStack_76,(int *)(param_4 + sVar4 * 4));
          if (bVar1) {
            sStack_122 = sStack_122 + -1;
            break;
          }
          sVar4 = sVar4 + 1;
        } while (sVar4 < param_3);
        if (sVar4 < param_3) {
          iStack_120 = iStack_d4;
          iVar3 = FUN_1400d2f0(auStack_76,uStack_d8,&iStack_120,&iStack_108);
          if (iVar3 != 0) {
            FUN_14005dd0(param_1,param_2);
            return 0;
          }
          iStack_d4 = iStack_120;
          iStack_120 = iStack_108;
          if (iStack_108 == 0) {
            return 0;
          }
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&iStack_100);
          DAT_14028e48 = (*pcVar2)(iStack_100,uStack_d8,&iStack_114);
          if (DAT_14028e48 != 0) {
            return DAT_14028e48;
          }
          *(undefined1 *)(iStack_114 + iStack_120) = 0;
          iVar3 = 0;
          while ((0 < iStack_120 && (iVar3 == 0))) {
            iStack_110 = iStack_120;
            iVar3 = FUN_14006fa0(param_1,param_2,(int)auStack_f4,iStack_114,&iStack_110);
            iStack_114 = iStack_114 + iStack_110;
            iStack_120 = iStack_120 - iStack_110;
          }
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_fc);
          DAT_14028e48 = (*pcVar2)(iStack_fc,uStack_d8);
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,7,&iStack_f8);
          DAT_14028e48 = (*pcVar2)(iStack_f8,*(undefined4 *)(param_2 + 0x1c),uStack_11c,auStack_f4);
        }
      }
      uStack_11c = uStack_11c + 1;
    } while (uStack_11c <= local_104);
  }
  return 0;
}


