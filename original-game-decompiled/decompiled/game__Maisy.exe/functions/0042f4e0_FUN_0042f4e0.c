
/* ==== FUN_0042f4e0 @ 0042f4e0 ==== 
 * signature: undefined4 __cdecl FUN_0042f4e0(undefined4 param_1, int * param_2, byte * param_3, byte * param_4)
 * body: 0042f4e0-0042f530
 */

undefined4 __cdecl FUN_0042f4e0(undefined4 param_1,int *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  
  do {
    bVar1 = *param_3;
    if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
      bVar1 = bVar1 + 0x20;
    }
    bVar2 = *param_4;
    if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
      bVar2 = bVar2 + 0x20;
    }
    param_3 = param_3 + 1;
    param_4 = param_4 + 1;
    if ((bVar1 != bVar2) || (bVar3 = false, bVar1 == 0)) {
      bVar3 = true;
    }
  } while (!bVar3);
  *param_2 = (uint)bVar1 - (uint)bVar2;
  return 0;
}


