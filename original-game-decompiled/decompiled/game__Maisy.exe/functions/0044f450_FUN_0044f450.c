
/* ==== FUN_0044f450 @ 0044f450 ==== 
 * signature: undefined __fastcall FUN_0044f450(int * param_1)
 * body: 0044f450-0044f497
 */

void __fastcall FUN_0044f450(int *param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  
  FUN_00463260(param_1);
  iVar1 = *param_1;
  bVar2 = (**(code **)(iVar1 + 0x464))();
  *(byte *)(param_1 + 0x57) = (*(byte *)(param_1 + 0x57) ^ bVar2) & 1 ^ *(byte *)(param_1 + 0x57);
  cVar3 = (**(code **)(iVar1 + 0x46c))();
  if (cVar3 != '\0') {
    *(byte *)(param_1 + 0x57) = *(byte *)(param_1 + 0x57) | 4;
    return;
  }
  *(byte *)(param_1 + 0x57) = *(byte *)(param_1 + 0x57) & 0xfb;
  return;
}


