
/* ==== FUN_0044af49 @ 0044af49 ==== 
 * signature: undefined8 __fastcall FUN_0044af49(undefined4 param_1, undefined2 * param_2)
 * body: 0044af49-0044af8d
 */

undefined8 __fastcall FUN_0044af49(undefined4 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int unaff_EBP;
  
  uVar1 = param_2[3];
  *(ushort *)(unaff_EBP + -8) = CONCAT11((char)param_2[1],(char)((ushort)param_2[1] >> 8));
  uVar2 = *param_2;
  *(ushort *)(unaff_EBP + -4) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
  uVar1 = param_2[2];
  *(ushort *)(unaff_EBP + -6) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
  *(ushort *)(unaff_EBP + -2) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
  return *(undefined8 *)(unaff_EBP + -8);
}


