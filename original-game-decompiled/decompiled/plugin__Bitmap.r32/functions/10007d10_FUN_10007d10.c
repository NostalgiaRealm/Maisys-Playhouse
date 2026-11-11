
/* ==== FUN_10007d10 @ 10007d10 ==== 
 * signature: uint __cdecl FUN_10007d10(undefined4 * param_1, HGLOBAL param_2)
 * body: 10007d10-10007dab
 */

uint __cdecl FUN_10007d10(undefined4 *param_1,HGLOBAL param_2)

{
  int in_EAX;
  SIZE_T SVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort extraout_var;
  undefined2 extraout_var_00;
  int iVar4;
  
  if (param_2 != (HGLOBAL)0x0) {
    SVar1 = FUN_10007ce0(param_2);
    in_EAX = FUN_10007c60(param_1,SVar1);
    iVar4 = in_EAX;
    if ((short)in_EAX != 0) goto LAB_10007da4;
    puVar2 = (undefined4 *)FUN_10007cf0(param_2);
    in_EAX = 0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_10007cf0((HGLOBAL)*param_1);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_100094f0(puVar3,puVar2,SVar1);
        FUN_10007d00((HGLOBAL)*param_1);
        FUN_10007d00(param_2);
        return (uint)extraout_var << 0x10;
      }
      FUN_10007d00(param_2);
      return CONCAT22(extraout_var_00,0xffff);
    }
  }
  iVar4 = -1;
LAB_10007da4:
  return CONCAT22((short)((uint)in_EAX >> 0x10),(short)iVar4);
}


