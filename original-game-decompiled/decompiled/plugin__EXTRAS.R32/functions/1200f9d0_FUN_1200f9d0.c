
/* ==== FUN_1200f9d0 @ 1200f9d0 ==== 
 * signature: int __cdecl FUN_1200f9d0(int param_1, uint * param_2, short * param_3, short * param_4)
 * body: 1200f9d0-1200fc1b
 */

int __cdecl FUN_1200f9d0(int param_1,uint *param_2,short *param_3,short *param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int local_4;
  
  iVar4 = 0x10000;
  uVar1 = FUN_12011320(param_3);
  uVar2 = FUN_120271d0(param_2,(uint *)s_textfont_120375f8);
  if ((char)uVar2 != '\0') {
    iVar4 = FUN_12010340(param_1,uVar1,param_4);
    return iVar4;
  }
  uVar2 = FUN_120271d0(param_2,(uint *)s_textsize_120375e4);
  if ((char)uVar2 != '\0') {
    iVar4 = FUN_120105e0(param_1,uVar1,param_4);
    return iVar4;
  }
  uVar2 = FUN_120271d0(param_2,(uint *)s_textstyle_120375d0);
  if ((char)uVar2 != '\0') {
    iVar4 = FUN_120106f0(param_1,uVar1,param_4);
    return iVar4;
  }
  uVar2 = FUN_120271d0(param_2,(uint *)s_textstring_120375bc);
  if ((char)uVar2 != '\0') {
    iVar4 = FUN_12010490(param_1,uVar1,param_4);
    return iVar4;
  }
  uVar2 = FUN_120271d0(param_2,(uint *)s_textposition_120375a8);
  if ((char)uVar2 != '\0') {
    iVar4 = FUN_12010800(param_1,uVar1,(int)param_4);
    return iVar4;
  }
  uVar1 = FUN_120271d0(param_2,(uint *)s_textalignment_12037628);
  if ((char)uVar1 != '\0') {
    iVar4 = FUN_12010920();
    return iVar4;
  }
  uVar1 = FUN_120271d0(param_2,(uint *)s_filepath_120371c4);
  if ((char)uVar1 != '\0') {
    if (*(int *)(param_1 + 0x28) != 0) {
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
      DAT_12039a9c = (*pcVar3)(local_4,*(undefined4 *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    FUN_12027790(0,(undefined2 *)(param_1 + 0x1a),0);
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_4);
    DAT_12039a9c = (*pcVar3)(local_4,param_1,param_4,(undefined2 *)(param_1 + 0x1a));
    return DAT_12039a9c;
  }
  uVar1 = FUN_120271d0(param_2,(uint *)s_showdialog_12037594);
  if ((char)uVar1 != '\0') {
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_4);
    iVar4 = (*pcVar3)(local_4,param_1,param_4,param_1 + 0x16);
    DAT_12039a9c = iVar4;
  }
  return iVar4;
}


