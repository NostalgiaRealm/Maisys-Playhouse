
/* ==== FUN_100160c1 @ 100160c1 ==== 
 * signature: undefined __fastcall FUN_100160c1(undefined4 param_1, int param_2)
 * body: 100160c1-100160c3
 */

void __fastcall FUN_100160c1(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  undefined3 uVar3;
  int *piVar2;
  
  uVar3 = (undefined3)((uint)in_EAX >> 8);
  uVar1 = in(0x60);
  piVar2 = (int *)CONCAT31(uVar3,uVar1);
  *piVar2 = *piVar2 + param_2;
  uVar1 = in((short)param_2);
  piVar2 = (int *)CONCAT31(uVar3,uVar1);
  *piVar2 = *piVar2 + param_2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


