
/* ==== FUN_12017f30 @ 12017f30 ==== 
 * signature: undefined4 __cdecl FUN_12017f30(int param_1, char * param_2, int * param_3)
 * body: 12017f30-120181c1
 */

undefined4 __cdecl FUN_12017f30(int param_1,char *param_2,int *param_3)

{
  code *pcVar1;
  int iStack_20;
  int iStack_1c;
  int local_18;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined4 uStack_e;
  int iStack_a;
  int iStack_6;
  
  if (*param_2 != '/') {
    if ((*param_2 == '.') && ((param_2[1] == '/' || ((param_2[1] == '.' && (param_2[2] == '/'))))))
    {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xc,(int *)&local_14);
      DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_12,local_14),&local_18,param_2);
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x38),1,8,&iStack_20);
      DAT_12039a9c = (*pcVar1)(iStack_20,*(undefined4 *)(param_1 + 10),&iStack_1c,1);
      if (DAT_12039a9c == 0) {
        *param_3 = local_18 + iStack_1c + 1;
        return 0;
      }
    }
    return 0x10000;
  }
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xc,(int *)&local_14);
  DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_12,local_14),param_3,param_2);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,5,&iStack_20);
  DAT_12039a9c = (*pcVar1)(iStack_20,&local_18,param_2 + 1,s_<project>_12037934,9);
  if (local_18 == 0) {
    iStack_1c = param_1;
    pcVar1 = (code *)FUN_12027370(param_1,0,0x2f,&iStack_20);
    DAT_12039a9c = (*pcVar1)(iStack_20,&iStack_1c);
    if ((DAT_12039a9c != 0) || (iStack_1c == 0)) {
      return 0x10000;
    }
    local_14 = 0x66;
    uStack_12 = 0xffff;
    uStack_10 = 0xffff;
    uStack_e = 0;
    iStack_a = 0;
    iStack_6 = 0;
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_20);
    DAT_12039a9c = (*pcVar1)(iStack_20,iStack_1c,&DAT_12037920,0,&local_14);
    if (DAT_12039a9c != 0) {
      if (iStack_6 != 0) {
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&iStack_20);
        DAT_12039a9c = (*pcVar1)(iStack_20,iStack_6);
      }
      return 0x10000;
    }
    *param_3 = *param_3 + iStack_a + -9;
    if (iStack_6 != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&iStack_20);
      DAT_12039a9c = (*pcVar1)(iStack_20,iStack_6);
    }
  }
  return 0;
}


