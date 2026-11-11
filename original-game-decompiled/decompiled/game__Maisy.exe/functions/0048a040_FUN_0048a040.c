
/* ==== FUN_0048a040 @ 0048a040 ==== 
 * signature: char __thiscall FUN_0048a040(void * this, char * param_1, short param_2)
 * body: 0048a040-0048a071
 */

char __thiscall FUN_0048a040(void *this,char *param_1,short param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  pcVar1 = param_1 + param_2;
  cVar2 = *pcVar1;
  *pcVar1 = '\0';
  iVar3 = FUN_00489fb0(this,param_1,(undefined4 *)0x0);
  *pcVar1 = cVar2;
  return '\x01' - (iVar3 == -1);
}


