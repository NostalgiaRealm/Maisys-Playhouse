
/* ==== FUN_12024060 @ 12024060 ==== 
 * signature: int __cdecl FUN_12024060(int param_1)
 * body: 12024060-120241ac
 */

int __cdecl FUN_12024060(int param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint local_1c;
  undefined4 local_18;
  undefined2 uStack_14;
  undefined4 uStack_12;
  int iStack_e;
  int iStack_a;
  int iStack_4;
  
  iVar4 = 0;
  local_1c = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,&local_18);
    DAT_12039a9c = (*pcVar1)(CONCAT22(local_18._2_2_,(short)local_18),
                             *(undefined4 *)(param_1 + 0x10),&local_1c);
  }
  switch(*(undefined2 *)(param_1 + 0xe)) {
  case 1:
  case 0xf:
    iVar4 = local_1c * 0xb;
    break;
  case 10:
    iVar4 = local_1c * 0xf;
    break;
  case 0x10:
    iVar4 = local_1c * 0x15;
    break;
  case 0x14:
    iVar4 = local_1c * 6;
    break;
  case 0x66:
  case 0x69:
    uVar3 = 1;
    if (local_1c != 0) {
      do {
        local_18._0_2_ = 0x66;
        local_18._2_2_ = 0xffff;
        uStack_14 = 0xffff;
        uStack_12 = 0;
        iStack_e = 0;
        iStack_a = 0;
        iVar2 = FUN_120194d0(param_1,*(int *)(param_1 + 0x10),uVar3,(short *)&local_18);
        if (iVar2 == 0) {
          iVar4 = iVar4 + iStack_e + 1;
        }
        if (iStack_a != 0) {
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&iStack_4);
          DAT_12039a9c = (*pcVar1)(iStack_4,iStack_a);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 <= local_1c);
    }
  }
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  return iVar4;
}


