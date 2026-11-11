
/* ==== FUN_10004f70 @ 10004f70 ==== 
 * signature: undefined4 __cdecl FUN_10004f70(int param_1, int param_2)
 * body: 10004f70-1000505b
 */

undefined4 __cdecl FUN_10004f70(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined2 uStack_8;
  int *piStack_6;
  
  iVar1 = param_1;
  uVar2 = 0x10000;
  if ((*(int *)(param_2 + 0xc) == *(int *)(param_1 + 2)) &&
     (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 6))) {
    if (*(short *)(param_1 + 0x3e) == 0x6e) {
      *(int *)(param_1 + 0x6a) = param_2 + 0x26;
    }
    else {
      *(int *)(param_1 + 0x6a) = param_1 + 0x3e;
    }
    param_2 = 0;
    pcVar3 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1c,&param_1);
    DAT_100173bc = (*pcVar3)(param_1,iVar1 + 10,iVar1,&param_2,0);
    if ((DAT_100173bc == 0) && (param_2 != 0)) {
      uStack_8 = 1;
      piStack_6 = (int *)0x0;
      pcVar3 = (code *)FUN_100089c7(param_2,0,0x16,&param_1);
      DAT_100173bc = (*pcVar3)(param_1,s_winvalue_10013090,0,&uStack_8);
      if ((DAT_100173bc == 0) && (piStack_6 != (int *)0x0)) {
        FUN_10005060(iVar1,piStack_6);
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


