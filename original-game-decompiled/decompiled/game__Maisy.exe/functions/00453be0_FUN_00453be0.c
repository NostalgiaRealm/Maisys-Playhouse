
/* ==== FUN_00453be0 @ 00453be0 ==== 
 * signature: undefined4 __cdecl FUN_00453be0(undefined4 param_1, int param_2, short * param_3, short * param_4)
 * body: 00453be0-00453d29
 */

undefined4 __cdecl FUN_00453be0(undefined4 param_1,int param_2,short *param_3,short *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    piVar1 = (int *)FUN_0048b550(param_2);
    FUN_004537b0(param_3,piVar1);
  }
  switch(*param_4) {
  case 1:
    uVar2 = FUN_00453f10(param_3,param_4);
    return uVar2;
  default:
    return 0x10000;
  case 9:
    uVar2 = FUN_00454150((undefined4 *)param_3,param_4);
    return uVar2;
  case 10:
    uVar2 = FUN_00454340((undefined4 *)param_3,param_4);
    return uVar2;
  case 0xb:
    uVar2 = FUN_00454470((undefined4 *)param_3,param_4);
    return uVar2;
  case 0xd:
    uVar2 = FUN_004545a0(param_3,param_4);
    return uVar2;
  case 0xf:
    uVar2 = FUN_00454620((undefined4 *)param_3,param_4);
    return uVar2;
  case 0x10:
    uVar2 = FUN_004547a0(param_3,param_4);
    return uVar2;
  case 0x14:
    uVar2 = FUN_00454830((undefined4 *)param_3,param_4);
    return uVar2;
  case 0x17:
    uVar2 = FUN_00454a40((undefined4 *)param_3,param_4);
    return uVar2;
  case 100:
    uVar2 = FUN_00454b60(param_3,param_4);
    return uVar2;
  case 0x65:
    uVar2 = FUN_00454bd0(param_3,param_4);
    return uVar2;
  case 0x66:
    uVar2 = FUN_00455230(param_3,param_4,param_2);
    return uVar2;
  case 0x68:
    uVar2 = FUN_004552e0(param_3,param_4);
    return uVar2;
  case 0x69:
    uVar2 = FUN_004553e0(param_3,param_4);
    return uVar2;
  case 0x6a:
    uVar2 = FUN_00455560(param_3,param_4,param_2);
    return uVar2;
  case 0x6d:
    uVar2 = FUN_004556a0(param_3,param_4);
    return uVar2;
  case 0x73:
    uVar2 = FUN_00455460(param_3,param_4);
    return uVar2;
  case 0x7c:
    uVar2 = FUN_00455500(param_3,param_4);
    return uVar2;
  }
}


