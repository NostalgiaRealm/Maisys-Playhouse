
/* ==== FUN_1200f740 @ 1200f740 ==== 
 * signature: undefined4 __cdecl FUN_1200f740(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 1200f740-1200f9ce
 */

undefined4 __cdecl FUN_1200f740(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int local_4;
  
  uVar4 = 0x10000;
  iVar1 = FUN_12011320(param_3);
  uVar2 = FUN_120271d0(param_2,(uint *)s_events_120370e8);
  if ((char)uVar2 != '\0') {
    uVar4 = FUN_12027a70(param_4,param_3,param_1,(undefined4 *)0x0,(undefined4 *)0x0);
    return uVar4;
  }
  uVar2 = FUN_120271d0(param_2,(uint *)s_textfont_120375f8);
  if ((char)uVar2 != '\0') {
    uVar4 = FUN_1200ff20((int)param_1,iVar1,param_4);
    return uVar4;
  }
  uVar2 = FUN_120271d0(param_2,(uint *)s_textsize_120375e4);
  if ((char)uVar2 != '\0') {
    uVar4 = FUN_12010150((int)param_1,iVar1,param_4);
    return uVar4;
  }
  uVar2 = FUN_120271d0(param_2,(uint *)s_textstyle_120375d0);
  if ((char)uVar2 != '\0') {
    uVar4 = FUN_120100a0((int)param_1,iVar1,param_4);
    return uVar4;
  }
  uVar2 = FUN_120271d0(param_2,(uint *)s_textstring_120375bc);
  if ((char)uVar2 != '\0') {
    uVar4 = FUN_1200ffe0((int)param_1,iVar1,param_4);
    return uVar4;
  }
  uVar2 = FUN_120271d0(param_2,(uint *)s_textposition_120375a8);
  if ((char)uVar2 != '\0') {
    uVar4 = FUN_12010200((int)param_1,iVar1,param_4);
    return uVar4;
  }
  uVar2 = FUN_120271d0(param_2,(uint *)s_textalignment_12037628);
  if ((char)uVar2 != '\0') {
    uVar4 = FUN_120102b0((int)param_1,iVar1);
    return uVar4;
  }
  uVar2 = FUN_120271d0(param_2,(uint *)s_filepath_120371c4);
  if ((char)uVar2 != '\0') {
    if (*param_4 == 0x6a) {
      *param_4 = 0x66;
      FUN_12027790(0,param_4,0);
      FUN_120273e0(0,param_4,(int)param_1 + 0x1a);
      param_4[1] = -1;
      param_4[2] = -1;
      return DAT_12039a9c;
    }
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_4);
    DAT_12039a9c = (*pcVar3)(local_4,param_1,(int)param_1 + 0x1a,param_4);
    return DAT_12039a9c;
  }
  uVar2 = FUN_120271d0(param_2,(uint *)s_showdialog_12037594);
  if ((char)uVar2 != '\0') {
    if (*param_4 == 0x6a) {
      param_4[1] = 0;
      *param_4 = 0x14;
    }
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_4);
    uVar4 = (*pcVar3)(local_4,param_1,(int)param_1 + 0x16,param_4);
    DAT_12039a9c = uVar4;
  }
  return uVar4;
}


