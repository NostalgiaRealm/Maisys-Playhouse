
/* ==== FUN_00449c40 @ 00449c40 ==== 
 * signature: int __cdecl FUN_00449c40(short * param_1, short param_2)
 * body: 00449c40-00449ca7
 */

int __cdecl FUN_00449c40(short *param_1,short param_2)

{
  undefined4 in_EAX;
  int iVar1;
  
  if (param_2 == 0x17) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  switch(*param_1) {
  case 1:
    iVar1 = FUN_00449ce0(param_1,param_2);
    return iVar1;
  default:
    return (uint)param_1 & 0xffffff00;
  case 0x15:
    iVar1 = FUN_00449d80(param_1,param_2);
    return iVar1;
  case 0x1a:
    iVar1 = FUN_00449e60(param_1,param_2);
    return iVar1;
  case 0x1e:
    iVar1 = FUN_00449f20(param_1,param_2);
    return iVar1;
  }
}


