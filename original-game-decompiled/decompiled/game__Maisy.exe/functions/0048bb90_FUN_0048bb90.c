
/* ==== FUN_0048bb90 @ 0048bb90 ==== 
 * signature: undefined4 __cdecl FUN_0048bb90(uint param_1)
 * body: 0048bb90-0048bc0d
 */

undefined4 __cdecl FUN_0048bb90(uint param_1)

{
  double dVar1;
  undefined2 uVar2;
  
  dVar1 = (double)(param_1 >> 0x10);
  uVar2 = FUN_0048bb70(dVar1,44100.0);
  if ((char)uVar2 != '\0') {
    return 0xac44;
  }
  uVar2 = FUN_0048bb70(dVar1,22050.0);
  if ((char)uVar2 != '\0') {
    return 0x5622;
  }
  FUN_0048bb70(dVar1,11025.0);
  return 0x2b11;
}


