
/* ==== FUN_1101b4c0 @ 1101b4c0 ==== 
 * signature: uint __cdecl FUN_1101b4c0(undefined4 * param_1, undefined2 * param_2, short * param_3, undefined4 param_4)
 * body: 1101b4c0-1101b704
 */

uint __cdecl FUN_1101b4c0(undefined4 *param_1,undefined2 *param_2,short *param_3,int param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  ushort extraout_var_03;
  ushort extraout_var_04;
  ushort extraout_var_05;
  ushort extraout_var_06;
  ushort extraout_var_07;
  ushort extraout_var_08;
  ushort extraout_var_09;
  double *pdVar4;
  double local_8;
  
  uVar2 = FUN_11019b70(param_3);
  if ((short)uVar2 == 0) {
    *param_2 = 0x15;
    iVar3 = param_4 + -1;
    switch(iVar3) {
    case 0:
      local_8 = *(double *)(param_3 + 1) * 0.017453292519943295;
      sVar1 = FUN_11011110(param_1,&local_8,param_2 + 1);
      iVar3 = CONCAT22(extraout_var,sVar1);
      if (sVar1 == 0) {
        return (uint)extraout_var << 0x10;
      }
      break;
    case 1:
      local_8 = *(double *)(param_3 + 1) * 0.017453292519943295;
      sVar1 = FUN_11011150(param_1,&local_8,param_2 + 1);
      iVar3 = CONCAT22(extraout_var_00,sVar1);
      if (sVar1 == 0) {
        return (uint)extraout_var_00 << 0x10;
      }
      break;
    case 3:
      sVar1 = FUN_11011250(param_1,param_3 + 1,param_2 + 1);
      iVar3 = CONCAT22(extraout_var_01,sVar1);
      if (sVar1 == 0) {
        return (uint)extraout_var_01 << 0x10;
      }
      break;
    case 4:
      local_8 = *(double *)(param_3 + 1) * 0.017453292519943295;
      sVar1 = FUN_11011190(param_1,&local_8,param_2 + 1);
      iVar3 = CONCAT22(extraout_var_02,sVar1);
      if (sVar1 == 0) {
        return (uint)extraout_var_02 << 0x10;
      }
      break;
    case 7:
      pdVar4 = (double *)(param_2 + 1);
      sVar1 = FUN_110111d0(param_1,param_3 + 1,pdVar4);
      iVar3 = CONCAT22(extraout_var_03,sVar1);
      if (sVar1 == 0) {
        *pdVar4 = *pdVar4 * 57.29577951308232;
        return (uint)extraout_var_03 << 0x10;
      }
      break;
    case 8:
      sVar1 = FUN_11011390(param_1,param_3 + 1,param_2 + 1);
      iVar3 = CONCAT22(extraout_var_04,sVar1);
      if (sVar1 == 0) {
        return (uint)extraout_var_04 << 0x10;
      }
      break;
    case 9:
      sVar1 = FUN_110113d0(param_1,param_3 + 1,param_2 + 1);
      iVar3 = CONCAT22(extraout_var_05,sVar1);
      if (sVar1 == 0) {
        return (uint)extraout_var_05 << 0x10;
      }
      break;
    case 10:
      sVar1 = FUN_11011410(param_1,param_3 + 1,param_2 + 1);
      iVar3 = CONCAT22(extraout_var_06,sVar1);
      if (sVar1 == 0) {
        return (uint)extraout_var_06 << 0x10;
      }
      break;
    case 0xb:
      local_8 = *(double *)(param_3 + 1);
      sVar1 = FUN_11011310(param_1,&local_8,param_2 + 1);
      iVar3 = CONCAT22(extraout_var_07,sVar1);
      if (sVar1 == 0) {
        return (uint)extraout_var_07 << 0x10;
      }
      break;
    case 0xc:
      local_8 = *(double *)(param_3 + 1);
      sVar1 = FUN_110112d0(param_1,&local_8,param_2 + 1);
      iVar3 = CONCAT22(extraout_var_08,sVar1);
      if (sVar1 == 0) {
        return (uint)extraout_var_08 << 0x10;
      }
      break;
    case 0xd:
      local_8 = *(double *)(param_3 + 1);
      sVar1 = FUN_11011350(param_1,&local_8,param_2 + 1);
      iVar3 = CONCAT22(extraout_var_09,sVar1);
      if (sVar1 == 0) {
        return (uint)extraout_var_09 << 0x10;
      }
    }
    uVar2 = CONCAT22((short)((uint)iVar3 >> 0x10),0xffec);
  }
  return uVar2;
}


