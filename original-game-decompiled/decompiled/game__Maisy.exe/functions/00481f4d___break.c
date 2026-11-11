
/* ==== __break @ 00481f4d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00481f4d-00481f4d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


