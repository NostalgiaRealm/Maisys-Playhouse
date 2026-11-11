
/* ==== FUN_1001b881 @ 1001b881 ==== 
 * signature: undefined FUN_1001b881(void)
 * body: 1001b881-1001b8d4
 */

undefined8 FUN_1001b881(undefined4 param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar4 = param_2;
  uVar5 = param_3;
  uVar3 = param_4;
  do {
    uVar6 = in_EAX & 1;
    in_EAX = in_EAX >> 1;
    uVar3 = (uint)(CONCAT14(uVar6 != 0,uVar3) >> 1);
    uVar6 = uVar5 & 1;
    uVar5 = uVar5 >> 1;
    uVar4 = (uint)(CONCAT14(uVar6 != 0,uVar4) >> 1);
  } while (in_EAX != 0);
  uVar1 = CONCAT44(uVar5,uVar4) / (ulonglong)uVar3;
  uVar3 = (int)uVar1 * param_5;
  lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_4;
  uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar4 = (uint)lVar2;
  uVar6 = uVar5 + uVar3;
  if (((CARRY4(uVar5,uVar3)) || (param_3 < uVar6)) || ((param_3 <= uVar6 && (param_2 < uVar4)))) {
    bVar7 = uVar4 < param_4;
    uVar4 = uVar4 - param_4;
    uVar6 = (uVar6 - param_5) - (uint)bVar7;
  }
  return CONCAT44(-(uint)(uVar4 - param_2 != 0) - ((uVar6 - param_3) - (uint)(uVar4 < param_2)),
                  -(uVar4 - param_2));
}


