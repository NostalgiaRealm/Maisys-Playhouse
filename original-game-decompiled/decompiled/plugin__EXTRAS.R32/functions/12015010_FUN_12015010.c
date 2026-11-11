
/* ==== FUN_12015010 @ 12015010 ==== 
 * signature: int __cdecl FUN_12015010(int param_1, undefined4 param_2)
 * body: 12015010-120151bf
 */

int __cdecl FUN_12015010(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  int local_30;
  undefined2 local_2c [3];
  int local_26;
  char *local_1e;
  
  local_2c[0] = 0x66;
  local_26 = 0;
  local_1e = (char *)0x0;
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_30);
  iVar4 = (*pcVar3)(local_30,param_1,param_2,local_2c);
  DAT_12039a9c = iVar4;
  if (iVar4 == 0) {
    iVar4 = 0;
    pcVar5 = local_1e;
    do {
      cVar2 = *pcVar5;
      if (cVar2 == '\0') goto LAB_12015086;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\r');
    iVar4 = 1;
LAB_12015086:
    piVar1 = (int *)(param_1 + 0x34);
    if (*piVar1 != 0) {
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_30);
      DAT_12039a9c = (*pcVar3)(local_30,*piVar1);
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *piVar1 = 0;
    }
    *piVar1 = 0;
    *(undefined2 *)(param_1 + 0x26) = 0x66;
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (0 < local_26 + iVar4) {
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_30);
      DAT_12039a9c = (*pcVar3)(local_30,piVar1,local_26 + iVar4);
      if ((undefined1 *)*piVar1 != (undefined1 *)0x0) {
        *(int *)(param_1 + 0x2c) = local_26 + iVar4;
        *(undefined1 *)*piVar1 = 0;
      }
    }
    FUN_120273e0(0,(undefined2 *)(param_1 + 0x26),(int)local_2c);
    if (iVar4 != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x30) + *piVar1) = 10;
      iVar4 = *(int *)(param_1 + 0x30) + 1;
      *(int *)(param_1 + 0x30) = iVar4;
      *(undefined1 *)(*piVar1 + iVar4) = 0;
    }
    if (local_1e != (char *)0x0) {
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_30);
      DAT_12039a9c = (*pcVar3)(local_30,local_1e);
    }
    iVar4 = 0;
  }
  return iVar4;
}


