
/* ==== FUN_14007690 @ 14007690 ==== 
 * signature: int __cdecl FUN_14007690(int * param_1, int param_2)
 * body: 14007690-14007878
 */

int __cdecl FUN_14007690(int *param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  char local_fd;
  int local_fc;
  int iStack_f8;
  undefined4 auStack_f4 [61];
  
  local_fd = '\0';
  if (*(char *)((int)param_1 + 0x4ba) == '\0') {
    return 0x10000;
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,1,&local_fc);
  DAT_14028e48 = (*pcVar1)(local_fc,param_2 + 0x92);
  *(undefined4 *)(param_2 + 0x8e) = 0x374;
  *(undefined2 *)(param_2 + 0x98) = 0;
  *(undefined4 *)(param_2 + 0x432) = 0;
  *(undefined2 *)(param_2 + 0x42c) = 0;
  if ((*(byte *)(param_2 + 0x4c) & 0x40) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_fc);
    DAT_14028e48 = (*pcVar1)(local_fc,param_2 + 0x4e,(char *)(param_2 + 6));
    uVar2 = FUN_140070d0((char *)(param_2 + 6),(int *)(param_2 + 0x46),(short *)(param_2 + 0x4a));
    if (uVar2 == 0) {
      iVar3 = FUN_14006490(param_1,*(int *)((int)param_1 + 0x516),param_2 + 2,auStack_f4,
                           (uint *)(param_2 + 0x42e),*(int *)(param_2 + 0x406),param_2 + 0x4e,
                           param_2 + 0x40a);
    }
    else {
      iVar3 = FUN_14007880(param_1,*(int *)((int)param_1 + 0x516),(undefined4 *)(param_2 + 2),1,
                           *(undefined4 *)(param_2 + 0x92),(uint *)(param_2 + 0x42e),
                           *(int *)(param_2 + 0x406),&local_fd,param_2 + 0x40a);
      *(ushort *)(param_2 + 0x42c) = (ushort)(local_fd == '\0');
    }
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,8,&local_fc);
  DAT_14028e48 = (*pcVar1)(local_fc,*(undefined4 *)(param_2 + 0x406));
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,2,&iStack_f8);
  DAT_14028e48 = (*pcVar1)(iStack_f8,*(undefined4 *)((int)param_1 + 0x6a),param_2);
  FUN_14005e40((int)param_1,0);
  return 0;
}


