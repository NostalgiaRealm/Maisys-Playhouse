
/* ==== __break @ 00413fba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00413fba-00413fba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


