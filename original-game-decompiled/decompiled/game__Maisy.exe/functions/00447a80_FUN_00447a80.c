
/* ==== FUN_00447a80 @ 00447a80 ==== 
 * signature: undefined __fastcall FUN_00447a80(int * param_1)
 * body: 00447a80-00447aea
 */

void __fastcall FUN_00447a80(int *param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  
  pvVar3 = FUN_0046da90(param_1,'\x01','\x01');
  if (*(char *)((int)pvVar3 + 0x17d) == '\0') {
    iVar1 = *param_1;
    (**(code **)(iVar1 + 0x470))();
    (**(code **)(iVar1 + 0x80))(0x7fffffff,5);
    FUN_0046cd80(param_1);
    cVar2 = (**(code **)(iVar1 + 0x138))();
    if ((cVar2 != '\0') && (*(char *)((int)param_1 + 0xca) != '\x01')) {
      cVar2 = (**(code **)(iVar1 + 0x350))();
      if ((cVar2 != '\0') && ((DAT_004e0204 & 8) == 0)) {
        (**(code **)(iVar1 + 0x378))();
      }
    }
  }
  return;
}


