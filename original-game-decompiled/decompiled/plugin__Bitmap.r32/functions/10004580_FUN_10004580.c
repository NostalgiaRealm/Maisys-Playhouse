
/* ==== FUN_10004580 @ 10004580 ==== 
 * signature: undefined4 __cdecl FUN_10004580(HDC param_1, int * param_2, int * param_3, int * param_4, int * param_5, int * param_6)
 * body: 10004580-100045ec
 */

undefined4 __cdecl
FUN_10004580(HDC param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetDeviceCaps(param_1,0x58);
  *param_2 = iVar1;
  iVar1 = GetDeviceCaps(param_1,0x5a);
  *param_3 = iVar1;
  iVar1 = GetDeviceCaps(param_1,8);
  *param_4 = iVar1;
  iVar1 = GetDeviceCaps(param_1,10);
  *param_5 = iVar1;
  iVar1 = GetDeviceCaps(param_1,0x70);
  iVar2 = GetDeviceCaps(param_1,0x71);
  *param_6 = iVar1;
  param_6[1] = iVar2;
  param_6[2] = *param_4 - iVar1;
  param_6[3] = *param_5 - iVar2;
  return 1;
}


