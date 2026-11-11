
/* ==== FUN_1001a050 @ 1001a050 ==== 
 * signature: undefined4 __stdcall FUN_1001a050(void)
 * body: 1001a050-1001a245
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1001a050(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = (uint)DAT_1002379a;
  if (DAT_10023400 == 0) {
    FUN_10015a50(DAT_10023764);
    FUN_10015a50(DAT_10023768);
    FUN_10015a50(DAT_1002376c);
    DAT_10023764 = (undefined *)0x0;
    DAT_10023768 = (undefined *)0x0;
    DAT_1002376c = (char *)0x0;
    uVar4 = FUN_10015d50(2);
    *(undefined4 *)PTR_PTR_100231d0 = uVar4;
    if (*(undefined2 **)PTR_PTR_100231d0 == (undefined2 *)0x0) {
      return 0xffffffff;
    }
    **(undefined2 **)PTR_PTR_100231d0 = DAT_1001fcfc;
    uVar4 = FUN_10015d50(2);
    *(undefined4 *)(PTR_PTR_100231d0 + 4) = uVar4;
    if (*(undefined1 **)(PTR_PTR_100231d0 + 4) == (undefined1 *)0x0) {
      return 0xffffffff;
    }
    **(undefined1 **)(PTR_PTR_100231d0 + 4) = 0;
    uVar4 = FUN_10015d50(2);
    *(undefined4 *)(PTR_PTR_100231d0 + 8) = uVar4;
    if (*(undefined1 **)(PTR_PTR_100231d0 + 8) == (undefined1 *)0x0) {
      return 0xffffffff;
    }
    **(undefined1 **)(PTR_PTR_100231d0 + 8) = 0;
  }
  else {
    iVar1 = FUN_1001ae10(1,uVar5,0xe,(char *)&DAT_10023764);
    iVar2 = FUN_1001ae10(1,uVar5,0xf,(char *)&DAT_10023768);
    iVar3 = FUN_1001ae10(1,uVar5,0x10,(char *)&DAT_1002376c);
    FUN_1001a490(DAT_1002376c);
    if ((iVar1 != 0 || iVar2 != 0) || iVar3 != 0) {
      FUN_10015a50(DAT_10023764);
      FUN_10015a50(DAT_10023768);
      FUN_10015a50(DAT_1002376c);
      DAT_10023764 = (undefined *)0x0;
      DAT_10023768 = (undefined *)0x0;
      DAT_1002376c = (char *)0x0;
      return 0xffffffff;
    }
    if (*(undefined **)PTR_PTR_100231d0 != &DAT_10023198) {
      FUN_10015a50(*(undefined **)PTR_PTR_100231d0);
      FUN_10015a50(*(undefined **)(PTR_PTR_100231d0 + 4));
      FUN_10015a50(*(undefined **)(PTR_PTR_100231d0 + 8));
    }
    *(undefined **)PTR_PTR_100231d0 = DAT_10023764;
    *(undefined **)(PTR_PTR_100231d0 + 4) = DAT_10023768;
    *(char **)(PTR_PTR_100231d0 + 8) = DAT_1002376c;
  }
  _DAT_100200dc = 1;
  DAT_100200d8 = **(undefined1 **)PTR_PTR_100231d0;
  return 0;
}


