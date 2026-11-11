
/* ==== FUN_1101ba60 @ 1101ba60 ==== 
 * signature: uint __cdecl FUN_1101ba60(undefined4 * param_1, undefined2 * param_2, short * param_3, int param_4)
 * body: 1101ba60-1101bb87
 */

uint __cdecl FUN_1101ba60(undefined4 *param_1,undefined2 *param_2,short *param_3,int param_4)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  double local_10;
  double local_8;
  
  if (param_4 == 0xf) {
    if (*param_3 != 0x10) {
      return 0xffff;
    }
    *param_2 = 0x16;
    local_10 = (double)CONCAT44(local_10._4_4_,(int)param_3[2]);
    dVar1 = (double)(int)param_3[2];
    uVar2 = FUN_1101acf0(param_1,(double)(int)param_3[1],SUB84(dVar1,0),
                         (uint)((ulonglong)dVar1 >> 0x20),(undefined4 *)(param_2 + 1),
                         (double *)(param_2 + 5));
    return uVar2;
  }
  if (param_4 != 0x10) {
    return CONCAT22((short)((uint)param_4 >> 0x10),0xffec);
  }
  if (*param_3 != 0x16) {
    return 0xffeb;
  }
  uVar2 = FUN_1101ae10(param_1,*(undefined4 *)(param_3 + 1),*(undefined4 *)(param_3 + 3),
                       *(double *)(param_3 + 5),&local_10,&local_8);
  if ((short)uVar2 == 0) {
    local_10 = local_10 + 0.5;
    *param_2 = 0x10;
    local_8 = local_8 + 0.5;
    FUN_11011490(param_1,&local_10,&local_10);
    FUN_11011490(param_1,&local_8,&local_8);
    lVar3 = __ftol();
    param_2[1] = (short)lVar3;
    lVar3 = __ftol();
    param_2[2] = (short)lVar3;
    uVar2 = (uint)(ushort)((ulonglong)lVar3 >> 0x10) << 0x10;
  }
  return uVar2;
}


