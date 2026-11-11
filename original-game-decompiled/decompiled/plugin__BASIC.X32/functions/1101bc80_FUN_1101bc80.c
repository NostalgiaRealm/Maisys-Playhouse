
/* ==== FUN_1101bc80 @ 1101bc80 ==== 
 * signature: undefined4 __cdecl FUN_1101bc80(undefined4 * param_1, undefined2 * param_2, short * param_3)
 * body: 1101bc80-1101bd60
 */

undefined4 __cdecl FUN_1101bc80(undefined4 *param_1,undefined2 *param_2,short *param_3)

{
  char cVar1;
  int iVar2;
  undefined2 uVar4;
  char *pcVar3;
  short sVar5;
  char local_100 [4];
  char local_fc [252];
  
  iVar2 = (int)*param_3;
  sVar5 = 0;
  if (iVar2 == 1) {
    iVar2 = FUN_11020c90(param_1,*(undefined4 *)(param_3 + 1),local_100);
  }
  else if (iVar2 == 0x15) {
    iVar2 = FUN_11013be0(param_1,*(undefined4 *)(param_3 + 1),*(undefined4 *)(param_3 + 3),local_100
                        );
  }
  else if (iVar2 == 0x1a) {
    if ((char)param_3[1] == '\0') {
      iVar2 = CONCAT22(0x1103,s_false_11036544._4_2_);
      local_100 = (char  [4])s_false_11036544._0_4_;
      local_fc._0_2_ = s_false_11036544._4_2_;
    }
    else {
      iVar2 = CONCAT31(0x110365,DAT_11036550);
      local_100 = (char  [4])DAT_1103654c;
      local_fc[0] = DAT_11036550;
    }
  }
  else {
    sVar5 = -0x14;
  }
  uVar4 = (undefined2)((uint)iVar2 >> 0x10);
  if (sVar5 == 0) {
    *param_2 = 0xd;
    pcVar3 = (char *)FUN_110024d0(param_1,local_100);
    iVar2 = -1;
    *(char **)(param_2 + 2) = pcVar3;
    uVar4 = 0;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    param_2[1] = ~(ushort)iVar2;
  }
  return CONCAT22(uVar4,sVar5);
}


