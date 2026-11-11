
/* ==== FUN_1001ab40 @ 1001ab40 ==== 
 * signature: int * __cdecl FUN_1001ab40(int * param_1, uint param_2)
 * body: 1001ab40-1001acef
 */

int * __cdecl FUN_1001ab40(int *param_1,uint param_2)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *local_8;
  int local_4;
  
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)FUN_10015d50(param_2);
    return piVar1;
  }
  if (param_2 == 0) {
    FUN_10015a50((undefined *)param_1);
    return (int *)0x0;
  }
  uVar4 = param_2;
  if (param_2 < 0xffffffe1) {
    if (param_2 == 0) {
      param_2 = 0x10;
      uVar4 = param_2;
    }
    else {
      param_2 = param_2 + 0xf & 0xfffffff0;
      uVar4 = param_2;
    }
  }
  do {
    piVar1 = (int *)0x0;
    if (uVar4 < 0xffffffe1) {
      FUN_10016e20(9);
      pbVar2 = (byte *)FUN_100174e0((undefined *)param_1,&local_4,(uint *)&local_8);
      if (pbVar2 == (byte *)0x0) {
        FUN_10016ea0(9);
        piVar1 = HeapReAlloc(DAT_1002532c,0,param_1,uVar4);
      }
      else {
        if (uVar4 < DAT_100221d4) {
          iVar3 = FUN_10017960(local_4,local_8,pbVar2,uVar4 >> 4);
          piVar1 = param_1;
          if (iVar3 != 0) goto LAB_1001ac45;
          piVar1 = FUN_100175a0(uVar4 >> 4);
          if (piVar1 != (int *)0x0) {
            uVar5 = (uint)*pbVar2 << 4;
            if (uVar4 <= (uint)*pbVar2 << 4) {
              uVar5 = uVar4;
            }
            piVar6 = param_1;
            piVar7 = piVar1;
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(char *)piVar7 = (char)*piVar6;
              piVar6 = (int *)((int)piVar6 + 1);
              piVar7 = (int *)((int)piVar7 + 1);
            }
            FUN_10017540(local_4,(int)local_8,pbVar2);
            uVar4 = param_2;
            goto LAB_1001ac45;
          }
LAB_1001ac49:
          piVar1 = HeapAlloc(DAT_1002532c,0,uVar4);
          if (piVar1 != (int *)0x0) {
            uVar5 = (uint)*pbVar2 << 4;
            if (uVar4 <= (uint)*pbVar2 << 4) {
              uVar5 = uVar4;
            }
            piVar6 = param_1;
            piVar7 = piVar1;
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(char *)piVar7 = (char)*piVar6;
              piVar6 = (int *)((int)piVar6 + 1);
              piVar7 = (int *)((int)piVar7 + 1);
            }
            FUN_10017540(local_4,(int)local_8,pbVar2);
            uVar4 = param_2;
          }
        }
        else {
LAB_1001ac45:
          if (piVar1 == (int *)0x0) goto LAB_1001ac49;
        }
        FUN_10016ea0(9);
      }
    }
    if ((piVar1 != (int *)0x0) || (DAT_10023414 == 0)) {
      return piVar1;
    }
    iVar3 = FUN_10017f60(uVar4);
    if (iVar3 == 0) {
      return (int *)0x0;
    }
  } while( true );
}


