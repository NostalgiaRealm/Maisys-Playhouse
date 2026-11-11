
/* ==== FUN_1101b800 @ 1101b800 ==== 
 * signature: undefined4 __cdecl FUN_1101b800(undefined4 * param_1, undefined2 * param_2, short * param_3, undefined4 param_4)
 * body: 1101b800-1101ba2c
 */

undefined4 __cdecl FUN_1101b800(undefined4 *param_1,undefined2 *param_2,short *param_3,int param_4)

{
  double dVar1;
  int iVar2;
  short sVar3;
  ushort extraout_var;
  uint uVar4;
  ushort uVar5;
  longlong lVar6;
  double local_8;
  
  uVar5 = (ushort)((uint)(param_4 + -6) >> 0x10);
  switch(param_4) {
  case 6:
    if (*param_3 == 0x15) {
      *param_2 = 0x15;
      sVar3 = FUN_11011290(param_1,param_3 + 1,param_2 + 1);
      uVar5 = extraout_var;
      if (sVar3 == 0) {
        return (uint)extraout_var << 0x10;
      }
    }
    else if (*param_3 == 1) {
      *param_2 = 1;
      uVar4 = (int)*(uint *)(param_3 + 1) >> 0x1f;
      uVar4 = (*(uint *)(param_3 + 1) ^ uVar4) - uVar4;
      *(uint *)(param_2 + 1) = uVar4;
      return uVar4 & 0xffff0000;
    }
    break;
  case 7:
    if (*param_3 == 0x15) {
      *param_2 = 0x15;
      if (*(double *)(param_3 + 1) < 0.0) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = 1;
        if (*(double *)(param_3 + 1) <= 0.0) {
          uVar4 = 0;
        }
      }
      *(double *)(param_2 + 1) = (double)(int)uVar4;
      return uVar4 & 0xffff0000;
    }
    if (*param_3 == 1) {
      *param_2 = 1;
      iVar2 = *(int *)(param_3 + 1);
      uVar5 = (ushort)((uint)iVar2 >> 0x10);
      if (-1 < iVar2) {
        *(uint *)(param_2 + 1) = (uint)(0 < iVar2);
        return (uint)uVar5 << 0x10;
      }
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
      return (uint)uVar5 << 0x10;
    }
    break;
  case 0x11:
    if (*param_3 == 1) {
      *param_2 = 1;
      uVar4 = *(uint *)(param_3 + 1);
      *(uint *)(param_2 + 1) = uVar4;
      return uVar4 & 0xffff0000;
    }
    if (*param_3 == 0x15) {
      dVar1 = *(double *)(param_3 + 1);
      local_8 = *(double *)(param_3 + 1);
      if (dVar1 < 0.0) {
        local_8 = -local_8;
      }
      FUN_11011490(param_1,&local_8,&local_8);
      if (dVar1 < 0.0) {
        local_8 = -local_8;
      }
      *param_2 = 1;
      lVar6 = __ftol();
      *(int *)(param_2 + 1) = (int)lVar6;
      return (uint)(ushort)((ulonglong)lVar6 >> 0x10) << 0x10;
    }
    break;
  case 0x12:
    if (*param_3 == 1) {
      *param_2 = 1;
      uVar4 = *(uint *)(param_3 + 1);
      *(uint *)(param_2 + 1) = uVar4;
      return uVar4 & 0xffff0000;
    }
    if (*param_3 == 0x15) {
      local_8 = *(double *)(param_3 + 1) + 0.5;
      FUN_11011490(param_1,&local_8,&local_8);
      *param_2 = 1;
      lVar6 = __ftol();
      *(int *)(param_2 + 1) = (int)lVar6;
      return (uint)(ushort)((ulonglong)lVar6 >> 0x10) << 0x10;
    }
  }
  return CONCAT22(uVar5,0xffec);
}


