
/* ==== FUN_120086c0 @ 120086c0 ==== 
 * signature: int __cdecl FUN_120086c0(int param_1, int param_2)
 * body: 120086c0-12008854
 */

int __cdecl FUN_120086c0(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int local_38;
  undefined2 local_34;
  short local_32;
  int iStack_30;
  undefined1 auStack_2c [44];
  
  local_34 = 0x14;
  local_32 = 0;
  pcVar1 = (code *)FUN_12027370(param_2,1,1,&local_38);
  DAT_12039a9c = (*pcVar1)(local_38,2,param_1);
  pcVar1 = (code *)FUN_12027370(param_2,1,7,&iStack_30);
  iVar2 = (*pcVar1)(iStack_30,4,1,auStack_2c);
  DAT_12039a9c = iVar2;
  if (iVar2 == 0) {
    lVar4 = __ftol();
    iVar3 = (int)lVar4;
    iVar2 = FUN_12009350(param_1,(undefined2 *)(param_1 + 10),iVar3);
    if (iVar2 == 0) {
      pcVar1 = (code *)FUN_12027370(param_2,1,1,&local_38);
      DAT_12039a9c = (*pcVar1)(local_38,4,(undefined2 *)(param_1 + 10));
      iVar2 = *(int *)(param_1 + 0x18);
      do {
        iVar3 = iVar3 + -1;
      } while (*(char *)(iVar2 + iVar3) == '\r');
      if (iVar2 != 0) {
        *(undefined1 *)(iVar2 + 1 + iVar3) = 0;
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xc,&local_38);
        DAT_12039a9c = (*pcVar1)(local_38,param_1 + 0x14,*(undefined4 *)(param_1 + 0x18));
      }
      *(undefined1 *)(param_1 + 0x22) = 1;
      *(undefined4 *)(param_1 + 0x1e) = 0;
      pcVar1 = (code *)FUN_12027370(param_2,1,1,&local_38);
      DAT_12039a9c = (*pcVar1)(local_38,0xb,&local_34);
      if (local_32 == 0) {
        *(uint *)(param_1 + 0x1e) = *(uint *)(param_1 + 0x1e) & 0xfffffffd;
      }
      else {
        *(uint *)(param_1 + 0x1e) = *(uint *)(param_1 + 0x1e) | 2;
      }
      pcVar1 = (code *)FUN_12027370(param_2,1,1,&local_38);
      DAT_12039a9c = (*pcVar1)(local_38,0xc,&local_34);
      if (local_32 != 0) {
        *(uint *)(param_1 + 0x1e) = *(uint *)(param_1 + 0x1e) | 1;
        return 0;
      }
      *(uint *)(param_1 + 0x1e) = *(uint *)(param_1 + 0x1e) & 0xfffffffe;
      iVar2 = 0;
    }
  }
  return iVar2;
}


