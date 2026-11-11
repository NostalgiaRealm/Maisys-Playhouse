
/* ==== __break @ 004505ec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004505ec-004505ec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


