
/* ==== FUN_1101bb90 @ 1101bb90 ==== 
 * signature: uint __cdecl FUN_1101bb90(undefined4 * param_1, undefined2 * param_2, short * param_3, int param_4)
 * body: 1101bb90-1101bc43
 */

uint __cdecl FUN_1101bb90(undefined4 *param_1,undefined2 *param_2,short *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_4 + 6);
  switch(iVar1) {
  case 3:
    uVar3 = FUN_1101b740(param_2,param_1,param_1,param_2,param_3,iVar1);
    return (uint)uVar3;
  default:
    uVar2 = FUN_1101b4c0(param_1,param_2,param_3,iVar1);
    return uVar2;
  case 6:
  case 7:
  case 0x11:
  case 0x12:
    uVar2 = FUN_1101b800(param_1,param_2,param_3,iVar1);
    return uVar2;
  case 0xf:
  case 0x10:
    uVar2 = FUN_1101ba60(param_1,param_2,param_3,iVar1);
    return uVar2;
  case 0x13:
    uVar2 = FUN_1101bc80(param_1,param_2,param_3);
    return uVar2;
  case 0x14:
    uVar2 = FUN_1101bd70(param_1,param_2,param_3);
    return uVar2;
  }
}


