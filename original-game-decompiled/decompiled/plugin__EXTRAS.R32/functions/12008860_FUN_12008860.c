
/* ==== FUN_12008860 @ 12008860 ==== 
 * signature: undefined4 __cdecl FUN_12008860(undefined4 param_1, int param_2, undefined4 param_3, short param_4, undefined1 * param_5, undefined4 param_6)
 * body: 12008860-120089b7
 */

undefined4 __cdecl
FUN_12008860(undefined4 param_1,int param_2,undefined4 param_3,short param_4,undefined1 *param_5,
            undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  int local_144;
  undefined2 uStack_140;
  undefined4 uStack_13e;
  undefined4 uStack_13a;
  undefined4 uStack_136;
  undefined1 *puStack_132;
  undefined1 local_12c [44];
  undefined1 auStack_100 [256];
  
  *param_5 = 1;
  if (param_4 == 4) {
    pcVar1 = (code *)FUN_12027370(param_2,1,7,&local_144);
    DAT_12039a9c = (*pcVar1)(local_144,4,1,local_12c);
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
    if (iVar2 != 0) {
      if (iVar2 < 0x100) {
        puStack_132 = auStack_100;
        uStack_13e = param_1;
        uStack_136 = 0;
        uStack_13a = 0x100;
        uStack_140 = 0x66;
        pcVar1 = (code *)FUN_12027370(param_2,1,1,&local_144);
        DAT_12039a9c = (*pcVar1)(local_144,4,&uStack_140);
        do {
          iVar2 = iVar2 + -1;
        } while (puStack_132[iVar2] == '\r');
        if (puStack_132[iVar2] != ':') {
          return 0;
        }
        *param_5 = 0;
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0,&local_144);
        pcVar4 = s_Incorrect_syntax_for_file_path__120372d8;
      }
      else {
        *param_5 = 0;
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0,&local_144);
        pcVar4 = s_The_file_path_cannot_exceed_255_c_120372f8;
      }
      DAT_12039a9c = (*pcVar1)(local_144,param_6,pcVar4);
    }
  }
  return 0;
}


