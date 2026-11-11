
/* ==== FUN_00447af0 @ 00447af0 ==== 
 * signature: int __fastcall FUN_00447af0(int * param_1)
 * body: 00447af0-00447b58
 */

int __fastcall FUN_00447af0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  SIZE_T SVar3;
  HGLOBAL pvVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = FUN_00447b60(param_1);
  piVar2 = FUN_0046da90(param_1,'\x01','\x01');
  SVar3 = FUN_00449950(piVar2);
  piVar2 = FUN_0046da90(param_1,'\x01','\x01');
  pvVar4 = (HGLOBAL)FUN_00449900(piVar2);
  iVar5 = FUN_00412010(pvVar4,SVar3);
  iVar6 = 1;
  if ((short)uVar1 != 0) {
    iVar6 = (short)((short)param_1[0x56] / (short)uVar1) + 1;
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    if (iVar5 <= iVar6) {
      iVar6 = iVar5;
    }
  }
  return iVar6;
}


