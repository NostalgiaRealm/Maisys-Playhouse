
/* ==== FUN_14008050 @ 14008050 ==== 
 * signature: undefined4 __cdecl FUN_14008050(int param_1, short param_2, undefined1 * param_3, int param_4, char param_5)
 * body: 14008050-14008370
 */

undefined4 __cdecl
FUN_14008050(int param_1,short param_2,undefined1 *param_3,int param_4,char param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int local_16c;
  int iStack_168;
  int local_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  undefined1 local_140 [256];
  undefined1 auStack_40 [64];
  
  FUN_14012660(param_2,local_140);
  if (param_4 == 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_164);
    DAT_14028e48 = (*pcVar1)(local_164,&local_16c,local_140);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,0,&iStack_160);
    DAT_14028e48 = (*pcVar1)(iStack_160,local_16c + 1,&iStack_168);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x15,&iStack_15c);
    param_3 = local_140;
    iStack_148 = iStack_15c;
    iVar2 = iStack_168;
    iVar3 = local_16c;
  }
  else {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_164);
    DAT_14028e48 = (*pcVar1)(local_164,local_140,s_Content_Type__text_plain_1402639c);
    FUN_14008990(auStack_40,&DAT_14026398);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_160);
    DAT_14028e48 = (*pcVar1)(iStack_160,local_140,s_Content_Length__14026384);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_15c);
    DAT_14028e48 = (*pcVar1)(iStack_15c,local_140,auStack_40);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_158);
    DAT_14028e48 = (*pcVar1)(iStack_158,local_140,&DAT_1402637c);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_154);
    DAT_14028e48 = (*pcVar1)(iStack_154,&local_16c,local_140);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,0,&iStack_150);
    DAT_14028e48 = (*pcVar1)(iStack_150,local_16c + param_4 + 1,&iStack_168);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x15,&iStack_14c);
    DAT_14028e48 = (*pcVar1)(iStack_14c,iStack_168,local_140,local_16c);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x15,&iStack_148);
    iVar2 = iStack_168 + local_16c;
    iVar3 = param_4;
  }
  DAT_14028e48 = (*pcVar1)(iStack_148,iVar2,param_3,iVar3);
  FUN_1400d4d0(param_1 + 0x7e,iStack_168,local_16c + param_4,&uStack_144);
  if (param_5 != '\0') {
    FUN_14007e60(param_1);
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&local_164);
  DAT_14028e48 = (*pcVar1)(local_164,iStack_168);
  return 0;
}


