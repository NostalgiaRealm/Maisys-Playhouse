
/* ==== FUN_12009350 @ 12009350 ==== 
 * signature: undefined4 __cdecl FUN_12009350(undefined4 param_1, undefined2 * param_2, int param_3)
 * body: 12009350-1200946a
 */

undefined4 __cdecl FUN_12009350(undefined4 param_1,undefined2 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int local_4;
  
  iVar2 = *(int *)(param_2 + 3);
  if ((iVar2 < param_3) || ((param_3 < 0x101 && (0x100 < iVar2)))) {
    if ((param_3 < 0x101) && (0x100 < iVar2)) {
      param_3 = 0x100;
    }
    piVar1 = (int *)(param_2 + 7);
    if (*piVar1 != 0) {
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
      DAT_12039a9c = (*pcVar3)(local_4,*piVar1);
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)(param_2 + 5) = 0;
      *piVar1 = 0;
    }
    *param_2 = 0x66;
    *piVar1 = 0;
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    if (0 < param_3) {
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_4);
      DAT_12039a9c = (*pcVar3)(local_4,piVar1,param_3);
      if ((undefined1 *)*piVar1 != (undefined1 *)0x0) {
        *(int *)(param_2 + 3) = param_3;
        *(undefined1 *)*piVar1 = 0;
      }
    }
    if ((DAT_12039a9c != 0) || (*piVar1 == 0)) {
      return 0x10000;
    }
    *(int *)(param_2 + 3) = param_3;
  }
  return 0;
}


