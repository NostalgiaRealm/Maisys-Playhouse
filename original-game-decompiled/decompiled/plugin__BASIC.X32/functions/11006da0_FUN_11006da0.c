
/* ==== FUN_11006da0 @ 11006da0 ==== 
 * signature: uint __cdecl FUN_11006da0(undefined4 * param_1, int param_2)
 * body: 11006da0-11006e00
 */

uint __cdecl FUN_11006da0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  uint in_EAX;
  DWORD DVar3;
  
  uVar1 = *(uint *)(param_2 + 0x7c);
  if (uVar1 != 0) {
    DVar3 = timeGetTime();
    in_EAX = (DVar3 * 6) / 100;
    if (uVar1 <= in_EAX) {
      cVar2 = FUN_110062b0((uint *)(param_2 + 0xc),'\x03');
      if (cVar2 == '\0') {
        *(undefined4 *)(param_2 + 0x7c) = 0;
      }
      else {
        FUN_11006e10(param_1,param_2);
      }
      in_EAX = FUN_11006eb0(param_1,param_2);
    }
  }
  return in_EAX & 0xffffff00;
}


