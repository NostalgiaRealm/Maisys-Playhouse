
/* ==== FUN_00449080 @ 00449080 ==== 
 * signature: int __fastcall FUN_00449080(int * param_1)
 * body: 00449080-004490c0
 */

int __fastcall FUN_00449080(int *param_1)

{
  char cVar1;
  int iVar2;
  SIZE_T SVar3;
  
  iVar2 = FUN_0041d370((int)param_1);
  cVar1 = (**(code **)(*param_1 + 0x18))();
  if ((cVar1 == '\0') && (*(HGLOBAL *)((int)param_1 + 0x152) != (HGLOBAL)0x0)) {
    SVar3 = GlobalSize(*(HGLOBAL *)((int)param_1 + 0x152));
    iVar2 = iVar2 + SVar3;
    if (*(HGLOBAL *)((int)param_1 + 0x156) != (HGLOBAL)0x0) {
      SVar3 = GlobalSize(*(HGLOBAL *)((int)param_1 + 0x156));
      iVar2 = iVar2 + SVar3;
    }
  }
  return iVar2;
}


