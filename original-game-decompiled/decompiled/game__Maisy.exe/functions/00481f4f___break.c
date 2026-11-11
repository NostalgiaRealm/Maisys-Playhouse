
/* ==== __break @ 00481f4f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00481f4f-00481f4f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


