
/* ==== FUN_14004070 @ 14004070 ==== 
 * signature: undefined4 __cdecl FUN_14004070(int * param_1)
 * body: 14004070-1400429d
 */

undefined4 __cdecl FUN_14004070(int *param_1)

{
  int *piVar1;
  short *psVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_444;
  int iStack_440;
  int iStack_43c;
  int local_438 [257];
  int iStack_32;
  
  FUN_14004b30(param_1);
  FUN_14004760((int)param_1);
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 1;
    FUN_14005eb0((int)param_1,(short)iVar5);
    iVar5 = iVar6;
  } while (iVar6 < 5);
  if (*(int *)((int)param_1 + 0x6e) != 0) {
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,1,local_438);
    DAT_14028e48 = (*pcVar3)(local_438[0],*(undefined4 *)((int)param_1 + 0x6e));
  }
  if (*(int *)((int)param_1 + 0x6a) != 0) {
    local_444 = 0;
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,local_438);
    DAT_14028e48 = (*pcVar3)(local_438[0],*(undefined4 *)((int)param_1 + 0x6a),&local_444);
    uVar4 = 1;
    if (local_444 != 0) {
      do {
        pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,3,&iStack_440);
        DAT_14028e48 = (*pcVar3)(iStack_440,*(undefined4 *)((int)param_1 + 0x6a),local_438);
        if (DAT_14028e48 == 0) {
          if (iStack_32 != 0) {
            FUN_14008dc0(iStack_32);
            pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&iStack_43c);
            DAT_14028e48 = (*pcVar3)(iStack_43c,iStack_32);
          }
          iStack_32 = 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 <= local_444);
    }
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,1,local_438);
    DAT_14028e48 = (*pcVar3)(local_438[0],*(undefined4 *)((int)param_1 + 0x6a));
  }
  piVar1 = (int *)((int)param_1 + 0x516);
  *(undefined1 *)((int)param_1 + 0x4de) = 0;
  psVar2 = (short *)*piVar1;
  if (psVar2 == (short *)0x0) {
    return 0;
  }
  *psVar2 = *psVar2 + -1;
  if (*(short *)*piVar1 == 0) {
    if ((char)((short *)*piVar1)[0x39] != '\0') {
      DAT_14026034 = 0;
    }
    FUN_140060e0(param_1,piVar1);
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1f,local_438);
    DAT_14028e48 = (*pcVar3)(local_438[0],param_1,param_1);
    if (DAT_14028e48 != 0) {
      return 0;
    }
  }
  return 0;
}


