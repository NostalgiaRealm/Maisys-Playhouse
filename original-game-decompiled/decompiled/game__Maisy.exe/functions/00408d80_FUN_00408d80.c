
/* ==== FUN_00408d80 @ 00408d80 ==== 
 * signature: short __cdecl FUN_00408d80(short * param_1, short * param_2, short * param_3)
 * body: 00408d80-00408e04
 */

short __cdecl FUN_00408d80(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  
  sVar4 = *param_2;
  if (*param_2 <= *param_1) {
    sVar4 = *param_1;
  }
  *param_3 = sVar4;
  sVar5 = param_2[2];
  if (param_1[2] <= param_2[2]) {
    sVar5 = param_1[2];
  }
  param_3[2] = sVar5;
  sVar1 = param_2[1];
  if (param_2[1] <= param_1[1]) {
    sVar1 = param_1[1];
  }
  param_3[1] = sVar1;
  sVar3 = param_2[3];
  if (param_1[3] <= param_2[3]) {
    sVar3 = param_1[3];
  }
  param_3[3] = sVar3;
  bVar2 = (byte)((ushort)sVar1 >> 8);
  if ((sVar4 < sVar5) && (sVar1 < sVar3)) {
    return CONCAT11(bVar2,1);
  }
  return (ushort)bVar2 << 8;
}


