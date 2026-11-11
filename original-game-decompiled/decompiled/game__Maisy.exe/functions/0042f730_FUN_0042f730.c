
/* ==== FUN_0042f730 @ 0042f730 ==== 
 * signature: undefined4 __cdecl FUN_0042f730(undefined4 param_1, int * param_2, byte * param_3, byte * param_4, int param_5)
 * body: 0042f730-0042f753
 */

undefined4 __cdecl
FUN_0042f730(undefined4 param_1,int *param_2,byte *param_3,byte *param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = false;
  iVar1 = 0;
  bVar3 = true;
  do {
    if (param_5 == 0) break;
    param_5 = param_5 + -1;
    bVar2 = *param_3 < *param_4;
    bVar3 = *param_3 == *param_4;
    param_3 = param_3 + 1;
    param_4 = param_4 + 1;
  } while (bVar3);
  if (!bVar3) {
    iVar1 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
  }
  *param_2 = iVar1;
  return 0;
}


