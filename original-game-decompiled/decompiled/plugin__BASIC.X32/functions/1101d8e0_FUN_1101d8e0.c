
/* ==== FUN_1101d8e0 @ 1101d8e0 ==== 
 * signature: undefined4 __cdecl FUN_1101d8e0(undefined4 * param_1, int param_2, int * param_3)
 * body: 1101d8e0-1101da0b
 */

uint __cdecl FUN_1101d8e0(undefined4 *param_1,int param_2,int *param_3)

{
  short *psVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_1c;
  undefined1 local_18;
  
  psVar1 = (short *)param_3[4];
  if ((psVar1 == (short *)0x0) || (*psVar1 != 1)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(psVar1 + 5);
  }
  uVar2 = FUN_11004dd0(param_1,&local_1c);
  if (local_1c == 0) {
    *(undefined1 *)(param_2 + 0x2e) = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),local_18);
    *(undefined1 *)(param_2 + 0x2e) = local_18;
  }
  if ((param_3[2] != 0) && ((*(byte *)(param_3 + 8) & 1) != 0)) {
    uVar3 = 0;
    switch(*(undefined2 *)(param_2 + 0x1c)) {
    case 1000:
      uVar3 = FUN_11012c10(param_1,param_2,param_3);
      return uVar3 & 0xffffff00;
    case 0x3f2:
      uVar3 = FUN_11013070(param_1,param_2,param_3);
      return uVar3 & 0xffffff00;
    case 0x3fc:
      uVar3 = FUN_11012960(param_1,param_2,param_3);
      return uVar3 & 0xffffff00;
    case 0x406:
      uVar3 = FUN_11012be0(param_1,param_2,param_3,uVar4,0);
      return uVar3 & 0xffffff00;
    case 0x410:
      uVar3 = FUN_11012bb0(param_1,param_2,param_3,uVar4,0);
      return uVar3 & 0xffffff00;
    case 0x41a:
      uVar3 = FUN_1100edb0(param_1,param_2,param_3,uVar4,0);
      return uVar3 & 0xffffff00;
    case 0x424:
      uVar3 = FUN_11013710(param_1,param_2,param_3);
    }
    return uVar3 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


