
/* ==== FUN_004671e0 @ 004671e0 ==== 
 * signature: uint __cdecl FUN_004671e0(int * param_1, int * param_2)
 * body: 004671e0-004672ea
 */

uint __cdecl FUN_004671e0(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  byte local_148 [256];
  undefined2 local_48 [22];
  undefined1 local_1c [20];
  int local_8;
  
  bVar1 = false;
  piVar2 = (int *)(**(code **)(*param_1 + 0x188))();
  do {
    if (piVar2 == (int *)0x0) {
      return !bVar1 - 1 & 0x10000;
    }
    (**(code **)(*piVar2 + 0x70))(local_148);
    if ((*(byte *)(piVar2 + 8) & 8) == 0) {
      local_48[0] = 0x6a;
      FUN_0048b370((int)local_1c,(int)local_148);
      iVar4 = (**(code **)(*piVar2 + 0x98))(s_value_004dc3b0,0,local_48);
      if (iVar4 != 0) goto LAB_004672bd;
      (**(code **)(*param_2 + 0x9c))(local_1c,0,local_48);
      pcVar5 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,&local_8);
      DAT_004e34cc = (*pcVar5)(local_8,0xffffffff,local_48);
    }
    else {
      piVar3 = FUN_0040b2d0(param_2,local_148);
      if ((piVar3 == (int *)0x0) || ((*(byte *)(piVar3 + 8) & 8) == 0)) {
LAB_004672bd:
        bVar1 = true;
      }
      else {
        FUN_004671e0(piVar2,piVar3);
      }
    }
    piVar2 = (int *)(**(code **)(*piVar2 + 0x174))();
  } while( true );
}


