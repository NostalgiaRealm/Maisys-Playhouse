
/* ==== FUN_110032a0 @ 110032a0 ==== 
 * signature: undefined __cdecl FUN_110032a0(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 110032a0-11003590
 */

void __cdecl FUN_110032a0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined2 uVar4;
  undefined1 local_130 [16];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined2 local_110;
  undefined2 local_10e;
  undefined2 local_10c;
  undefined4 local_10a;
  undefined1 local_106;
  byte local_105;
  byte local_104;
  undefined1 local_100 [16];
  undefined4 local_f0;
  undefined2 local_ec;
  undefined2 uStack_ea;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined2 uStack_e4;
  undefined2 uStack_e2;
  undefined2 local_e0;
  undefined2 local_de;
  undefined2 uStack_dc;
  short local_da;
  undefined1 local_d8;
  
  *(undefined2 *)(param_2 + 0x50) = 0x10;
  *(undefined4 *)(param_2 + 0x52) = 0;
  iVar1 = param_3[2];
  iVar2 = *(int *)(iVar1 + 8);
  if (iVar2 == 0) {
    cVar3 = FUN_11011700(param_1,*param_3,local_100,iVar1,0x18);
    if (cVar3 != '\0') {
      *(undefined2 *)(param_2 + 0x1c) = local_ec;
      *(undefined4 *)(param_2 + 0xc) = local_f0;
      *(undefined4 *)(param_2 + 0x14) = 1;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x18) = 0;
      uVar4 = FUN_110035a0(uStack_ea);
      *(undefined2 *)(param_2 + 0x1e) = uVar4;
      *(undefined1 *)(param_2 + 0x35) = 1;
      *(undefined1 *)(param_3 + 3) = 1;
      return;
    }
  }
  else if (iVar2 == 1) {
    cVar3 = FUN_11011700(param_1,*param_3,local_100,iVar1,0x1c);
    if (cVar3 != '\0') {
      *(undefined2 *)(param_2 + 0x1c) = uStack_e8;
      *(undefined4 *)(param_2 + 0xc) = local_f0;
      *(uint *)(param_2 + 0x10) = CONCAT22(uStack_ea,local_ec);
      *(undefined4 *)(param_2 + 0x14) = 1;
      *(undefined4 *)(param_2 + 0x18) = 0;
      uVar4 = FUN_110035a0(uStack_e6);
      *(undefined2 *)(param_2 + 0x1e) = uVar4;
      *(undefined1 *)(param_2 + 0x35) = 1;
      *(undefined1 *)(param_3 + 3) = 1;
      return;
    }
  }
  else if (iVar2 == 2) {
    cVar3 = FUN_11011700(param_1,*param_3,local_100,iVar1,0x24);
    if (cVar3 != '\0') {
      *(undefined4 *)(param_2 + 0xc) = local_f0;
      *(uint *)(param_2 + 0x10) = CONCAT22(uStack_ea,local_ec);
      *(uint *)(param_2 + 0x14) = CONCAT22(uStack_e6,uStack_e8);
      *(undefined2 *)(param_2 + 0x1c) = local_e0;
      *(uint *)(param_2 + 0x18) = CONCAT22(uStack_e2,uStack_e4);
      uVar4 = FUN_110035a0((short)_local_de);
      *(undefined2 *)(param_2 + 0x1e) = uVar4;
      *(undefined1 *)(param_2 + 0x35) = 1;
      *(undefined1 *)(param_3 + 3) = 1;
      return;
    }
  }
  else if (iVar2 == 3) {
    cVar3 = FUN_11011700(param_1,*param_3,local_100,iVar1,0x2a);
    if (cVar3 != '\0') {
      *(undefined4 *)(param_2 + 0xc) = local_f0;
      *(uint *)(param_2 + 0x10) = CONCAT22(uStack_ea,local_ec);
      *(uint *)(param_2 + 0x14) = CONCAT22(uStack_e6,uStack_e8);
      *(uint *)(param_2 + 0x18) = CONCAT22(uStack_e2,uStack_e4);
      *(undefined2 *)(param_2 + 0x1c) = local_e0;
      *(undefined2 *)(param_2 + 0x1e) = local_de;
      *(int *)(param_2 + 0x52) = (int)local_da;
      *(undefined2 *)(param_2 + 0x50) = uStack_dc;
      *(undefined1 *)(param_2 + 0x35) = local_d8;
      *(undefined1 *)(param_3 + 3) = 1;
      return;
    }
  }
  else {
    cVar3 = FUN_11011700(param_1,*param_3,local_130,iVar1,0x2e);
    if (cVar3 != '\0') {
      if (local_105 != 0) {
        FUN_11011800(param_1,*param_3,local_100,(uint)local_105);
        local_100[local_105] = 0;
        FUN_110046e0(param_1,local_100,&local_120,&local_11c);
      }
      if (local_104 != 0) {
        FUN_11011800(param_1,*param_3,local_100,(uint)local_104);
        local_100[local_104] = 0;
        FUN_110046e0(param_1,local_100,&local_118,&local_114);
      }
      *(undefined4 *)(param_2 + 0xc) = local_120;
      *(undefined4 *)(param_2 + 0x10) = local_11c;
      *(undefined4 *)(param_2 + 0x14) = local_118;
      *(undefined4 *)(param_2 + 0x18) = local_114;
      *(undefined2 *)(param_2 + 0x1c) = local_110;
      *(undefined2 *)(param_2 + 0x1e) = local_10e;
      *(undefined4 *)(param_2 + 0x52) = local_10a;
      *(undefined2 *)(param_2 + 0x50) = local_10c;
      *(undefined1 *)(param_2 + 0x35) = local_106;
      *(undefined1 *)(param_3 + 3) = 1;
    }
  }
  return;
}


