
/* ==== FUN_004781d0 @ 004781d0 ==== 
 * signature: uint __cdecl FUN_004781d0(int param_1)
 * body: 004781d0-004781f5
 */

uint __cdecl FUN_004781d0(int param_1)

{
  uint uVar1;
  SIZE_T SVar2;
  
  SVar2 = **(SIZE_T **)(param_1 + 0x1a);
  if (SVar2 == 0) {
    SVar2 = 1;
  }
  uVar1 = FUN_0043f730((HLOCAL)(*(SIZE_T **)(param_1 + 0x1a))[2],SVar2);
  return uVar1 & 0xffffff00;
}


