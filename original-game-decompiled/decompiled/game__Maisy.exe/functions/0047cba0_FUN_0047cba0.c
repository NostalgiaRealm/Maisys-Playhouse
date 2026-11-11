
/* ==== FUN_0047cba0 @ 0047cba0 ==== 
 * signature: undefined4 __cdecl FUN_0047cba0(char * param_1, int param_2, uint * param_3, uint * param_4, uint * param_5, uint * param_6, short * param_7)
 * body: 0047cba0-0047ccc6
 */

undefined4 __cdecl
FUN_0047cba0(char *param_1,int param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
            short *param_7)

{
  byte bVar1;
  char cVar2;
  
  if (param_2 < 0x14) {
    return 0x10000;
  }
  if ((((uint)(byte)param_1[2] | (int)*param_1 << 0x10) << 8 | (uint)(byte)param_1[1] << 0x10 |
      (uint)(byte)param_1[3]) != 0x524c4520) {
    return 0x10000;
  }
  bVar1 = param_1[4];
  cVar2 = param_1[5];
  *param_7 = (bVar1 & 0xf0) << 8;
  if ((CONCAT11(bVar1,cVar2) & 0xfff) != 0x100) {
    return 0x10000;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = (uint)CONCAT11(param_1[6],param_1[7]);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = ((uint)(byte)param_1[10] | (int)param_1[8] << 0x10) << 8 |
               (uint)(byte)param_1[9] << 0x10 | (uint)(byte)param_1[0xb];
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = ((uint)(byte)param_1[0xe] | (int)param_1[0xc] << 0x10) << 8 |
               (uint)(byte)param_1[0xd] << 0x10 | (uint)(byte)param_1[0xf];
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = ((uint)(byte)param_1[0x12] | (int)param_1[0x10] << 0x10) << 8 |
               (uint)(byte)param_1[0x11] << 0x10 | (uint)(byte)param_1[0x13];
  }
  return 0;
}


