
/* ==== FUN_14008380 @ 14008380 ==== 
 * signature: undefined4 __cdecl FUN_14008380(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5)
 * body: 14008380-1400879a
 */

undefined4 __cdecl
FUN_14008380(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iStack_154;
  undefined1 uStack_150;
  int iStack_14c;
  undefined1 *puStack_148;
  undefined1 local_144 [6];
  char *pcStack_13e;
  short sStack_13a;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  short sStack_12c;
  undefined2 uStack_12a;
  undefined2 uStack_128;
  undefined4 uStack_126;
  int iStack_122;
  int *piStack_11e;
  int local_100 [64];
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,local_100);
  DAT_14028e48 = (*pcVar1)(local_100[0],param_2,1,local_144);
  if (pcStack_13e != (char *)0x0) {
    pcStack_13e[sStack_13a] = '\0';
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,local_100);
    DAT_14028e48 = (*pcVar1)(local_100[0],&iStack_130,pcStack_13e,&DAT_140263d8);
    if (iStack_130 == 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,local_100);
      DAT_14028e48 = (*pcVar1)(local_100[0],param_2,2,local_144);
      if (pcStack_13e != (char *)0x0) {
        iStack_134 = 0;
        pcStack_13e[sStack_13a] = '\0';
        uVar2 = FUN_14015050(&puStack_148,pcStack_13e,0x140263d4,0);
        if ((char)uVar2 == '\0') {
          puStack_148 = (undefined1 *)0x0;
        }
        else {
          *puStack_148 = 0;
          puStack_148 = puStack_148 + 1;
        }
        piVar3 = (int *)(pcStack_13e + 2);
        if (pcStack_13e[1] != '?') {
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&iStack_154);
          DAT_14028e48 = (*pcVar1)(iStack_154,local_100,s_File____140263cc);
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_14c);
          DAT_14028e48 = (*pcVar1)(iStack_14c,local_100,pcStack_13e + 1);
          piVar3 = local_100;
        }
        if (puStack_148 == (undefined1 *)0x0) {
          sStack_12c = 0x66;
          uStack_12a = 0xffff;
          uStack_128 = 0xffff;
          uStack_126 = 0;
          iStack_122 = 0;
          piStack_11e = (int *)0x0;
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x54),1,2,&iStack_154);
          DAT_14028e48 = (*pcVar1)(iStack_154,*param_1,piVar3,&sStack_12c);
          piVar3 = (int *)0x0;
          if ((sStack_12c == 0x66) && (piStack_11e != (int *)0x0)) {
            iStack_134 = iStack_122;
            piVar3 = piStack_11e;
          }
        }
        else {
          sStack_12c = 0;
          iStack_154 = DAT_140263c4;
          uStack_150 = DAT_140263c8;
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,2,&iStack_14c);
          DAT_14028e48 = (*pcVar1)(iStack_14c,&sStack_12c,puStack_148);
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x54),1,3,&iStack_138);
          DAT_14028e48 = (*pcVar1)(iStack_138,*param_1,piVar3,&sStack_12c);
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_14c);
          DAT_14028e48 = (*pcVar1)(iStack_14c,param_1,&sStack_12c);
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_138);
          DAT_14028e48 = (*pcVar1)(iStack_138,&iStack_134,&iStack_154);
          piVar3 = &iStack_154;
        }
        if (param_5 != 0) {
          iVar4 = iStack_134;
          if (piVar3 == (int *)0x0) {
            piVar3 = (int *)0x0;
            iVar4 = 0;
          }
          FUN_14008050(param_5,200,(undefined1 *)piVar3,iVar4,'\x01');
        }
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_154);
        DAT_14028e48 = (*pcVar1)(iStack_154,param_1,&sStack_12c);
      }
    }
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,local_100);
    DAT_14028e48 = (*pcVar1)(local_100[0],&iStack_130,pcStack_13e,&DAT_140263c0);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,(int *)&sStack_12c);
    DAT_14028e48 = (*pcVar1)(CONCAT22(uStack_12a,sStack_12c),&iStack_130,pcStack_13e,&DAT_140263b8);
  }
  return 0;
}


