
/* ==== FUN_0044bde0 @ 0044bde0 ==== 
 * signature: undefined __fastcall FUN_0044bde0(int * param_1)
 * body: 0044bde0-0044be40
 */

void __fastcall FUN_0044bde0(int *param_1)

{
  char cVar1;
  
  FUN_0044bcb0(param_1,0x200,'\x01');
  cVar1 = FUN_0044bd00(param_1,0x80);
  if (cVar1 != '\0') {
    cVar1 = FUN_0044bd00(param_1,0x100);
    (**(code **)(*param_1 + 0x334))(cVar1);
    cVar1 = FUN_0044bd00(param_1,2);
    if (cVar1 == '\0') {
      FUN_0044bc10(param_1);
    }
    FUN_0044bcb0(param_1,0x80,'\0');
  }
  FUN_0041ede0();
  return;
}


