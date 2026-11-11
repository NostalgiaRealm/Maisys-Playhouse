
/* ==== FUN_004099fa @ 004099fa ==== 
 * signature: int * __cdecl FUN_004099fa(int * param_1, int * param_2, uint param_3, int param_4, char * param_5, LPCSTR param_6, LPCSTR param_7)
 * body: 004099fa-00409aba
 */

int * __cdecl
FUN_004099fa(int *param_1,int *param_2,uint param_3,int param_4,char *param_5,LPCSTR param_6,
            LPCSTR param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  if (param_4 == 0) {
    puVar1 = FUN_004098e3(param_3);
    *param_1 = (int)puVar1;
    puVar1[1] = 0;
    *(undefined4 *)*param_1 = 0;
  }
  else {
    do {
      while( true ) {
        piVar4 = param_2;
        uVar2 = FUN_00409980((char *)(piVar4 + 2),param_5);
        bVar5 = (int)uVar2 < 0;
        if (uVar2 == 0) {
          iVar3 = 0;
          if (param_6 != (LPCSTR)0x0) {
            iVar3 = lstrcmpiA((LPCSTR)(piVar4 + 0x43),param_6);
          }
          bVar5 = iVar3 < 0;
          if (iVar3 == 0) {
            iVar3 = 0;
            if (param_7 != (LPCSTR)0x0) {
              iVar3 = lstrcmpiA((LPCSTR)(piVar4 + 0x83),param_7);
            }
            bVar5 = iVar3 < 0;
            if (iVar3 == 0) {
              return piVar4;
            }
          }
        }
        if (!bVar5) break;
        param_2 = (int *)*piVar4;
        if ((int *)*piVar4 == (int *)0x0) {
          puVar1 = FUN_004098e3(param_3);
          *param_1 = (int)puVar1;
          puVar1[1] = 0;
          *(undefined4 *)*param_1 = 0;
          *piVar4 = *param_1;
          return (int *)0x0;
        }
      }
      param_2 = (int *)piVar4[1];
    } while ((int *)piVar4[1] != (int *)0x0);
    puVar1 = FUN_004098e3(param_3);
    *param_1 = (int)puVar1;
    puVar1[1] = 0;
    *(undefined4 *)*param_1 = 0;
    piVar4[1] = *param_1;
  }
  return (int *)0x0;
}


