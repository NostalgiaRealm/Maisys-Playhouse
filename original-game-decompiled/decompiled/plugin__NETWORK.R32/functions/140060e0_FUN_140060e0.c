
/* ==== FUN_140060e0 @ 140060e0 ==== 
 * signature: undefined __cdecl FUN_140060e0(undefined4 param_1, int * param_2)
 * body: 140060e0-14006489
 */

void __cdecl FUN_140060e0(undefined4 param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uStack_164;
  uint local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int local_13c;
  int iStack_138;
  undefined1 auStack_f4 [4];
  char cStack_f0;
  int iStack_d8;
  undefined1 auStack_76 [18];
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  
  iVar1 = *param_2;
  if (*(int *)(iVar1 + 0x1c) != 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_13c);
    uVar4 = 1;
    DAT_14028e48 = (*pcVar2)(local_13c,*(undefined4 *)(iVar1 + 0x1c),&local_160);
    if (local_160 != 0) {
      do {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&iStack_15c);
        DAT_14028e48 = (*pcVar2)(iStack_15c,*(undefined4 *)(iVar1 + 0x1c),uVar4,auStack_f4);
        if (cStack_f0 == '\0') {
LAB_140061b7:
          if (uVar4 == 1) goto LAB_140061bc;
        }
        else {
          if ((*(char *)(iVar1 + 0x72) == '\0') || (uVar4 != 1)) {
            FUN_1400d500((int)auStack_76);
            goto LAB_140061b7;
          }
LAB_140061bc:
          FUN_1400d250((int)auStack_76);
        }
        if (iStack_d8 != 0) {
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,3,&iStack_158);
          DAT_14028e48 = (*pcVar2)(iStack_158,iStack_d8);
        }
        if (iStack_64 != 0) {
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&iStack_154);
          DAT_14028e48 = (*pcVar2)(iStack_154,iStack_64);
        }
        if (iStack_60 != 0) {
          uStack_164 = 0;
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&iStack_150);
          DAT_14028e48 = (*pcVar2)(iStack_150,iStack_60,&uStack_164);
          uVar3 = 1;
          if (uStack_164 != 0) {
            do {
              pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&iStack_14c);
              DAT_14028e48 = (*pcVar2)(iStack_14c,iStack_60,uVar3,&local_13c);
              if (iStack_138 != 0) {
                FUN_14008dc0(iStack_138);
                pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&iStack_148);
                DAT_14028e48 = (*pcVar2)(iStack_148,iStack_138);
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 <= uStack_164);
          }
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,1,&iStack_144);
          DAT_14028e48 = (*pcVar2)(iStack_144,iStack_60);
        }
        if (iStack_5c != 0) {
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&iStack_140);
          DAT_14028e48 = (*pcVar2)(iStack_140,iStack_5c);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 <= local_160);
    }
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,1,&local_13c);
    DAT_14028e48 = (*pcVar2)(local_13c,*(undefined4 *)(iVar1 + 0x1c));
  }
  if (*(int *)(iVar1 + 0x20) != 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,1,&local_13c);
    DAT_14028e48 = (*pcVar2)(local_13c,*(undefined4 *)(iVar1 + 0x20));
  }
  FUN_1400d160();
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&local_13c);
  DAT_14028e48 = (*pcVar2)(local_13c,*param_2);
  *param_2 = 0;
  return;
}


