
/* ==== __break @ 140213eb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140213eb-140213eb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


