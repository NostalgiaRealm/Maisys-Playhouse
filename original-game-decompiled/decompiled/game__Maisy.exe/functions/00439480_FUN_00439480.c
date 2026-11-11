
/* ==== FUN_00439480 @ 00439480 ==== 
 * signature: undefined4 * __fastcall FUN_00439480(undefined4 * param_1)
 * body: 00439480-004394ad
 */

undefined4 * __fastcall FUN_00439480(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 6;
  puVar2 = param_1;
  do {
    *puVar2 = 0;
    iVar1 = iVar1 + -1;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[0x103] = 0;
    puVar2 = puVar2 + 0x104;
  } while (iVar1 != 0);
  DAT_004db008 = param_1;
  return param_1;
}


