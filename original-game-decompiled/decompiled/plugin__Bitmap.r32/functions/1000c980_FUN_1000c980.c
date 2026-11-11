
/* ==== FUN_1000c980 @ 1000c980 ==== 
 * signature: undefined4 __stdcall FUN_1000c980(void)
 * body: 1000c980-1000cb75
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000c980(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = (uint)DAT_1001728a;
  if (DAT_10016fb8 == 0) {
    FUN_1000bff0(DAT_10017254);
    FUN_1000bff0(DAT_10017258);
    FUN_1000bff0(DAT_1001725c);
    DAT_10017254 = (undefined *)0x0;
    DAT_10017258 = (undefined *)0x0;
    DAT_1001725c = (char *)0x0;
    uVar4 = FUN_1000c060(2);
    *(undefined4 *)PTR_PTR_10016470 = uVar4;
    if (*(undefined2 **)PTR_PTR_10016470 == (undefined2 *)0x0) {
      return 0xffffffff;
    }
    **(undefined2 **)PTR_PTR_10016470 = 0x2e;
    uVar4 = FUN_1000c060(2);
    *(undefined4 *)(PTR_PTR_10016470 + 4) = uVar4;
    if (*(undefined1 **)(PTR_PTR_10016470 + 4) == (undefined1 *)0x0) {
      return 0xffffffff;
    }
    **(undefined1 **)(PTR_PTR_10016470 + 4) = 0;
    uVar4 = FUN_1000c060(2);
    *(undefined4 *)(PTR_PTR_10016470 + 8) = uVar4;
    if (*(undefined1 **)(PTR_PTR_10016470 + 8) == (undefined1 *)0x0) {
      return 0xffffffff;
    }
    **(undefined1 **)(PTR_PTR_10016470 + 8) = 0;
  }
  else {
    iVar1 = FUN_1000efd0(1,uVar5,0xe,(char *)&DAT_10017254);
    iVar2 = FUN_1000efd0(1,uVar5,0xf,(char *)&DAT_10017258);
    iVar3 = FUN_1000efd0(1,uVar5,0x10,(char *)&DAT_1001725c);
    FUN_1000cb80(DAT_1001725c);
    if ((iVar1 != 0 || iVar2 != 0) || iVar3 != 0) {
      FUN_1000bff0(DAT_10017254);
      FUN_1000bff0(DAT_10017258);
      FUN_1000bff0(DAT_1001725c);
      DAT_10017254 = (undefined *)0x0;
      DAT_10017258 = (undefined *)0x0;
      DAT_1001725c = (char *)0x0;
      return 0xffffffff;
    }
    if (*(undefined **)PTR_PTR_10016470 != &DAT_10016438) {
      FUN_1000bff0(*(undefined **)PTR_PTR_10016470);
      FUN_1000bff0(*(undefined **)(PTR_PTR_10016470 + 4));
      FUN_1000bff0(*(undefined **)(PTR_PTR_10016470 + 8));
    }
    *(undefined **)PTR_PTR_10016470 = DAT_10017254;
    *(undefined **)(PTR_PTR_10016470 + 4) = DAT_10017258;
    *(char **)(PTR_PTR_10016470 + 8) = DAT_1001725c;
  }
  _DAT_10013610 = 1;
  DAT_1001360c = **(undefined1 **)PTR_PTR_10016470;
  return 0;
}


