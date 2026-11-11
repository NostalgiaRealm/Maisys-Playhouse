
/* ==== FUN_12004ae0 @ 12004ae0 ==== 
 * signature: undefined __cdecl FUN_12004ae0(byte * param_1, byte * param_2)
 * body: 12004ae0-12004b01
 */

void __cdecl FUN_12004ae0(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  
  bVar2 = *param_2;
  *param_1 = bVar2;
  uVar3 = (ushort)bVar2;
  while (uVar3 = uVar3 - 1, -1 < (short)uVar3) {
    pbVar1 = param_2 + 1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    *param_1 = *pbVar1;
  }
  return;
}


