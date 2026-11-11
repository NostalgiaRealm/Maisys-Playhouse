
/* ==== FUN_00443100 @ 00443100 ==== 
 * signature: undefined4 __cdecl FUN_00443100(HMMIO param_1, HPSTR param_2, LONG param_3, uint param_4)
 * body: 00443100-0044315b
 */

undefined4 __cdecl FUN_00443100(HMMIO param_1,HPSTR param_2,LONG param_3,uint param_4)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 uVar3;
  uint uVar4;
  
  cVar1 = FUN_00411a90(param_1,param_3,'\x01');
  DAT_004d98b4 = DAT_004d98b4 + 1;
  if (cVar1 != '\0') {
    bVar2 = FUN_00411b20(param_1,param_4,param_2);
    DAT_004d98a8 = DAT_004d98a8 + 1;
    uVar3 = extraout_var;
    if (bVar2) goto LAB_00443156;
  }
  uVar3 = 0x808080;
  for (uVar4 = param_4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    param_2[0] = -0x80;
    param_2[1] = -0x80;
    param_2[2] = -0x80;
    param_2[3] = -0x80;
    param_2 = param_2 + 4;
  }
  for (uVar4 = param_4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_2 = -0x80;
    param_2 = param_2 + 1;
  }
LAB_00443156:
  return CONCAT31(uVar3,1);
}


