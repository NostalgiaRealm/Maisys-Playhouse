
/* ==== FUN_1000_0d54 @ 1000:0d54 ==== 
 * signature: undefined __cdecl16near FUN_1000_0d54(void)
 * body: 1000:0d54-1000:0df0;1000:0df2-1000:0e3a;1000:0e3c-1000:0e89
 */

uint __cdecl16near FUN_1000_0d54(int param_1,uint param_2,undefined2 param_3,undefined2 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_DS;
  
  FUN_1000_0364();
  if (param_1 == 2) {
    uVar1 = FUN_1000_1058(param_2,param_3,param_4);
  }
  else {
    uVar1 = FUN_1000_090e(param_2,0x5c);
    uVar2 = FUN_1000_090e(param_2,0x2f);
    if (uVar2 == 0) {
      if (uVar1 == 0) {
        uVar1 = param_2;
      }
    }
    else if ((uVar1 == 0) || (uVar1 < uVar2)) {
      uVar1 = uVar2;
    }
    iVar3 = FUN_1000_08a2(uVar1,0x2e);
    if (iVar3 == 0) {
      uVar5 = *(undefined2 *)0xd4;
      *(undefined2 *)0xd4 = 0x10;
      iVar3 = FUN_1000_07f2(param_2,0);
      iVar3 = FUN_1000_10bb(iVar3 + 5);
      *(undefined2 *)0xd4 = uVar5;
      if (iVar3 == 0) {
        uVar1 = 0xffff;
      }
      else {
        FUN_1000_07c0(iVar3,param_2);
        iVar6 = FUN_1000_07f2(param_2);
        iVar6 = iVar6 + iVar3;
        for (iVar4 = 2; -1 < iVar4; iVar4 = iVar4 + -1) {
          FUN_1000_07c0(iVar6,*(undefined2 *)(iVar4 * 2 + 0x122));
          iVar4 = 0xe5e;
          iVar7 = FUN_1000_106c(iVar3,0);
          if (iVar7 != -1) {
            FUN_1000_0cce(param_1,iVar3,param_3,param_4,iVar4);
            break;
          }
        }
        uVar1 = 0xe7e;
        FUN_1000_109a(iVar3);
      }
    }
    else {
      uVar1 = param_2;
      iVar4 = FUN_1000_106c(param_2,0);
      if (iVar4 != -1) {
        uVar5 = FUN_1000_08cc(iVar3,*(undefined2 *)0x122);
        uVar1 = FUN_1000_0cce(param_1,param_2,param_3,param_4,uVar5);
      }
    }
  }
  return uVar1;
}


