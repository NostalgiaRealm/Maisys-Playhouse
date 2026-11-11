
/* ==== FUN_11028cb0 @ 11028cb0 ==== 
 * signature: short __cdecl FUN_11028cb0(short * param_1, short * param_2, short * param_3)
 * body: 11028cb0-11028d3b
 */

short __cdecl FUN_11028cb0(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  
  sVar6 = *param_2;
  if (*param_2 <= *param_1) {
    sVar6 = *param_1;
  }
  *param_3 = sVar6;
  sVar3 = param_2[2];
  if (param_1[2] <= param_2[2]) {
    sVar3 = param_1[2];
  }
  param_3[2] = sVar3;
  sVar4 = param_2[1];
  if (param_2[1] <= param_1[1]) {
    sVar4 = param_1[1];
  }
  param_3[1] = sVar4;
  sVar1 = param_1[3];
  sVar5 = param_2[3];
  if (sVar1 <= param_2[3]) {
    sVar5 = sVar1;
  }
  param_3[3] = sVar5;
  bVar2 = (byte)((ushort)sVar1 >> 8);
  if ((sVar6 < sVar3) && (sVar4 < sVar5)) {
    return CONCAT11(bVar2,1);
  }
  *param_3 = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  param_3[3] = 0;
  return (ushort)bVar2 << 8;
}


