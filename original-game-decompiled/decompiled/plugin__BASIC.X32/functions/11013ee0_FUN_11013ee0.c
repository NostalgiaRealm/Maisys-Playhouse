
/* ==== FUN_11013ee0 @ 11013ee0 ==== 
 * signature: undefined4 __cdecl FUN_11013ee0(int param_1)
 * body: 11013ee0-11013f1a
 */

undefined4 __cdecl FUN_11013ee0(int param_1)

{
  uint3 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  cVar2 = '\0';
  cVar3 = '\0';
  cVar4 = '\0';
  if (param_1 != 0) {
    cVar2 = '\x01' - (*(int *)(param_1 + 0x10) == 0);
    cVar3 = '\x01' - (*(int *)(param_1 + 0x1c) == 0);
    cVar4 = '\x01' - (*(int *)(param_1 + 0x28) == 0);
  }
  uVar1 = (uint3)((uint)param_1 >> 8);
  if (((cVar2 != '\0') && (cVar3 != '\0')) && (cVar4 != '\0')) {
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}


