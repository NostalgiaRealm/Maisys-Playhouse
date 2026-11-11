
/* ==== __break @ 00481f4b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00481f4b-00481f4b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


