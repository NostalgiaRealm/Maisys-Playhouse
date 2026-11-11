
/* ==== FUN_00455560 @ 00455560 ==== 
 * signature: undefined4 __cdecl FUN_00455560(short * param_1, short * param_2, int param_3)
 * body: 00455560-004555e5
 */

undefined4 __cdecl FUN_00455560(short *param_1,short *param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)0x0;
  if (param_3 != 0) {
    piVar2 = (int *)FUN_0048b550(param_3);
  }
  switch(*param_1) {
  case 1:
  case 9:
  case 10:
  case 0xb:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x14:
  case 0x17:
  case 100:
  case 0x65:
  case 0x66:
  case 0x6d:
  case 0x7c:
    uVar3 = FUN_00482ec0(0,param_2,param_1);
    return uVar3;
  default:
    return 0x10000;
  case 0x69:
  case 0x73:
    uVar3 = FUN_00453840(param_1,(undefined4 *)param_2,piVar2);
    return uVar3;
  case 0x76:
    break;
  }
  if (((piVar2 != (int *)0x0) && (*(char **)(param_1 + 7) != (char *)0x0)) &&
     (bVar1 = FUN_00453ea0((int)piVar2,*(char **)(param_1 + 7),param_2), bVar1)) {
    return 0;
  }
  return 0x10000;
}


