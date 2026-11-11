
/* ==== FUN_11028da0 @ 11028da0 ==== 
 * signature: undefined FUN_11028da0(void)
 * body: 11028da0-11028dd3
 */

ushort FUN_11028da0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = *param_2;
  if ((((*param_1 == uVar1) && (uVar1 = param_1[2], param_2[2] == uVar1)) &&
      (uVar1 = param_1[1], param_2[1] == uVar1)) && (uVar1 = param_1[3], param_2[3] == uVar1)) {
    return CONCAT11((char)(uVar1 >> 8),1);
  }
  return uVar1 & 0xff00;
}


