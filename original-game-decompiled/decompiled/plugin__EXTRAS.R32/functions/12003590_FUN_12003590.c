
/* ==== FUN_12003590 @ 12003590 ==== 
 * signature: undefined __fastcall FUN_12003590(int * param_1)
 * body: 12003590-12003642
 */

void __fastcall FUN_12003590(int *param_1)

{
  void *this;
  undefined4 uVar1;
  byte *pbVar2;
  short sVar3;
  int iVar4;
  
  if ((*(char *)((int)param_1 + 0x1a) == '\0') && ((short)param_1[4] != 0)) {
    *(undefined4 *)((int)param_1 + 0x36) = 0;
    *(undefined4 *)((int)param_1 + 0x3a) = 0;
    *(undefined4 *)((int)param_1 + 0x3e) = 0;
    *(undefined1 *)((int)param_1 + 0x1a) = 1;
    if ((char)param_1[0x19] == '\0') {
      iVar4 = 500000;
    }
    else {
      iVar4 = param_1[0x1a];
    }
    FUN_12003880(param_1,iVar4);
    FUN_12016370(*param_1);
    *(undefined4 *)((int)param_1 + 0x6e) = 1;
    uVar1 = FUN_12015f80(param_1[3]);
    sVar3 = (short)param_1[4];
    *(undefined4 *)((int)param_1 + 0x16) = uVar1;
    this = *(void **)((int)param_1 + 0x12);
    while (sVar3 = sVar3 + -1, -1 < sVar3) {
      FUN_12003e00(this,*(int *)((int)param_1 + 0x16));
      FUN_12004050((int)this);
      this = (void *)((int)this + 0x3c);
    }
    sVar3 = 0;
    pbVar2 = (byte *)((int)param_1 + 0x52);
    do {
      if (*pbVar2 != 0xff) {
        FUN_12016450((void *)*param_1,sVar3,(ushort)*pbVar2,0);
      }
      sVar3 = sVar3 + 1;
      pbVar2 = pbVar2 + 1;
    } while (sVar3 < 0x10);
    FUN_12004ca0((void *)param_1[1],(undefined4 *)param_1[2]);
  }
  return;
}


