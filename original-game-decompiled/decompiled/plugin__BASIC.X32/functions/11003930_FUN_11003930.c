
/* ==== FUN_11003930 @ 11003930 ==== 
 * signature: undefined4 __cdecl FUN_11003930(short param_1)
 * body: 11003930-11003971
 */

undefined4 __cdecl FUN_11003930(short param_1)

{
  short sVar1;
  DWORD DVar2;
  int iVar3;
  
  if (DAT_11036030 != 0) {
    DAT_11036030 = 0;
    DVar2 = GetTickCount();
    FUN_11029090(DVar2);
  }
  iVar3 = _rand();
  sVar1 = (short)(iVar3 % (int)param_1);
  if (sVar1 == 0) {
    sVar1 = 1;
  }
  if (sVar1 < 0) {
    sVar1 = -sVar1;
  }
  return CONCAT22((short)((uint)(iVar3 / (int)param_1) >> 0x10),sVar1);
}


