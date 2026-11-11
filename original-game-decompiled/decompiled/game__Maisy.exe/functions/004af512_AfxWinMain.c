
/* ==== AfxWinMain @ 004af512 ==== 
 * signature: int __stdcall AfxWinMain(HINSTANCE__ * param_1, HINSTANCE__ * param_2, char * param_3, int param_4)
 * body: 004af512-004af578
 * note: Library Function - Single Match  int __stdcall AfxWinMain(struct HINSTANCE__ *,struct HINSTANCE__ *,char *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall AfxWinMain(struct HINSTANCE__ *,struct HINSTANCE__ *,char *,int)
   
   Library: Visual Studio 1998 Release */

int AfxWinMain(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  iVar2 = FUN_004bafca();
  piVar1 = *(int **)(iVar2 + 4);
  iVar2 = FUN_004bd15b(param_1,param_2,param_3,param_4);
  if (iVar2 != 0) {
    iVar2 = *piVar1;
    iVar3 = (**(code **)(iVar2 + 0x88))();
    if (iVar3 != 0) {
      iVar4 = (**(code **)(iVar2 + 0x54))();
      if (iVar4 == 0) {
        piVar1 = (int *)piVar1[7];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x5c))();
        }
        iVar4 = (**(code **)(iVar2 + 0x6c))();
      }
      else {
        iVar4 = (**(code **)(iVar2 + 0x58))();
      }
    }
  }
  FUN_004bd60f();
  return iVar4;
}


