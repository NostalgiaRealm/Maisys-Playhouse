
/* ==== FUN_1000_0e8a @ 1000:0e8a ==== 
 * signature: undefined __cdecl16near FUN_1000_0e8a(void)
 * body: 1000:0e8a-1000:0f20;1000:0f22-1000:0fcb
 */

int __cdecl16near
FUN_1000_0e8a(undefined2 param_1,char *param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  int local_4;
  
  pcVar5 = (char *)0x0;
  uVar1 = *(undefined2 *)0xd4;
  *(undefined2 *)0xd4 = 0x10;
  local_4 = FUN_1000_0d54(param_1,param_2,param_3,param_4);
  if (((((local_4 == -1) && (*(int *)0x7e == 2)) &&
       (iVar2 = FUN_1000_08a2(param_2,0x2f), iVar2 == 0)) &&
      (iVar2 = FUN_1000_08a2(param_2,0x5c), iVar2 == 0)) &&
     (((*param_2 == '\0' || (param_2[1] != ':')) &&
      ((iVar2 = FUN_1000_0848(0x128), iVar2 != 0 &&
       (pcVar5 = (char *)FUN_1000_10bb(0x104), pcVar5 != (char *)0x0)))))) {
    *(undefined2 *)0xd4 = uVar1;
    while ((iVar2 = FUN_1000_0936(iVar2,pcVar5,0x103), iVar2 != 0 && (*pcVar5 != '\0'))) {
      iVar3 = FUN_1000_07f2(pcVar5);
      if ((pcVar5[iVar3 + -1] != '\\') && (pcVar5[iVar3 + -1] != '/')) {
        FUN_1000_0780(pcVar5,0x12d);
      }
      iVar3 = FUN_1000_07f2(param_2);
      iVar4 = FUN_1000_07f2(pcVar5);
      if (0x103 < (uint)(iVar4 + iVar3)) break;
      FUN_1000_0780(pcVar5,param_2);
      local_4 = FUN_1000_0d54(param_1,pcVar5,param_3,param_4);
      if ((local_4 != -1) ||
         ((*(int *)0x7e != 2 &&
          (((*pcVar5 != '\\' && (*pcVar5 != '/')) || ((pcVar5[1] != '\\' && (pcVar5[1] != '/')))))))
         ) break;
    }
  }
  else {
    *(undefined2 *)0xd4 = uVar1;
  }
  if (pcVar5 != (char *)0x0) {
    FUN_1000_109a(pcVar5);
  }
  return local_4;
}


