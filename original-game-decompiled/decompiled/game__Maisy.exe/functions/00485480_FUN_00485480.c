
/* ==== FUN_00485480 @ 00485480 ==== 
 * signature: undefined4 __thiscall FUN_00485480(void * this, undefined2 * param_1, int * param_2)
 * body: 00485480-00485a57
 */

undefined4 __thiscall FUN_00485480(void *this,undefined2 *param_1,int *param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  char *pcVar6;
  char local_34 [16];
  char local_24 [2];
  uint local_22;
  uint local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_12;
  undefined4 local_e;
  uint local_8;
  
  uVar2 = *param_1;
  switch(uVar2) {
  case 0:
  case 0x6e:
    FUN_004817e0(this,(undefined2 *)((int)&local_e + 2),uVar2);
    FUN_00486d80(this,(char *)((int)&local_e + 2),*param_2);
    return 0;
  case 1:
    FUN_004817e0(this,(undefined2 *)((int)&local_12 + 2),uVar2);
    FUN_00481810(this,&local_e,*(uint *)(param_1 + 1));
    FUN_00486d80(this,(char *)((int)&local_12 + 2),*param_2);
    return 0;
  case 9:
    FUN_004817e0(this,(undefined2 *)((int)&local_1a + 2),uVar2);
    FUN_00481810(this,&local_16,*(uint *)(param_1 + 1));
    FUN_00481810(this,&local_12,*(uint *)(param_1 + 3));
    FUN_00481810(this,&local_e,*(uint *)(param_1 + 5));
    FUN_00486d80(this,(char *)((int)&local_1a + 2),*param_2);
    return 0;
  case 10:
    FUN_004817e0(this,(undefined2 *)((int)&local_12 + 2),uVar2);
    FUN_004817e0(this,(undefined2 *)((int)&local_e + 2),param_1[1]);
    FUN_004817e0(this,(undefined2 *)&local_e,param_1[2]);
    FUN_00486d80(this,(char *)((int)&local_12 + 2),*param_2);
    return 0;
  case 0xb:
    FUN_004817e0(this,(undefined2 *)((int)&local_16 + 2),uVar2);
    FUN_00481810(this,&local_12,*(uint *)(param_1 + 1));
    FUN_00481810(this,&local_e,*(uint *)(param_1 + 3));
    FUN_00486d80(this,(char *)((int)&local_16 + 2),*param_2);
    return 0;
  case 0xd:
    FUN_004817e0(this,(undefined2 *)((int)&local_16 + 2),uVar2);
    FUN_004817e0(this,(undefined2 *)((int)&local_12 + 2),param_1[1]);
    FUN_004817e0(this,(undefined2 *)&local_12,param_1[2]);
    FUN_004817e0(this,(undefined2 *)((int)&local_e + 2),param_1[3]);
    FUN_004817e0(this,(undefined2 *)&local_e,param_1[4]);
    FUN_00486d80(this,(char *)((int)&local_16 + 2),*param_2);
    return 0;
  case 0xf:
    FUN_004817e0(this,(undefined2 *)((int)&local_16 + 2),uVar2);
    local_e = *(uint *)(param_1 + 3);
    local_12 = *(uint *)(param_1 + 1);
    FUN_00486d80(this,(char *)((int)&local_16 + 2),*param_2);
    return 0;
  case 0x10:
    FUN_004817e0(this,(undefined2 *)local_24,uVar2);
    local_1e = *(uint *)(param_1 + 3);
    local_22 = *(uint *)(param_1 + 1);
    local_16 = *(uint *)(param_1 + 7);
    local_1a = *(uint *)(param_1 + 5);
    local_e = *(uint *)(param_1 + 0xb);
    local_12 = *(uint *)(param_1 + 9);
    FUN_00486d80(this,local_24,*param_2);
    return 0;
  case 0x14:
    FUN_004817e0(this,(undefined2 *)&local_e,uVar2);
    FUN_004817e0(this,(undefined2 *)((int)&local_e + 2),param_1[1]);
    FUN_00486d80(this,(char *)&local_e,*param_2);
    return 0;
  case 0x17:
    FUN_004817e0(this,(undefined2 *)((int)&local_16 + 2),uVar2);
    FUN_00481810(this,&local_12,*(uint *)(param_1 + 1));
    FUN_00481810(this,&local_e,*(uint *)(param_1 + 3));
    FUN_00486d80(this,(char *)((int)&local_16 + 2),*param_2);
    return 0;
  case 100:
    FUN_004817e0(this,(undefined2 *)((int)&local_16 + 2),uVar2);
    FUN_00481810(this,&local_12,*(uint *)(param_1 + 1));
    FUN_00481810(this,&local_e,*(uint *)(param_1 + 3));
    FUN_00486d80(this,(char *)((int)&local_16 + 2),*param_2);
    return 0;
  case 0x65:
    FUN_004817e0(this,(undefined2 *)((int)&local_16 + 2),uVar2);
    local_8 = *(uint *)(param_1 + 5);
    FUN_00481810(this,&local_12,local_8);
    local_8 = *(uint *)(param_1 + 5);
    FUN_00481810(this,&local_e,local_8);
    FUN_00486d80(this,(char *)((int)&local_16 + 2),10);
    if (*(int *)(param_1 + 5) != 0) {
      FUN_00486d80(this,*(char **)(param_1 + 7),local_8);
      return 0;
    }
    break;
  case 0x66:
  case 0x6f:
  case 0x76:
    FUN_004817e0(this,(undefined2 *)((int)&local_16 + 2),uVar2);
    if (*(int *)(param_1 + 7) != 0) {
      FUN_00481810(this,&local_12,*(uint *)(param_1 + 3));
      iVar3 = *(int *)(param_1 + 5);
      FUN_00481810(this,&local_e,iVar3 + 1U);
      FUN_00486d80(this,(char *)((int)&local_16 + 2),10);
      FUN_00486d80(this,*(char **)(param_1 + 7),iVar3 + 1U);
      return 0;
    }
    FUN_00481810(this,&local_12,0);
    FUN_00481810(this,&local_e,0);
    FUN_00486d80(this,(char *)((int)&local_16 + 2),10);
    return 0;
  case 0x68:
    FUN_004817e0(this,(undefined2 *)local_34,uVar2);
    FUN_00486d80(this,local_34,*param_2);
    return 0;
  case 0x6b:
    FUN_004817e0(this,(undefined2 *)local_24,uVar2);
    FUN_00481810(this,&local_22,*(uint *)(param_1 + 1));
    FUN_00481810(this,&local_1e,*(uint *)(param_1 + 3));
    FUN_00481810(this,&local_1a,*(uint *)(param_1 + 5));
    FUN_00481810(this,&local_16,*(uint *)(param_1 + 7));
    FUN_00481810(this,&local_12,*(uint *)(param_1 + 9));
    FUN_00481810(this,&local_e,*(uint *)(param_1 + 0xb));
    FUN_00486d80(this,local_24,*param_2);
    return 0;
  case 0x6c:
    FUN_004817e0(this,(undefined2 *)((int)&local_12 + 2),uVar2);
    local_e = (uint)*(uint3 *)(param_1 + 1);
    FUN_00486d80(this,(char *)((int)&local_12 + 2),*param_2);
    return 0;
  case 0x6d:
    FUN_004817e0(this,(undefined2 *)((int)&local_16 + 2),uVar2);
    local_8 = (int)(short)param_1[1] << 2;
    FUN_00481810(this,&local_12,local_8);
    local_8 = (int)(short)param_1[1] << 2;
    sVar5 = 0;
    FUN_00481810(this,&local_e,local_8);
    FUN_00486d80(this,(char *)((int)&local_16 + 2),10);
    if (0 < (short)param_1[1]) {
      do {
        iVar3 = (int)sVar5;
        sVar5 = sVar5 + 1;
        FUN_00481810(this,&local_8,*(uint *)(*(int *)(param_1 + 2) + iVar3 * 4));
        FUN_00486d80(this,(char *)&local_8,4);
      } while (sVar5 < (short)param_1[1]);
      return 0;
    }
    break;
  case 0x73:
    FUN_004817e0(this,(undefined2 *)((int)&local_16 + 2),uVar2);
    if (*(char **)(param_1 + 5) == (char *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0xffffffff;
      pcVar6 = *(char **)(param_1 + 5);
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
    }
    FUN_00481810(this,&local_e,uVar4);
    FUN_00481810(this,&local_12,*(uint *)(param_1 + 3));
    FUN_00486d80(this,(char *)((int)&local_16 + 2),10);
    if (uVar4 != 0) {
      FUN_00486d80(this,*(char **)(param_1 + 5),uVar4);
    }
  }
  return 0;
}


